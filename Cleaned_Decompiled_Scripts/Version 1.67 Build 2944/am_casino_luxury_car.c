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
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
var uLocal_32=0;
var uLocal_33=0;
int iLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
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
struct<7> Local_86={
0, 0, 1, 0, 0, 0, 0 
};
var uLocal_87=0;
struct<4> Local_88[8];
int iLocal_89[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_90[1]={
0 
};
var uLocal_91=0;
struct<4> Local_92={
0, 0, 0, 0 
};
var uLocal_93=0;
struct<21> Local_94={
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 
};
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
fLocal_26=0f;
fLocal_30=-0.0375f;
fLocal_31=0.17f;
iLocal_34=3;
iLocal_38=1;
iLocal_39=65;
iLocal_40=49;
iLocal_41=64;
fLocal_61=((0.05f + 0.275f) - 0.01f);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_334(PLAYER::PLAYER_ID(), 0, 1)){
if(!func_330(ScriptParam_94)){
func_323();
}}else{
func_323();
}}else{
func_323();
}
while (true){
func_322();
if(func_315()){
func_323();
}
if(func_314(1)){
func_323();
}
func_311();
switch (func_310(NETWORK::PARTICIPANT_ID())){
case 0:
if(func_309()==1 && func_307()){
func_306(1);
}
break;
case 1:
switch (func_309()){
case 1:
func_263();
break;
case 2:
func_306(2);
break;
}
break;
case 2:
func_323();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_309()){
case 0:
if(func_22()){
func_21(1);
}
break;
case 1:
func_1();
break;
case 2:
func_323();
break;
}}}}


void func_1(){
if(func_20() > 0){
func_13();
func_4();
}
switch (func_20()){
case 0:
func_3(1);
break;
case 1:
if(func_2()==0){
}else{
func_3(3);
}
break;
case 3:
func_21(2);
break;
}}

int func_2(){
return Local_86.f_4;
}


void func_3(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_86.f_1=iParam0;
}


void func_4(){
if(func_2() !=0){
return;
}
if(func_12(1)){
func_11(2);
return;
}
if(func_12(5)){
func_11(3);
return;
}
if(!func_7()){
if(func_5(PLAYER::PLAYER_ID())){
func_11(3);
}else{
func_11(1);
}
return;
}}


bool func_5(int iParam0){
return func_6(iParam0, 12);
}


var func__6(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_6, iParam1);
}


bool func_7(){
return func_8(func_10());
}

int func_8(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_9(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_9(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
return 1;
}}else{
return 1;
}
return 0;
}


var func__10(){
return Local_86.f_6;
}


void func_11(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_86.f_4=iParam0;
}


bool func_12(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Local_86.f_2[iVar0], iVar1);
}


void func_13(){
if(func_19() > 0){
if(func_19() !=5){
if(!func_7()){
func_18(5);
}}}
switch (func_19()){
case 0:
func_18(1);
break;
case 1:
if(func_5(func_17())){
func_14(func_15(func_16(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
func_18(2);
}
break;
case 2:
if(func_12(3)){
func_18(3);
}
break;
case 3:
if(func_12(4)){
func_18(4);
}
break;
case 4:
break;
case 5:
break;
}}


void func_14(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6){
struct<9> Var0;
Var0.f_0=-503325966;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_7=iParam6;
Var0.f_4=iParam1;
Var0.f_5=iParam4;
Var0.f_2=fParam2;
Var0.f_3=iParam3;
Var0.f_6=iParam5;
Var0.f_8=MISC::GET_FRAME_COUNT();
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 9, iParam0);
}}

int func_15(int iParam0, int iParam1, bool bParam2, int iParam3){
var uVar0;
bool bVar1;
int iVar2;
int iVar3;
bVar1=false;
while (bVar1 < 32){
iVar3=PLAYER::INT_TO_PLAYERINDEX(bVar1);
if(func_334(iVar3, 1, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar3), iParam3)){
if(!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iVar3)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar3), iParam3);
if(iVar2==iParam0){
if(PLAYER::GET_PLAYER_TEAM(iVar3)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2){
if(iVar3 !=PLAYER::PLAYER_ID() || iParam1){
MISC::SET_BIT(&uVar0, bVar1);
}
}}}}}
bVar1++;
}
return uVar0;
}

int func_16(){
return NETWORK::NET_TO_VEH(func_10());
}

int func_17(){
return Local_86.f_5;
}


void func_18(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_86.f_6.f_1=iParam0;
}

int func_19(){
return Local_86.f_6.f_1;
}

int func_20(){
return Local_86.f_1;
}


void func_21(int iParam0){
Local_86.f_0=iParam0;
}

int func_22(){
if(!func_12(0)){
func_262(PLAYER::PLAYER_ID());
func_261(0);
}
if(!func_23()){
return 0;
}
return 1;
}

int func_23(){
var uVar0;
struct<103> Var1;
int iVar2;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10())){
return 1;
}
if(!func_314(0)){
if(func_118(func_260(PLAYER::PLAYER_ID()), &Local_92, &(Local_92.f_3))){
func_117(0);
}}
if(func_115(func_116()) && func_314(0)){
MISC::CLEAR_AREA(Local_92, 5f, 1, 0, 0, 0);
if(func_112(&(Local_86.f_6), func_116(), Local_92, Local_92.f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
uVar0=func_16();
VEHICLE::SET_VEHICLE_DIRT_LEVEL(uVar0, 0f);
func_111(uVar0);
ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLE(uVar0, 1);
Var1={
func_110() 
};
func_24(uVar0, &Var1, 0, 1, 0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(uVar0, "MPBitset")){
iVar2=DECORATOR::DECOR_GET_INT(uVar0, "MPBitset");
}
MISC::SET_BIT(&iVar2, 11);
DECORATOR::DECOR_SET_INT(uVar0, "MPBitset", iVar2);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
DECORATOR::DECOR_SET_INT(uVar0, "Not_Allow_As_Saved_Veh", 1);
}
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(uVar0, 1);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(uVar0, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_116());
return 1;
}}
return 0;
}


void func_24(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
float fVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=ENTITY::GET_ENTITY_MODEL(uParam0);
if(PLAYER::PLAYER_ID() !=func_109()){
uParam1->f_100=PLAYER::PLAYER_ID();
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
func_84(uParam0, uParam1, bParam2, bParam3);
if(uParam1->f_102 !=0){
if(uParam1->f_102==2){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0, 1);
VEHICLE::SET_DRIFT_TYRES(uParam0, 0);
}elseif(uParam1->f_102==1){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0, 0);
VEHICLE::SET_DRIFT_TYRES(uParam0, 0);
}elseif(uParam1->f_102==3){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0, 1);
VEHICLE::SET_DRIFT_TYRES(uParam0, 1);
}}
if(func_83(ENTITY::GET_ENTITY_MODEL(uParam0))){
if(uParam1->f_9[44]==2){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(uParam0, 0, 1);
}else{
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(uParam0, 1, 1);
}}
if(!uParam1->f_78==-1 && uParam1->f_9[14]==-1){
AUDIO::OVERRIDE_VEH_HORN(uParam0, 1, uParam1->f_78);
}
if(!uParam1->f_79==-1){
AUDIO::SET_VEHICLE_HORN_SOUND_INDE(uParam0, uParam1->f_79);
}
if(func_82(uParam1->f_66, &fVar1) && uParam1->f_80 !=fVar1){
uParam1->f_80=fVar1;
}
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(uParam0, uParam1->f_80);
if(uParam1->f_97 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(uParam0, uParam1->f_97);
}
if(uParam1->f_99 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(uParam0, uParam1->f_99);
}
if(func_81(uParam0)){
func_75(uParam0, func_78(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(uParam0) > 1 && uParam1->f_98 >=0){
VEHICLE::SET_VEHICLE_LIVERY2(uParam0, uParam1->f_98);
}
if(MISC::IS_BIT_SET(uParam1->f_95, 0)){
func_45(uParam0, &(uParam1->f_81));
}
if((!func_35(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_28(uParam0);
}
if(func_27(iVar0)){
switch (uParam1->f_9[5]){
case 0:
VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
break;
case 1:
VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 0, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 2, false);
}
break;
case 2:
VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 1, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 3, false);
}
break;
case 3:
VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 2, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 4, false);
}
break;
default:
if(uParam1->f_9[5] !=-1){
VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 2, false);
}else{
VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 4, false);
}
}
break;
}}
if(func_26(ENTITY::GET_ENTITY_MODEL(uParam0))){
switch (uParam1->f_9[5]){
case 1:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(uParam0, 0);
VEHICLE::SET_VEHICLE_STRONG(uParam0, 1);
if(uParam1->f_9[16]==5){
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(uParam0, (Global_262145.f_21927 + 0.05f));
}
else{
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(uParam0, Global_262145.f_21927);
}
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(uParam0, 1);
break;
default:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(uParam0, 0);
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(uParam0, 1f);
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(uParam0, 1);
break;
}}
switch (uParam1->f_94){
case 0:
break;
case 1:
if(MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2)){
if(MISC::IS_BIT_SET(uParam1->f_95, 3)){
}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3)){
DECORATOR::DECOR_SET_INT(uParam0, "Player_Vehicle", -1);
}
break;
case 2:
if(MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3)){
DECORATOR::DECOR_SET_INT(uParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3)){
if(func_25(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81))){
DECORATOR::DECOR_SET_INT(uParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
}
else{
DECORATOR::DECOR_SET_INT(uParam0, "Veh_Modded_By_Player", -1);
}}
break;
case 3:
break;
case 4:
break;
}}}}


var func__25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


bool func_26(int iParam0){
return func_83(iParam0);
}

int func_27(int iParam0){
switch (iParam0){
case joaat("pounder2"):
case joaat("mule4"):
case joaat("speedo4"):
case -44799464:
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


void func_28(var uParam0){
struct<3> Var0;
if(Global_262145.f_20336){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uParam0)){
Var0.f_0=ENTITY::GET_ENTITY_MODEL(uParam0);
Var0.f_1=MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(uParam0));
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3)){
if(!DECORATOR::DECOR_EXIST_ON(uParam0, "RandomID")){
Var0.f_2=MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
DECORATOR::DECOR_SET_INT(uParam0, "RandomID", Var0.f_2);
}else{
Var0.f_2=DECORATOR::DECOR_GET_INT(uParam0, "RandomID");
}}
func_29(Var0);
}}}}


void func_29(struct<3> Param0){
struct<3> Var0;
Var0.f_0=-1251853784;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=Param0.f_0;
Var0.f_2.f_1=Param0.f_1;
Var0.f_2.f_2=Param0.f_2;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, func_30(1, 1));
}


var func__30(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_334(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_31(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}


bool func_31(int iParam0, int iParam1){
bool bVar0;
if(!func_34(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_32(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_32(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_33();
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

int func_33(){
return Global_1574918;
}

int func_34(var uParam0){
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

int func_35(int iParam0){
int iVar0;
if(func_44()){
iVar0=0;
while (iVar0 < 61){
if(func_43(iVar0)==iParam0){
if(func_36(iVar0)){
return 1;
}}
iVar0++;
}}
return 0;
}


bool func_36(int iParam0){
return func_37(iParam0, 6, 1);
}

int func_37(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_42()==0){
return MISC::IS_BIT_SET(func_38(func_41(iParam0), -1), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113810.f_668[iParam0], iParam1);
}
return 0;
}

int func_38(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_39(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__39(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_40(uParam1));
}

int func_40(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_33();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_41(int iParam0){
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

int func_42(){
return Global_32283;
}

int func_43(int iParam0){
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
case 60:
return 3;
break;
}
return 6;
}


bool func_44(){
return Global_100885.f_394 > 0;
}

int func_45(var uParam0, var uParam1){
int iVar0;
int iVar1;
if(!func_55(uParam0, uParam1)){
return 1;
}
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(uParam0, 0);
}
if(iVar0==0){
if(!func_53(uParam0)){
iVar1=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
if(func_48(&uParam0, iVar1)){
}else{
return 1;
}}else{
return 1;
}}elseif(iVar0 >=3){
return 1;
}elseif(func_46(uParam0)){}
return 0;
}

int func_46(var uParam0){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(uParam0, 0);
}
if(iVar0==1 || iVar0==2){
if(iVar0==1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uVar1=NETWORK::GET_NETWORK_TIME();
}else{
uVar1=MISC::GET_GAME_TIMER();
}
iVar2=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uVar1, Global_1577932));
iVar3=20000;
if(Global_1836600){
iVar3=2000;
}
if(iVar2 > iVar3){
GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(uParam0);
func_47(uParam0);
return 0;
}}
return 1;
}
return 0;
}


void func_47(var uParam0){
var uVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(uParam0, "MPBitset");
}}}
if(!MISC::IS_BIT_SET(uVar0, 16)){
MISC::SET_BIT(&uVar0, 16);
DECORATOR::DECOR_SET_INT(uParam0, "MPBitset", uVar0);
}}

int func_48(var uParam0, int iParam1){
func_52();
if(Global_1574632.f_18 !=0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*uParam0)){
Global_1950733.f_11=VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*uParam0);
if(Global_1950733.f_11 < 0f){
Global_1950733.f_11=0f;
}}
func_50(*uParam0, &Global_1950733, &(Global_1950733.f_1), &(Global_1950733.f_4), &(Global_1950733.f_7), &(Global_1950733.f_10));
Global_1950733.f_1.f_2=(Global_1950733.f_1.f_2 - Global_1950733.f_11);
if(Global_1950733.f_4.f_2 < 0f){
Global_1950733.f_12=1;
}
Global_1950733.f_13=200;
if(ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("comet4")){
Global_1950733.f_13=255;
}
if(Global_1950733.f_12){
if(func_49(uParam0, iParam1, Global_1950733, Global_1950733.f_1, Global_1950733.f_4, Global_1950733.f_7, Global_1950733.f_10, 0, Global_1950733.f_13)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577932=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577932=MISC::GET_GAME_TIMER();
}
return 1;
}}else{
Global_1950733.f_14={
Global_1950733.f_1 
};
Global_1950733.f_14=(Global_1950733.f_14 * -1f);
Global_1950733.f_17={
Global_1950733.f_4 
};
Global_1950733.f_17=(Global_1950733.f_17 * -1f);
Global_1950733.f_20={
Global_1950733.f_7 
};
Global_1950733.f_20.f_1=(Global_1950733.f_20.f_1 * -1f);
Global_1950733.f_20.f_2=(Global_1950733.f_20.f_2 * -1f);
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 0)){
Global_1950733.f_23=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 0);
}else{
Global_1950733.f_23=3;
}
Global_1950733.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 1)){
Global_1950733.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
}else{
Global_1950733.f_24=3;
}
if(((Global_1950733.f_23==0 && func_49(uParam0, iParam1, Global_1950733, Global_1950733.f_1, Global_1950733.f_4, Global_1950733.f_7, Global_1950733.f_10, 0, Global_1950733.f_13)) || Global_1950733.f_23 !=0) && ((Global_1950733.f_24==0 && func_49(uParam0, iParam1, Global_1950733, Global_1950733.f_14, Global_1950733.f_17, Global_1950733.f_20, Global_1950733.f_10, 1, Global_1950733.f_13)) || Global_1950733.f_24 !=0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577932=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577932=MISC::GET_GAME_TIMER();
}
return 1;
}}
return 0;
}


bool func_49(var uParam0, int iParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8){
return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_50(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
return 0;
}
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0, "chassis_dummy");
if(((!func_51(Global_1950759, 0f, 0f, 0f, 0) && !func_51(Global_1950762, 0f, 0f, 0f, 0)) && !func_51(Global_1950765, 0f, 0f, 0f, 0)) && !Global_1950768==0f){
*uParam2={
Global_1950759 
};
*uParam3={
Global_1950762 
};
*uParam4={
Global_1950765 
};
*uParam5=Global_1950768;
return 1;
}
switch (ENTITY::GET_ENTITY_MODEL(uParam0)){
case joaat("dominator"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0, "chassis_dummy");
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
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0, "chassis_dummy");
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
switch (ENTITY::GET_ENTITY_MODEL(uParam0)){
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
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0, "chassis_dummy");
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
case -426933872:
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
switch (ENTITY::GET_ENTITY_MODEL(uParam0)){
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
case -44799464:
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
switch (ENTITY::GET_ENTITY_MODEL(uParam0)){
case -1763675285:
*uParam2={
-1f, 0.2f, 0.43f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case -654498607:
*uParam2={
-0.003f, 2.764f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case 1336514315:
*uParam2={
-1.5f, 0.4f, 0.1f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.24f;
break;
case 1447690049:
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case 165968051:
*uParam2={
0f, 1.5f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case -536105557:
*uParam2={
-1f, 0.128f, 0.212f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.42f;
break;
case -979292575:
*uParam2={
-1f, 0.088f, 0.438f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case 610429990:
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case 802856453:
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
}
return 1;
}


bool func_51(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_52(){
Global_1950733=0;
Global_1950733.f_1={
0f, 0f, 0f 
};
Global_1950733.f_4={
0f, 0f, 0f 
};
Global_1950733.f_7={
0f, 0f, 0f 
};
Global_1950733.f_10=0f;
Global_1950733.f_11=0f;
Global_1950733.f_12=0;
Global_1950733.f_13=0;
Global_1950733.f_14={
0f, 0f, 0f 
};
Global_1950733.f_17={
0f, 0f, 0f 
};
Global_1950733.f_20={
0f, 0f, 0f 
};
Global_1950733.f_23=0;
Global_1950733.f_24=0;
}

int func_53(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(uParam0, 0) || func_54(uParam0)){
return 1;
}}
return 0;
}

int func_54(var uParam0){
var uVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(uParam0, "MPBitset");
return MISC::IS_BIT_SET(uVar0, 16);
}}}
return 0;
}

int func_55(var uParam0, var uParam1){
int iVar0;
bool bVar1;
int iVar2;
if(NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
iVar0=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
}else{
iVar0=func_109();
}
bVar1=false;
if(iVar0==PLAYER::PLAYER_ID()){
if(func_67(15, 0)){
bVar1=true;
}elseif(func_63(1)){
bVar1=true;
}}else{
bVar1=true;
}
if(((!bVar1 && ENTITY::DOES_ENTITY_EXIST(uParam0)) && !ENTITY::IS_ENTITY_DEAD(uParam0, 0)) && ((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))){
iVar2=Global_2359296[func_62() /*5568*/].f_681.f_2;
if(iVar2 > -1 && iVar2 < 415){
if(MISC::IS_BIT_SET(Global_1586488[iVar2 /*142*/].f_103, 8)){
bVar1=true;
}}}
if(((((((!(ENTITY::DOES_ENTITY_EXIST(uParam0) && !ENTITY::IS_ENTITY_DEAD(uParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0==func_109()) || !func_334(iVar0, 0, 0)) || !bVar1) || func_56(uParam0)){
return 0;
}
return 1;
}

int func_56(var uParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
if(func_58(PLAYER::PLAYER_ID())==3){
if(func_57(uParam0) !=-1){
return 1;
}}
if(Global_1950758){
return 1;
}
switch (ENTITY::GET_ENTITY_MODEL(uParam0)){
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
if(VEHICLE::GET_VEHICLE_MOD(uParam0, 7) !=-1){
return 1;
}
break;
case joaat("surano"):
if(VEHICLE::GET_VEHICLE_MOD(uParam0, 5)==1){
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
case -654498607:
case 1447690049:
return 1;
break;
case joaat("club"):
if((VEHICLE::GET_VEHICLE_MOD(uParam0, 7)==0 || VEHICLE::GET_VEHICLE_MOD(uParam0, 7)==1) || VEHICLE::GET_VEHICLE_MOD(uParam0, 7)==7){
return 1;
}
break;
case joaat("yosemite3"):
if((VEHICLE::GET_VEHICLE_MOD(uParam0, 45)==4 || VEHICLE::GET_VEHICLE_MOD(uParam0, 45)==5) || VEHICLE::GET_VEHICLE_MOD(uParam0, 45)==6){
return 1;
}
break;
}
return 0;
}

int func_57(var uParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(uParam0, "FMDeliverableID");
}}
return -1;
}

int func_58(int iParam0){
if(func_61(iParam0)==233){
return func_59(iParam0);
}
return -1;
}

int func_59(int iParam0){
if(func_60(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_60(int iParam0, int iParam1){
if(func_34(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_61(int iParam0){
if(func_34(iParam0)){
if(func_60(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_62(){
int iVar0;
iVar0=0;
return iVar0;
}


bool func_63(bool bParam0){
return func_64(PLAYER::PLAYER_ID(), bParam0);
}

int func_64(int iParam0, bool bParam1){
return func_65(iParam0, bParam1, 1);
}

int func_65(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_34(iParam0)){
return 0;
}
if(!bParam1){
if(func_66(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_109() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}

int func_66(int iParam0, int iParam1){
if(func_34(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_109()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}

int func_67(int iParam0, bool bParam1){
var uVar0;
int iVar1;
if(bParam1){
if(iParam0==15){
return 1;
}}
if(func_72(PLAYER::PLAYER_ID())){
switch (iParam0){
case 4:
case 5:
case 12:
case 15:
return 1;
break;
}}
uVar0=func_69(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_68(iVar1));
}

int func_68(int iParam0){
return (iParam0 % 32);
}


var func__69(int iParam0){
var uVar0;
uVar0=func_38(func_70(iParam0), -1);
return uVar0;
}

int func_70(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_71(iVar0);
switch (iVar1){
case 0:
return 1291;
break;
}
return 1291;
}

int func_71(int iParam0){
return (iParam0 / 32);
}

int func_72(int iParam0){
if(iParam0 !=func_109()){
if(func_73(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_73(int iParam0){
if(iParam0 !=func_109()){
if(func_334(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_74(Global_2657704[iParam0 /*463*/].f_321.f_7)==22;
}}}
return 0;
}

int func_74(int iParam0){
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


void func_75(var uParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=func_77(iParam1);
func_76(iVar1, &uVar0);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(uParam0, uVar0);
}


bool func_76(int iParam0, var uParam1){
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

int func_77(int iParam0){
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

int func_78(int iParam0, int iParam1, int iParam2){
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
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_79()) && Global_1576219){
if((iParam0==Global_1576220 && iParam1==Global_1576221) && iParam2==Global_1576222){
return 13;
}}
return 0;
}

int func_79(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_80() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_80(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}

int func_81(var uParam0){
switch (ENTITY::GET_ENTITY_MODEL(uParam0)){
case joaat("deathbike2"):
return 1;
break;
}
return 0;
}


bool func_82(int iParam0, var uParam1){
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

int func_83(int iParam0){
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
case 1447690049:
case 165968051:
case 610429990:
case 802856453:
return 1;
break;
}
return 0;
}


void func_84(int iParam0, var uParam1, bool bParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(uParam1->f_66 !=0){
}
if(!func_107(uParam0)){
if(MISC::GET_HASH_KEY(&(uParam1->f_1)) !=0){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0, &(uParam1->f_1));
}
if(*uParam1 >=0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0, *uParam1);
}}
if(uParam1->f_66==joaat("sovereign")){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=111;
}elseif(uParam1->f_66==joaat("casco")){
iVar0=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_106(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_106(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_106(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_106(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_106(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_106(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_106(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_106(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_106(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_106(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_106(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_106(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_106(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_106(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(uParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_106(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_106(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_106(iVar6));
}
iVar6++;
}}
if(uParam1->f_66==joaat("nightshark")){
VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(uParam0, 0);
if(VEHICLE::GET_VEHICLE_MOD(uParam0, 5) !=-1){
VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(uParam0, 1);
}}
if(MISC::IS_BIT_SET(uParam1->f_77, 13)){
VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(uParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(uParam0);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 12)){
VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(uParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(uParam0);
}
if(uParam1->f_5 !=-1 && uParam1->f_6 !=-1){
if(func_104(uParam1->f_5) || func_104(uParam1->f_6)){
}else{
VEHICLE::SET_VEHICLE_COLOURS(uParam0, uParam1->f_5, uParam1->f_6);
}}
if(uParam1->f_7 < 0){
uParam1->f_7=0;
}
if(uParam1->f_8 < 0){
uParam1->f_8=0;
}
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0, uParam1->f_7, uParam1->f_8);
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_103(uParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_102()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(uParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_101(uParam1->f_66)){
VEHICLE::SET_VEHICLE_WINDOW_TINT(uParam0, 0);
}else{
VEHICLE::SET_VEHICLE_WINDOW_TINT(uParam0, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(uParam0, uParam1->f_65);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 9)){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0, 0);
VEHICLE::SET_DRIFT_TYRES(uParam0, 0);
}
if(bParam2){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0, uParam1->f_70);
}
VEHICLE::SET_VEHICLE_NEON_COLOUR(uParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
VEHICLE::SET_VEHICLE_NEON_ENABLED(uParam0, 2, MISC::IS_BIT_SET(uParam1->f_77, 28));
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
func_100(iParam0, uParam1->f_69);
}}else{
func_100(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_92(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_106(iVar7 + 1))){
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
if((((func_86() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_85(1))){
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

int func_85(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}

int func_86(){
if((((Global_4718592.f_108230==6 || Global_4718592.f_108230==7) || Global_4718592.f_108230==18) || Global_4718592.f_108230==19) && Global_4718592.f_2==20){
return 0;
}
if(func_90(7)){
if(func_88(Global_2672524.f_4.f_16) || func_87(Global_2672524.f_4.f_16)){
return 0;
}}
return 1;
}

int func_87(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890739[iVar0 /*138*/].f_77.f_60 !=0;
}
return 0;
}

int func_88(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_89(iParam0, 9);
}
return 0;
}


var func__89(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


bool func_90(int iParam0){
return func_91(&(Global_2672524.f_184), iParam0);
}


var func__91(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_92(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*uParam0)==0){
return 0;
}
VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
}elseif(iVar1==22){
if((*uParam1)[iVar0] > 0){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, true);
if((*uParam1)[iVar0]==1){
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
}else{
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, ((*uParam1)[iVar0] - 2));
}}else{
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, false);
}}elseif(VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) !=((*uParam1)[iVar0] - 1)){
VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
if((*uParam1)[iVar0] > 0){
if(iVar1==23){
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
}elseif(iVar1==24){
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
}elseif(func_98(*uParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_97(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) !=func_95(*uParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_95(*uParam0, ((*uParam1)[38] - 1)), false);
}
func_94(uParam0);
if(func_93(*uParam0)){
VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
}
return 1;
}

int func_93(int iParam0){
int iVar0;
int iVar1;
int iVar2;
char cVar3[32];
if((ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(uParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(uParam0, 0);
iVar0=0;
while (iVar0 < 49){
iVar1=iVar0;
if(((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21) || iVar1==22){
}elseif(VEHICLE::GET_VEHICLE_MOD(uParam0, iVar1) !=-1){
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


void func_94(var uParam0){
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

int func_95(int iParam0, int iParam1){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
switch (ENTITY::GET_ENTITY_MODEL(uParam0)){
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
iVar0=func_96(iParam0, 38) + 1;
iVar1=func_96(iParam0, 24) + 1;
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

int func_96(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(uParam0, Global_152698)) && Global_152699==iParam1){
return Global_152700;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_98(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_97(int iParam0, int iParam1){
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

int func_98(var uParam0, int iParam1, int iParam2){
if(!func_99() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_99(){
return 0;
}


void func_100(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(VEHICLE::GET_NUM_MOD_KITS(uParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(uParam0, 0);
iVar0=VEHICLE::GET_VEHICLE_MOD(uParam0, 24);
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

int func_101(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


var func__102(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_103(var uParam0){
var uVar0;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(uParam0, "MPBitset");
}
return MISC::IS_BIT_SET(uVar0, 4);
}}}
return 0;
}

int func_104(int iParam0){
if(!func_99() && func_105(iParam0)){
return 1;
}
return 0;
}

int func_105(int iParam0){
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

int func_106(int iParam0){
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

int func_107(var uParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_108(PLAYER::PLAYER_ID(), -1)){
uParam0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
if(ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
return 0;
}
if(func_58(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(func_57(uParam0) !=-1){
return 1;
}}}
return 0;
}

int func_108(int iParam0, int iParam1){
var uVar0;
if(func_334(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}

int func_109(){
return -1;
}
struct<103> func_110(){
struct<103> Var0;
Var0.f_9=49;
Var0.f_59=2;
Var0.f_78=-1;
Var0.f_79=-1;
Var0.f_96=-1;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_100=-1;
Var0.f_66=func_116();
switch (Var0.f_66){
case joaat("cogcabrio"):
Var0.f_5=141;
Var0.f_6=1;
Var0.f_7=70;
Var0.f_8=82;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_98=0;
Var0.f_65=1;
Var0.f_69=7;
Var0.f_62=255;
Var0.f_63=255;
Var0.f_64=255;
Var0.f_74=255;
Var0.f_76=255;
Var0.f_67=0;
MISC::SET_BIT(&(Var0.f_77), 9);
Var0.f_9[15]=4;
Var0.f_9[23]=3;
break;
case joaat("windsor"):
Var0.f_5=9;
Var0.f_6=5;
Var0.f_7=7;
Var0.f_8=156;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_98=0;
Var0.f_65=2;
Var0.f_69=3;
Var0.f_62=255;
Var0.f_63=255;
Var0.f_64=255;
Var0.f_74=255;
Var0.f_76=255;
Var0.f_67=0;
MISC::SET_BIT(&(Var0.f_77), 9);
Var0.f_9[23]=32;
break;
case joaat("fugitive"):
Var0.f_5=147;
Var0.f_7=4;
Var0.f_8=156;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_98=0;
Var0.f_65=1;
Var0.f_62=255;
Var0.f_63=255;
Var0.f_64=255;
Var0.f_74=255;
Var0.f_76=255;
Var0.f_67=0;
MISC::SET_BIT(&(Var0.f_77), 26);
MISC::SET_BIT(&(Var0.f_77), 9);
Var0.f_9[23]=41;
break;
case joaat("superd"):
Var0.f_5=62;
Var0.f_6=1;
Var0.f_7=70;
Var0.f_8=156;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_98=0;
Var0.f_65=3;
Var0.f_62=255;
Var0.f_63=255;
Var0.f_64=255;
Var0.f_74=255;
Var0.f_76=255;
Var0.f_67=0;
MISC::SET_BIT(&(Var0.f_77), 9);
Var0.f_9[23]=24;
break;
case joaat("dubsta2"):
Var0.f_5=13;
Var0.f_6=12;
Var0.f_8=156;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_98=0;
Var0.f_65=1;
Var0.f_69=3;
Var0.f_62=255;
Var0.f_63=255;
Var0.f_64=255;
Var0.f_74=255;
Var0.f_76=255;
Var0.f_67=0;
MISC::SET_BIT(&(Var0.f_77), 9);
Var0.f_9[10]=2;
Var0.f_9[15]=4;
Var0.f_9[22]=1;
break;
case joaat("feltzer2"):
Var0.f_5=50;
Var0.f_6=28;
Var0.f_7=92;
Var0.f_8=156;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_98=0;
Var0.f_65=3;
Var0.f_69=7;
Var0.f_62=255;
Var0.f_63=255;
Var0.f_64=255;
Var0.f_74=255;
Var0.f_76=255;
Var0.f_67=0;
MISC::SET_BIT(&(Var0.f_77), 9);
Var0.f_9[0]=1;
Var0.f_9[15]=4;
Var0.f_9[23]=20;
break;
}
return Var0;
}


void func_111(var uParam0){
if(!Global_262145.f_4712){
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(uParam0, 0);
}}

int func_112(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
float fVar0;
int iVar1;
if(!STREAMING::IS_MODEL_VALID(iParam1)){
return 0;
}
if(!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1)){
return 0;
}
fVar0=1.5f;
if(iParam1==joaat("bombushka")){
fVar0=20f;
}
if(bParam9){
MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
}
iVar1=VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
*uParam0=NETWORK::VEH_TO_NET(iVar1);
Global_2794162.f_6737=iVar1;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(bParam13){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, 1);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, iParam8);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1)){
if(bParam6){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}else{
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
}
if(bParam11){
NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
}}
VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, iParam7);
VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, 1);
if(bParam10){
VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
}
func_113(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_113(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_114(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
if((Global_2635560.f_3026[1 /*6*/].f_5==iParam3 && Global_2635560.f_3026[1 /*6*/].f_4==iParam2) && vdist(Global_2635560.f_3026[1 /*6*/], Param0) < 0.5f){
return;
}
iVar0=0;
while (iVar0 < 2){
if(iVar0 < 1){
Global_2635560.f_3026[iVar0 /*6*/]={
Global_2635560.f_3026[iVar0 + 1 /*6*/] 
};
}
iVar0++;
}
Global_2635560.f_3026[1 /*6*/]={
Param0 
};
Global_2635560.f_3026[1 /*6*/].f_3=uParam1;
Global_2635560.f_3026[1 /*6*/].f_4=iParam2;
Global_2635560.f_3026[1 /*6*/].f_5=iParam3;
}}

int func_114(int iParam0, struct<3> Param1, int iParam2){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=iParam0;
if(iVar0 > -1){
iVar1=0;
while (iVar1 < 2){
if(Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==iParam2){
Var2={
Param1 
};
if(MISC::ABSF((Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f){
Var2.f_2=Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
}
if(vdist(Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f){
return iVar1;
}}
iVar1++;
}}
return -1;
}

int func_115(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_116(){
return Global_1895156[func_17() /*609*/].f_10.f_305;
}


void func_117(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(uLocal_90[iVar0]), iVar1);
}

int func_118(struct<3> Param0, var uParam1, var uParam2){
struct<31> Var0;
Var0.f_4=1125515264;
Var0.f_5=1;
Var0.f_6=1;
Var0.f_8=1082130432;
Var0.f_9=1176255488;
Var0.f_10=1;
Var0.f_13=1;
Var0.f_15=2;
Var0.f_22=2;
Var0.f_25=1;
Var0.f_26=1;
Var0.f_29=1123024896;
Var0.f_30=1;
Var0.f_0=func_259();
Var0.f_4=1000f;
Var0.f_27=1;
if(func_119(Param0, 0f, 0f, 0f, func_116(), 1, uParam1, uParam2, &Var0)){
return 1;
}
return 0;
}

int func_119(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6){
bool bVar0;
int iVar1;
float fVar2;
float fVar3;
float fVar4;
struct<61> Var5;
struct<61> Var6;
bVar0=false;
if(uParam6->f_14){
if(uParam6->f_25){
uParam6->f_25=0;
}}
if(!func_256()){
return 0;
}
if(func_255() && !Global_2635560.f_680==MISC::GET_FRAME_COUNT()){
if(!Global_2635560.f_676==0){
Global_2635560.f_676=0;
func_254();
func_253();
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_675){
if(!Global_2635560.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_679) < func_252(0)){
return 0;
}else{
Global_2635560.f_676=0;
}}}else{
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_677) > 30000){
Global_2635560.f_676=0;
}
if(!Global_2635560.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_679) > func_252(1)){
Global_2635560.f_676=0;
}}}
if(uParam6->f_6){
if(func_246(Param0)){
if(func_245(&Param0, 1)){
}}}
if(!Global_2635560.f_676==0){
if(vdist(Global_2635560.f_695, Param0) > 50f){
return 0;
}
if(Global_2635560.f_698 !=iParam2){
return 0;
}}
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
if(Global_2635560.f_676==0){
Global_2635560.f_682=0;
Global_2635560.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635560.f_675=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635560.f_695={
Param0 
};
Global_2635560.f_698=iParam2;
Global_2635560.f_681=NETWORK::GET_NETWORK_TIME_ACCURATE();
func_244();
func_254();
if(!uParam6->f_27 || (((((((((func_243(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2794162.f_942) && !Global_2794162.f_930) && !Global_2794162.f_938) && !Global_2794162.f_943) && !Global_2794162.f_960) && !Global_2794162.f_972) && !Global_2794162.f_944) && !Global_2794162.f_994)){
func_223(Param0, iParam2);
}
if(func_209(Param0)){
func_223(Param0, iParam2);
}
Global_2635560.f_676=2;
}
switch (Global_2635560.f_676){
case 2:
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f))){
Global_2635560.f_683={
Param0 
};
Global_2635560.f_686=0f;
if(Global_2794162.f_942){
fVar2=10f;
fVar3=5f;
fVar4=5f;
}else{
fVar2=4f;
fVar3=1f;
fVar4=1f;
}
if(((uParam6->f_3 && func_203(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_201(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0)){
Global_2635560.f_683={
Param0 
};
Global_2635560.f_686=*uParam5;
}else{
Var5.f_6=1082130432;
Var5.f_7=1176255488;
Var5.f_8=1;
Var5.f_10=1;
Var5.f_13=1;
Var5.f_15=1;
Var5.f_16=1;
Var5.f_31=1;
Var5.f_34=joaat("tailgater");
Var5.f_38=2;
Var5.f_45=2;
Var5.f_49=1123024896;
Var5.f_53=999;
Var5.f_54=1176256410;
Var5.f_55=1;
Var5.f_56=1;
Var5.f_57=1;
Var5.f_9=iParam3;
Var5.f_3=7f;
Var5.f_10=uParam6->f_5;
Var5.f_4=*uParam6;
Var5.f_13=uParam6->f_1;
Var5.f_14=uParam6->f_2;
Var5.f_5=uParam6->f_4;
Var5.f_15=uParam6->f_6;
Var5.f_11=uParam6->f_7;
Var5.f_6=uParam6->f_8;
Var5.f_7=uParam6->f_9;
Var5.f_16=uParam6->f_10;
Var5.f_17=uParam6->f_11;
Var5={
Param1 
};
Var5.f_12=1;
Var5.f_34=iParam2;
Var5.f_31=uParam6->f_13;
if(uParam6->f_32 && Global_2635560.f_682 > 0){
Var5.f_30=0;
Var5.f_29=1;
}else{
Var5.f_30=uParam6->f_30;
Var5.f_29=uParam6->f_31;
}
Var5.f_48=uParam6->f_14;
Var5.f_56=uParam6->f_25;
Var5.f_57=uParam6->f_26;
Var5.f_49=uParam6->f_29;
Var5.f_59=uParam6->f_33;
Var5.f_60=uParam6->f_34;
iVar1=0;
while (iVar1 < 2){
Var5.f_38[iVar1 /*3*/]={
uParam6->f_15[iVar1 /*3*/] 
};
Var5.f_45[iVar1]=uParam6->f_22[iVar1];
iVar1++;
}
func_145(&(Global_2635560.f_683), &(Global_2635560.f_686), &Var5);
}
func_143(Global_2635560.f_683, Global_2635560.f_686, iParam2, &(Global_2635560.f_673));
Global_2635560.f_671=0;
Global_2635560.f_672=0;
Global_2635560.f_682++;
Global_2635560.f_678=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635560.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635560.f_676=3;
}
break;
case 3:
if(Global_2635560.f_671){
if(Global_2635560.f_673==Global_2635560.f_674){
if(Global_2635560.f_672){
if(uParam6->f_12 && !uParam6->f_11){
if(func_142(Global_2635560.f_683, Global_2635560.f_686, iParam2, 1, 1036831949)){
Global_2635560.f_676=4;
Global_2635560.f_700=NETWORK::GET_NETWORK_TIME_ACCURATE();
}else{
bVar0=true;
}
}
else{
bVar0=true;
}}else{
func_140(Global_2635560.f_683, 0);
func_139(-1);
}}else{
Global_2635560.f_671=0;
Global_2635560.f_672=0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_678) > 3000){
func_139(-1);
}
break;
case 4:
if(uParam6->f_12 && !uParam6->f_11){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_700) < 10000){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635560.f_699)){
if(NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635560.f_699)){
if(!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635560.f_699)){
if(func_138(Global_2635560.f_683, Global_2635560.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || func_121(Global_2635560.f_683, Global_2635560.f_686, iParam2, 1, 0, 0, 0, 1, 0)){
func_140(Global_2635560.f_683, 0);
func_139(-1);
}else{
bVar0=true;
}}else{
func_140(Global_2635560.f_683, 0);
func_139(-1);
}
}}else{
func_139(-1);
}}else{
func_139(1);
}}else{
bVar0=true;
}
break;
case 5:
Global_2635560.f_683={
Param0 
};
Global_2635560.f_686=0f;
Var6.f_6=1082130432;
Var6.f_7=1176255488;
Var6.f_8=1;
Var6.f_10=1;
Var6.f_13=1;
Var6.f_15=1;
Var6.f_16=1;
Var6.f_31=1;
Var6.f_34=joaat("tailgater");
Var6.f_38=2;
Var6.f_45=2;
Var6.f_49=1123024896;
Var6.f_53=999;
Var6.f_54=1176256410;
Var6.f_55=1;
Var6.f_56=1;
Var6.f_57=1;
Var6.f_9=iParam3;
Var6.f_3=3.5f;
Var6.f_10=uParam6->f_5;
Var6.f_4=*uParam6;
Var6.f_12=1;
Var6.f_13=0;
Var6.f_15=uParam6->f_6;
Var6.f_11=uParam6->f_7;
Var6.f_6=uParam6->f_8;
Var6.f_7=uParam6->f_9;
Var6={
Param1 
};
Var6.f_34=iParam2;
Var6.f_31=uParam6->f_13;
Var6.f_30=1;
Var6.f_48=uParam6->f_14;
Var6.f_56=uParam6->f_25;
Var6.f_57=uParam6->f_26;
Var6.f_30=uParam6->f_30;
Var6.f_29=uParam6->f_31;
Var6.f_59=uParam6->f_33;
Var6.f_60=uParam6->f_34;
iVar1=0;
while (iVar1 < 2){
Var6.f_38[iVar1 /*3*/]={
uParam6->f_15[iVar1 /*3*/] 
};
Var6.f_45[iVar1]=uParam6->f_22[iVar1];
iVar1++;
}
Var6.f_49=uParam6->f_29;
func_145(&(Global_2635560.f_683), &(Global_2635560.f_686), &Var6);
Global_2635560.f_676=6;
break;
case 6:
bVar0=true;
break;
}
Global_2635560.f_695={
Param0 
};
Global_2635560.f_698=iParam2;
Global_2635560.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
if(bVar0){
Global_2635560.f_516=0;
*uParam4={
Global_2635560.f_683 
};
*uParam5=Global_2635560.f_686;
func_120(1);
return 1;
}
return 0;
}


void func_120(bool bParam0){
Global_2635560.f_676=0;
func_244();
func_254();
if(bParam0){
func_253();
}}

int func_121(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
float fVar2;
var uVar3;
int iVar4;
struct<3> Var5;
float fVar6;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam7==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam7==0){
if(func_334(iVar1, bParam3, bParam4)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_137(iVar1))){
if((!bParam5 || (bParam5==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam8) && bParam5) && func_132(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
fVar2=0.1f;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0)){
uVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0)){
iVar4=ENTITY::GET_ENTITY_MODEL(iVar3);
Var5={
ENTITY::GET_ENTITY_COORDS(iVar3, 0) 
};
fVar6=ENTITY::GET_ENTITY_HEADING(iVar3);
if(func_131(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_122(func_260(iVar1), Param0, fParam1, iParam2, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_122(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(vdist(Param0, Param1) < func_130(iParam3, 1008981770)){
func_123(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1)){
return 1;
}}
return 0;
}


void func_123(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
Var0={
0f, 1f, 0f 
};
func_129(&Var0, 0f, 0f, fParam1);
Var0={
Var0 / FtoV(vmag(Var0)) 
};
func_124(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
Var3={
Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) 
};
Var3.f_2=(Var3.f_2 - ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
Var4={
Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) 
};
Var4.f_2=(Var4.f_2 + ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
*uParam3={
Var3 
};
*uParam4={
Var4 
};
*uParam5=MISC::ABSF((Var2.f_0 - Var1.f_0));
}


void func_124(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_127(iParam0);
if(iVar0 !=0){
func_125(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
return;
}}
if(vmag(*uParam1) <=0.01f || vmag(*uParam2) <=0.01f){
if(iParam0==joaat("kosatka")){
if(fParam4 < 20.7f){
fParam4=20.7f;
}
if(fParam3 < 137.2f){
fParam3=137.2f;
}
if(fParam5 < 21.1f){
fParam5=21.1f;
}}
*uParam1=(0f - (fParam4 * 0.5f));
*uParam2=(0f + (fParam4 * 0.5f));
uParam1->f_1=(0f - (fParam3 * 0.5f));
uParam2->f_1=(0f + (fParam3 * 0.5f));
uParam1->f_2=(0f - (fParam5 * 0.5f));
uParam2->f_2=(0f + (fParam5 * 0.5f));
}}


void func_125(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_126(iParam0, &Global_1578013);
iVar0=0;
while (iVar0 < 2){
if(STREAMING::IS_MODEL_VALID(Global_1578013[iVar0])){
MISC::GET_MODEL_DIMENSIONS(Global_1578013[iVar0], &(Global_1578017[iVar0 /*3*/]), &(Global_1578024[iVar0 /*3*/]));
}
if(vmag(Global_1578017[iVar0 /*3*/]) <=0.01f || vmag(Global_1578024[iVar0 /*3*/]) <=0.01f){
Global_1578017[iVar0 /*3*/]=(0f - (fParam4 * 0.5f));
Global_1578024[iVar0 /*3*/]=(0f + (fParam4 * 0.5f));
Global_1578017[iVar0 /*3*/].f_1=(0f - (fParam3 * 0.5f));
Global_1578024[iVar0 /*3*/].f_1=(0f + (fParam3 * 0.5f));
Global_1578017[iVar0 /*3*/].f_2=(0f - (fParam5 * 0.5f));
Global_1578024[iVar0 /*3*/].f_2=(0f + (fParam5 * 0.5f));
}
Global_1578031[iVar0]=(Global_1578024[iVar0 /*3*/] - Global_1578017[iVar0 /*3*/]);
Global_1578034[iVar0]=(Global_1578024[iVar0 /*3*/].f_1 - Global_1578017[iVar0 /*3*/].f_1);
Global_1578037[iVar0]=(Global_1578024[iVar0 /*3*/].f_2 - Global_1578017[iVar0 /*3*/].f_2);
if(Global_1578031[iVar0] > Global_1578040){
Global_1578040=Global_1578031[iVar0];
}
if(Global_1578037[iVar0] > Global_1578041){
Global_1578041=Global_1578037[iVar0];
}
iVar0++;
}
Global_1578042=(Global_1578040 * -0.5f);
Global_1578045=(Global_1578040 * 0.5f);
Global_1578042.f_1=((((0.5f * Global_1578034[0]) + Global_1578034[1]) + Global_1578013.f_3) * -1f);
Global_1578045.f_1=(0.5f * Global_1578034[0]);
Global_1578042.f_2=(Global_1578037[0] * -0.5f);
Global_1578045.f_2=(Global_1578037[0] * 0.5f);
*uParam1={
Global_1578042 
};
*uParam2={
Global_1578045 
};
}


void func_126(int iParam0, var uParam1){
switch (iParam0){
case 1:
(*uParam1)[0]=joaat("hauler2");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 2:
(*uParam1)[0]=joaat("phantom3");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 3:
(*uParam1)[0]=joaat("nightshark");
(*uParam1)[1]=joaat("trailersmall2");
uParam1->f_3=0.5f;
break;
}}

int func_127(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_128(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_128(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


void func_129(var uParam0, struct<3> Param1){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=cos(Param1.f_0);
fVar1=sin(Param1.f_0);
Var2.f_0=*uParam0;
Var2.f_1=((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
Var2.f_2=((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
*uParam0={
Var2 
};
fVar0=cos(Param1.f_1);
fVar1=sin(Param1.f_1);
Var2.f_0=((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
Var2.f_1=uParam0->f_1;
Var2.f_2=((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
*uParam0={
Var2 
};
fVar0=cos(Param1.f_2);
fVar1=sin(Param1.f_2);
Var2.f_0=((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
Var2.f_1=((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
Var2.f_2=uParam0->f_2;
*uParam0={
Var2 
};
}


float func_130(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(iParam0==0){
return 5f;
}
func_124(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
Var2={
Var1 - Var0 
};
fVar3=(sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
return fVar3;
}

int func_131(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6){
if(func_122(Param0, Param3, fParam4, iParam5, 1036831949)){
return 1;
}
func_123(Param0, fParam1, iParam2, &Global_1982109, &(Global_1982109.f_3), &(Global_1982109.f_6), 1036831949);
func_123(Param3, fParam4, iParam5, &(Global_1982109.f_7), &(Global_1982109.f_10), &(Global_1982109.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1982109, Global_1982109.f_3, Global_1982109.f_6, Global_1982109.f_7, Global_1982109.f_10, Global_1982109.f_13)){
return 1;
}
return 0;
}

int func_132(int iParam0){
if(func_136(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764376={
func_135(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764376)){
return 1;
}
if(func_133(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_133(int iParam0, int iParam1){
int iVar0;
iVar0=func_134(iParam0);
if(func_34(iVar0)){
if(iVar0==func_134(iParam1)){
return 1;
}}
return 0;
}

int func_134(int iParam0){
if(func_34(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_109();
}
struct<13> func_135(var uParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
return Var0;
}

int func_136(int iParam0, var uParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_135(iParam0) 
};
Global_2764389={
func_135(uParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764376)){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764389)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376);
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764341, 35, &Global_2764389);
if(Global_2764306==Global_2764341){
return 1;
}}}}
return 0;
}

int func_137(int iParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[iParam0 /*463*/].f_255){
return 1;
}
return 0;
}

int func_138(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar1=iVar0;
if(func_334(iVar1, 0, 1) && func_334(iParam3, 0, 1)){
if(Global_2648711.f_261[iVar0]){
if(func_122(Global_2648711.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_122(func_260(iVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(Global_2648711.f_261[iVar0]){
if(func_122(Global_2648711.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_334(iVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(func_122(func_260(iVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_139(int iParam0){
if(Global_2635560.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_681) < 30000){
if(iParam0==-1 || (iParam0 > -1 && Global_2635560.f_682 < iParam0)){
Global_2635560.f_676=2;
}else{
Global_2635560.f_676=5;
}}else{
Global_2635560.f_676=5;
}}


void func_140(struct<3> Param0, int iParam1){
struct<3> Var0;
if(iParam1==0 && func_141(Param0, 0.01f)){
return;
}
if(iParam1 < 30 && vmag(Param0) > 0f){
Var0={
Global_2635560.f_2837[iParam1 /*3*/] 
};
Global_2635560.f_2837[iParam1 /*3*/]={
Param0 
};
func_140(Var0, iParam1 + 1);
}}

int func_141(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 30){
if(vdist(Param0, Global_2635560.f_2837[iVar0 /*3*/]) < fParam1){
return 1;
}
iVar0++;
}
return 0;
}

int func_142(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
var uVar2;
int iVar3;
float fVar4;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return 0;
}else{
func_254();
iVar3=0;
while (iVar3 < 3){
if(Global_2635560.f_687[iVar3]==-1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_123(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
if(bParam3){
fVar4=MISC::ABSF((Var0.f_2 - Var1.f_2));
Var0.f_2=(Var0.f_2 + ((fVar4 * 0.5f) - 2f));
Var1.f_2=(Var1.f_2 + (fVar4 * 0.5f));
}
Global_2635560.f_687[iVar3]=NETWORK::NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(Var0, Var1, fParam4);
Global_2635560.f_691[iVar3]=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_699=Global_2635560.f_687[iVar3];
return 1;
}
iVar3++;
}}
return 0;
}


void func_143(struct<3> Param0, var uParam1, int iParam2, var uParam3){
struct<8> Var0;
*uParam3=func_144(&Param0, &uParam1, &iParam2);
Var0.f_0=323285304;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0 
};
Var0.f_5=uParam1;
Var0.f_6=iParam2;
Var0.f_7=*uParam3;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_30(1, 1));
}


var func__144(var uParam0, var uParam1, var uParam2){
char cVar0[64];
var uVar1;
StringCopy(&cVar0, "", 64);
StringIntConCat(&cVar0, round(*uParam0), 64);
StringIntConCat(&cVar0, round(uParam0->f_1), 64);
StringIntConCat(&cVar0, round(uParam0->f_2), 64);
StringIntConCat(&cVar0, round(*uParam1), 64);
StringIntConCat(&cVar0, *uParam2, 64);
uVar1=MISC::GET_HASH_KEY(&cVar0);
return uVar1;
}


void func_145(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635560.f_1854 > 0){
iVar0=0;
while (func_196(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_146(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_146(var uParam0, var uParam1, var uParam2){
int iVar0;
struct<3> Var1;
float fVar2;
int iVar3;
var uVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
bool bVar9;
bool bVar10;
float fVar11;
float fVar12;
int iVar13;
int iVar14;
int iVar15;
bool bVar16;
int iVar17;
bool bVar18;
int iVar19;
float fVar20;
int iVar21;
int iVar22;
float fVar23;
int iVar24;
struct<3> Var25;
var uVar26;
struct<3> Var27;
float fVar28;
bool bVar29;
iVar0=0;
if(!vmag(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_192(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_187(uParam0, 1)){
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
iVar3=0;
iVar8=1;
if(uParam2->f_11){
iVar3 +=2;
iVar3++;
iVar8=0;
}elseif(uParam2->f_10==0 || (uParam2->f_33 > 0 && uParam2->f_16)){
iVar3++;
iVar8=0;
}
iVar3 +=4;
fVar11=3f;
fVar12=5f;
switch (uParam2->f_33){
case 0:
fVar11=3f;
fVar12=5f;
break;
case 1:
fVar11=2.75f;
fVar12=7.5f;
break;
default:
fVar11=2.5f;
fVar12=10f;
break;
}
iVar13=0;
Global_2643228.f_162=0;
Global_2643228.f_163=0;
Global_2643228.f_164=-99;
Global_2643228.f_165={
0f, 0f, 0f 
};
iVar14=0;
while (iVar14 < 40){
Global_2643228[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar14]=0f;
iVar14++;
}
iVar15=1;
if(func_127(uParam2->f_34) !=0){
iVar15=3;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
uParam2->f_18=0;
}
while (true){
iVar6=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6)){
PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
bVar10=false;
if(Global_2643228.f_164==iVar6){
bVar10=true;
}
Global_2643228.f_165={
Var1 
};
if(((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6)){
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
if(vdist(Var1, uParam2->f_35) > uParam2->f_4){
if(!func_180(&Var1, 0)){
if((uParam2->f_13 || uVar5 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar5 & 16==0){
if((uVar5 & 128==0 && uVar5 & 256==0) && uVar5 & 512==0){
if(!func_177(Var1)){
Var1={
func_172(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) 
};
if(vmag(Var1) > 0f){
if(!func_171(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_167(Var1, uParam2)){
if((uParam2->f_48 && !func_187(&Var1, 0)) || uParam2->f_48==0){
bVar16=true;
if(!bVar10){
if(bVar9){
iVar0=(iVar0 + -1);
bVar16=false;
}
}
if(vmag(Var1) > 0f){
if(((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_166(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_192(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar17=uParam2->f_31;
bVar18=true;
iVar19=1;
fVar20=uParam2->f_49;
if(!uParam2->f_55){
iVar17=0;
bVar18=false;
iVar19=0;
fVar20=1f;
}
elseif(uParam2->f_17){
iVar17=0;
bVar18=false;
iVar19=0;
if(uParam2->f_33==1){
fVar20=(fVar20 * 0.375f);
}
}
else{
bVar18=true;
iVar19=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar20=(fVar20 * 0.375f);
}
}
}
iVar21=0;
if(!func_165(Var1, fVar2, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_203(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar21=1;
}
}
elseif(func_203(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_121(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar21=1;
}
}
if(iVar21 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar23=0f;
if(uParam2->f_52){
iVar22=func_155(Var1, uParam2->f_54, &fVar23);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar22 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar22 < uParam2->f_53){
iVar14=0;
while (iVar14 < Global_2643228.f_162){
Global_2643228[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar14]=0f;
iVar14++;
}
Global_2643228.f_162=0;
uParam2->f_53=iVar22;
}
}
if(uParam2->f_30){
if(Global_2643228.f_162==0){
Global_2643228[0 /*3*/]={
Var1 
};
Global_2643228.f_121[0]=fVar2;
}
else{
iVar14=0;
while (iVar14 < Global_2643228.f_162 + 1){
if(iVar14 < 40){
if(vdist2(Var1, uParam2->f_35) < vdist2(Global_2643228[iVar14 /*3*/], uParam2->f_35)){
func_154(Var1, fVar2, iVar14);
iVar14=Global_2643228.f_162 + 1;
}
}
iVar14++;
}
}
Global_2643228.f_162++;
if(Global_2643228.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643228.f_162==40){
iVar0=100;
}
}
}
else{
Global_2643228[Global_2643228.f_162 /*3*/]={
Var1 
};
Global_2643228.f_121[Global_2643228.f_162]=fVar2;
Global_2643228.f_162++;
if(func_167(Var1, uParam2)){
Global_2643228.f_163++;
}
if(Global_2643228.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643228.f_162==40){
iVar0=100;
}
}
}
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar2;
return 1;
}
}
elseif(bVar16){
iVar0++;
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar2;
return 1;
}
}
}
else{
iVar13++;
}
}
else{
iVar0=100;
}
}
}
else{
iVar0++;
}
}
elseif(!uParam2->f_32){
iVar0=100;
}
}
else{
iVar0++;
}}else{
iVar0++;
}}
}
}
else{
iVar0++;
}}}else{
iVar0++;
}
}
else{
iVar0++;
}}else{
iVar13++;
}}else{
iVar13++;
}}
iVar0++;
if(iVar0 >=(40 + iVar13) || iVar0 >=100){
if(Global_2643228.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >=2)){
if(uParam2->f_30){
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}else{
if(Global_2643228.f_163 > 0 && !Global_2643228.f_163==Global_2643228.f_162){
func_152(0, uParam2);
}
iVar24=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643228.f_162);
if(uParam2->f_18 && uParam2->f_30){
iVar24=0;
}
Var25={
Global_2643228[0 /*3*/] 
};
uVar26=Global_2643228.f_121[0];
Global_2643228[0 /*3*/]={
Global_2643228[iVar24 /*3*/] 
};
Global_2643228.f_121[0]=Global_2643228.f_121[iVar24];
Global_2643228[iVar24 /*3*/]={
Var25 
};
Global_2643228.f_121[iVar24]=uVar26;
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_151(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
Var27={
Var1 
};
fVar28=fVar2;
if(!uParam2->f_50){
bVar29=true;
}
else{
bVar29=false;
}
if(func_192(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_187(&Var27, bVar29)){
if(!uParam2->f_50){
uParam2->f_33=0;
uParam2->f_50=1;
*uParam0={
Var27 
};
*uParam1=fVar28;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
return 0;
}else{
*uParam0={
Var27 
};
*uParam1=fVar28;
return 1;
}
}
else{
*uParam0={
Var27 
};
*uParam1=fVar28;
return 1;
}}}}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_147(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643228.f_164=iVar6;
}
return 0;
}


void func_147(var uParam0, var uParam1, var uParam2, struct<3> Param3){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
fVar0=1E+09f;
iVar3=-1;
iVar2=0;
while (iVar2 < *uParam0){
fVar1=vdist(*(uParam0[iVar2 /*4*/]), Param3);
if(fVar1 < fVar0){
if(!func_148(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
fVar0=fVar1;
iVar3=iVar2;
}}
iVar2++;
}
if(!iVar3==-1){
*uParam1={
*(uParam0[iVar3 /*4*/]) 
};
*uParam2=(uParam0[iVar3 /*4*/])->f_3;
}}

int func_148(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
if(func_150(Param0, fParam1, iParam2, iParam3, 0) || func_149(Param0, iParam2, iParam4)){
return 1;
}
return 0;
}

int func_149(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam1==iVar0 || iParam2==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(!Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==0){
if(func_122(Param0, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
if(func_334(iVar2, 0, 1) && func_334(iParam1, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_150(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam2==iVar0 || iParam3==1){
iVar1=iVar0;
bVar2=false;
if(bParam4){
if(func_334(iVar1, 0, 1) && func_334(iParam2, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(iParam2)){
bVar2=true;
}}}
if(!bVar2){
if(func_334(iVar1, 0, 1) && func_334(iParam2, 0, 1)){
if(Global_2648711.f_261[iVar0]){
if(vdist(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(vdist(func_260(iVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648711.f_261[iVar0]){
if(vdist(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(func_334(iVar1, 0, 1)){
if(vdist(func_260(iVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_151(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam2=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10)){
if(vmag(*uParam3) > 0f){
*uParam3={
func_172(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) 
};
if(!func_177(*uParam3)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_152(int iParam0, var uParam1){
if(!func_167(Global_2643228[iParam0 /*3*/], uParam1)){
Global_2643228.f_162=(Global_2643228.f_162 - 1);
func_153(iParam0);
if(Global_2643228.f_162 > Global_2643228.f_163){
func_152(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_152(iParam0 + 1, uParam1);
}}


void func_153(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643228[iParam0 /*3*/]={
Global_2643228[iParam0 + 1 /*3*/] 
};
Global_2643228.f_121[iParam0]=Global_2643228.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_154(struct<3> Param0, float fParam1, int iParam2){
struct<3> Var0;
var uVar1;
Var0={
Global_2643228[iParam2 /*3*/] 
};
uVar1=Global_2643228.f_121[iParam2];
Global_2643228[iParam2 /*3*/]={
Param0 
};
Global_2643228.f_121[iParam2]=fParam1;
if(iParam2 <=Global_2643228.f_162 && iParam2 < 39){
if(vmag(Var0) > 0f){
func_154(Var0, uVar1, iParam2 + 1);
}}}

int func_155(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
struct<3> Var1;
int iVar2;
int iVar3;
float fVar4;
float fVar5;
fVar4=99999.9f;
iVar0=0;
while (iVar0 < 32){
iVar3=iVar0;
if(func_156(iVar3)){
Var1={
func_260(iVar3) 
};
fVar5=vdist(Param0, Var1);
if(fVar5 < fParam1){
if(fVar5 < fVar4){
fVar4=fVar5;
}
iVar2++;
}}
iVar0++;
}
*fParam2=fVar4;
return iVar2;
}

int func_156(int iParam0){
if(func_334(iParam0, 0, 1)){
if(!func_163(iParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0)){
if(!PLAYER::GET_PLAYER_TEAM(iParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_160(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_157(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_160(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_132(iParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_157(int iParam0, int iParam1, int iParam2, int iParam3){
bool bVar0;
bool bVar1;
if(iParam2==1){
if(iParam0==iParam1){
return 1;
}
return 0;
}
if((iParam0 > -1 && iParam1 > -1) && iParam0==iParam1){
return 1;
}
if(((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4){
bVar0=Global_1058071.f_14[iParam0];
if(iParam3 !=-1){
bVar0=iParam3;
}
if(bVar0 < 17 && bVar0 > -1){
if(MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24064, bVar0)){
bVar1=Global_1058071.f_14[iParam1];
if(bVar1 < 17 && bVar1 > -1){
switch (iParam0){
case 0:
if(!func_158(iParam0, bVar0, iParam1, bVar1) || !func_158(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_158(iParam0, bVar0, iParam1, bVar1) || !func_158(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_158(iParam0, bVar0, iParam1, bVar1) || !func_158(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_158(iParam0, bVar0, iParam1, bVar1) || !func_158(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (12 + iParam1));
}
break;
}}}}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 0);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 1);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 2);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 3);
default:
}
break;
case 1:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 4);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 5);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 6);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 7);
default:
}
break;
case 2:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 8);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 9);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 10);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 11);
default:
}
break;
case 3:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 12);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 13);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 14);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 15);
default:
}
break;
}
return 0;
}

int func_158(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==iParam2){
return 1;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24065, bParam1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1816[iParam2 /*24279*/].f_24065, bParam3)){
return 0;
}
iVar0=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar4=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}
iVar5=0;
iVar5=0;
while (iVar5 <=31){
iVar1=iVar5;
if(((!func_334(iVar1, 1, 1) || func_31(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_159(iVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam2){
}else{
uVar2=PLAYER::GET_PLAYER_PED(iVar1);
if(PED::IS_PED_INJURED(uVar2)){
}else{
iVar3=ENTITY::GET_ENTITY_MODEL(iVar2);
if(iVar4==joaat("mp_f_freemode_01") || iVar4==joaat("mp_m_freemode_01")){
if(iVar3==joaat("mp_f_freemode_01") || iVar3==joaat("mp_m_freemode_01")){
return 1;
}else{
return 0;
}}elseif(iVar4 !=iVar3){
return 0;
}}}
iVar5++;
}
return iVar0;
}


var func__159(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

int func_160(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_161(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[iParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_161(int iParam0){
return func_162(iParam0);
}


var func__162(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_163(int iParam0){
if(func_31(iParam0, 0)){
return 1;
}
if(func_164()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_164(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_165(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
var uVar1;
int iVar2;
struct<3> Var3;
float fVar4;
iVar0=1;
iVar0 +=2;
iVar0 +=4;
iVar0 +=8;
iVar0 +=16;
iVar0 +=32;
iVar0 +=64;
iVar0=(iVar0 + 131076);
uVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar4=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_131(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
iVar0 +=4096;
iVar0 +=8192;
iVar0 +=16384;
iVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar4=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_131(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
return 0;
}

int func_166(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5){
if(func_138(Param0, fParam1, iParam2, iParam3, iParam4) || func_201(Param0, fParam1, iParam2, iParam3, iParam5)){
return 1;
}
return 0;
}

int func_167(struct<3> Param0, var uParam1){
if(uParam1->f_18){
switch (uParam1->f_26){
case 0:
if(func_170(Param0, uParam1->f_19, uParam1->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_168(Param0, uParam1->f_19, uParam1->f_22, 0, 0)){
return 1;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1)){
return 1;
}
break;
}
return 0;
}
return 1;
}

int func_168(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4){
func_169(&Param1, &Param2);
if(((!Param0.f_0 >=Param1.f_0 || !Param0.f_1 >=Param1.f_1) || !Param0.f_0 <=Param2.f_0) || !Param0.f_1 <=Param2.f_1){
return 0;
}
if(bParam3 && bParam4){
return 1;
}elseif(bParam3){
if(Param0.f_2 >=Param1.f_2){
return 1;
}}elseif(bParam4){
if(Param0.f_2 <=Param2.f_2){
return 1;
}}elseif(Param0.f_2 >=Param1.f_2 && Param0.f_2 <=Param2.f_2){
return 1;
}
return 0;
}


void func_169(var uParam0, var uParam1){
var uVar0;
if(*uParam0 > *uParam1){
uVar0=*uParam1;
*uParam1=*uParam0;
*uParam0=uVar0;
}
if(uParam0->f_1 > uParam1->f_1){
uVar0=uParam1->f_1;
uParam1->f_1=uParam0->f_1;
uParam0->f_1=uVar0;
}
if(uParam0->f_2 > uParam1->f_2){
uVar0=uParam1->f_2;
uParam1->f_2=uParam0->f_2;
uParam0->f_2=uVar0;
}}


bool func_170(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
if(bParam3 && bParam4){
Param0.f_2=0f;
Param1.f_2=0f;
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}elseif(bParam3){
if(Param0.f_2 > Param1.f_2){
Param0.f_2=Param1.f_2;
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}elseif(bParam4){
if(Param0.f_2 < Param1.f_2){
Param0.f_2=Param1.f_2;
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}

int func_171(struct<3> Param0, float fParam1){
int iVar0;
if(func_160(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_42750 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_42750){
if(Global_4980736.f_42751[iVar0 /*160*/].f_7 !=0){
if(func_122(Param0, Global_4980736.f_42751[iVar0 /*160*/], Global_4980736.f_42751[iVar0 /*160*/].f_6, Global_4980736.f_42751[iVar0 /*160*/].f_7, fParam1)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_6201 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_6201){
if(Global_4980736.f_6204[iVar0 /*546*/].f_15 !=0){
if(func_122(Param0, Global_4980736.f_6204[iVar0 /*546*/], Global_4980736.f_6204[iVar0 /*546*/].f_3, Global_4980736.f_6204[iVar0 /*546*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_91870 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_91870){
if(Global_4980736.f_91874[iVar0 /*529*/].f_12 !=0){
if(func_122(Param0, Global_4980736.f_91874[iVar0 /*529*/], Global_4980736.f_91874[iVar0 /*529*/].f_3, Global_4980736.f_91874[iVar0 /*529*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058071.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058071.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058071.f_233[iVar0], 0)){
if(func_122(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058071.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058071.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058071.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058071.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058071.f_119[iVar0], 0)){
if(func_122(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058071.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058071.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058071.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}


Vector3 func__172(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12){
struct<3> Var0;
var uVar1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
float fVar6;
float fVar7;
bool bVar8;
bool bVar9;
float fVar10;
struct<3> Var11;
struct<3> Var12;
struct<3> Var13;
if(bParam11){
if(vmag(Param4) > 0f){
if(!func_175(Param0, *uParam1, Param4)){
*uParam1=(*uParam1 + 180f);
}}
return Param0;
}
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar1, &uVar2);
if(uVar2 & 1024==0 && !bParam6){
PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
if(iVar4==iVar5){
*uParam8=1;
}
if(bParam10){
if(!uVar2 & 128==0){
return 0f, 0f, 0f;
}
if(!uVar2 & 256==0){
return 0f, 0f, 0f;
}
if(!uVar2 & 512==0){
return 0f, 0f, 0f;
}
if((iVar4 + iVar5) !=iParam2){
return 0f, 0f, 0f;
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_174(Param0)){
return 0f, 0f, 0f;
}}
if(iParam9 && *uParam8){
*uParam1=(*uParam1 + 180f);
if(*uParam1 > 360f){
*uParam1=(*uParam1 + -360f);
}}
if(*uParam1 <=90f || *uParam1 > 270f){
bVar8=true;
}else{
bVar8=false;
}
bVar9=false;
if(bVar8){
if(iVar4==0){
if(bParam10){
return 0f, 0f, 0f;
}}elseif(iParam2==iVar4){
bVar9=true;
}}elseif(iVar5==0){
if(bParam10){
return 0f, 0f, 0f;
}}elseif(iParam2==iVar5){
bVar9=true;
}
if(fVar6 < 0f){
fVar7=0f;
}else{
if(bVar8){
if(bVar9){
fVar7=(4.2f * (to_float(iVar4) * 0.5f));
}else{
fVar7=(4.2f * to_float(iVar4));
}
if(bVar9){
if(iVar4 > 2){
fVar7=(fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
}}elseif(iVar4 > 1){
fVar7=(fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
}}else{
if(bVar9){
fVar7=(4.2f * (to_float(iVar5) * 0.5f));
}else{
fVar7=(4.2f * to_float(iVar5));
}
if(bVar9){
if(iVar5 > 2){
fVar7=(fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
}}elseif(iVar5 > 1){
fVar7=(fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
}}
if(!uVar2 & 64==0){
fVar7=(fVar7 + (0.95f * fVar6));
}
if(!uVar2 & 4==0 || !uVar2 & 8==0){
fVar7=(fVar7 + -0.5f);
}
if((!uVar2 & 32==0 && uVar2 & 4==0) && uVar2 & 8==0){
fVar7=(fVar7 + -1f);
}
if(!bParam3 || !uVar2 & 8==0){
fVar7=(fVar7 + (4.2f * -0.5f));
}
if(!iParam7==0){
if(uVar2 & 8 !=0){
fVar10=func_173(iParam7, 3.5f);
}else{
fVar10=func_173(iParam7, 1.5f);
}
if(fVar10 > 1.8f){
fVar7=(fVar7 + ((fVar10 - 1.8f) * -0.5f));
}}}}
if(vmag(Param4) > 0f){
if(!func_175(Param0, *uParam1, Param4)){
if((bParam3 || uParam12) || ((uVar2 & 1024 !=0 || Param0.f_2==0f) && bParam6)){
*uParam1=(*uParam1 + 180f);
}elseif(bParam10){
return 0f, 0f, 0f;
}}}
if(fVar7 < 0f){
fVar7=0f;
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, *uParam1, fVar7, 0f, 0f) 
};
if(bParam3){
if(PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *uParam1, &Var11)){
Var12={
Var11 - Param0 
};
if(!iParam7==0){
Var13={
Var12 / FtoV(vmag(Var12)) 
};
if(uVar2 & 8 !=0){
fVar10=func_173(iParam7, 3.5f);
}else{
fVar10=func_173(iParam7, 1.5f);
}
Var13={
Var13 * FtoV((fVar10 * 0.5f)) 
};
Var12={
Var12 - Var13 
};
Var11={
Param0 + Var12 
};
}
Var13={
Var0 - Var11 
};
Var0={
Var11 
};
}}
return Var0;
}


float func_173(int iParam0, float fParam1){
float fVar0;
float fVar1;
float fVar2;
func_124(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
fVar2=(fVar1 - fVar0);
if(fVar2 < fParam1){
return fParam1;
}
return fVar2;
}

int func_174(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_175(struct<3> Param0, float fParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
0f, 1f, 0f 
};
func_129(&Var0, 0f, 0f, fParam1);
Var1={
Param2 - Param0 
};
if(func_176(Var1, Var0) >=0f){
return 1;
}
return 0;
}


float func_176(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_177(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_179(Param0);
iVar0=0;
while (iVar0 < Global_2642935[iVar1]){
if(func_178(Param0, &(Global_2642232[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642935[8]){
if(func_178(Param0, &(Global_2642232[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_178(struct<3> Param0, var uParam1){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_179(struct<2> Param0, var uParam1){
if(Param0.f_1 > Global_2642223[0]){
return 0;
}
if(Param0.f_1 > Global_2642223[1]){
if(Param0.f_0 < Global_2642227[0]){
return 1;
}else{
return 2;
}}
if(Param0.f_1 > Global_2642223[2]){
if(Param0.f_0 < Global_2642227[1]){
return 3;
}elseif(Param0.f_0 < Global_2642227[2]){
return 4;
}elseif(Param0.f_0 < Global_2642227[3]){
return 5;
}else{
return 6;
}}
return 7;
}

int func_180(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar2;
if(func_186(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_185(&Var1, Global_2635560.f_593, Global_2635560.f_596, 1036831949, 0, fVar2);
if(func_181(Var1, &uVar0) || func_186(Var1)){
Var1={
*uParam0 
};
func_185(&Var1, Global_2635560.f_593, Global_2635560.f_596, 1036831949, 1, fVar2);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_181(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
if(func_184()){
return 0;
}
iVar1=func_183();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635560.f_368[iVar0 /*12*/].f_9==1){
if(func_182(Param0, &(Global_2635560.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam1=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_182(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4){
switch (uParam1->f_10){
case 0:
return func_170(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), bParam3, bParam4);
break;
case 1:
return func_168(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
break;
case 2:
if(bParam3 && bParam4){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
}elseif(bParam3){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2)){
return 1;
}else{
return 0;
}}elseif(bParam4){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2)){
return 1;
}else{
return 0;
}}else{
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}
break;
}
return 0;
}

int func_183(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 10){
if(Global_2635560.f_368[iVar0 /*12*/].f_9){
iVar1++;
}
iVar0++;
}
return iVar1;
}


bool func_184(){
return Global_1950844.f_529;
}


void func_185(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5){
struct<3> Var0;
struct<3> Var1;
Var0={
*uParam0 - Param1 
};
Var0.f_2=0f;
if(vmag(Var0) > 0f){
Var0={
Var0 / FtoV(vmag(Var0)) 
};
}else{
Var0={
0f, 1f, 0f 
};
if(fParam5==0f){
func_129(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_129(&Var0, 0f, 0f, fParam5);
}}
Var0={
Var0 * FtoV((fParam2 + fParam3)) 
};
if(!bParam4){
Var1={
Param1 + Var0 
};
}else{
Var1={
Param1 - Var0 
};
}
*uParam0=Var1.f_0;
uParam0->f_1=Var1.f_1;
}

int func_186(struct<3> Param0){
float fVar0;
if(Global_2635560.f_596 > 0f){
fVar0=vdist(Param0, Global_2635560.f_593);
if(fVar0 < Global_2635560.f_596){
return 1;
}}
return 0;
}


bool func_187(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635560.f_26.f_18){
switch (Global_2635560.f_26.f_17){
case 0:
if(func_170(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_168(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, 0, 0)){
bVar0=true;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, Global_2635560.f_26.f_16, 0, 1)){
bVar0=true;
}
break;
}
if(bVar0){
if(bParam1){
*uParam0={
func_188(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, Global_2635560.f_26.f_16, Global_2635560.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}


Vector3 func__188(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6){
int iVar0;
struct<3> Var1;
switch (iParam4){
case 0:
func_185(&Param0, Param1, fParam3, fParam5, bParam6, 0);
break;
case 1:
func_191(&Param0, Param1, Param2, fParam5, bParam6);
break;
case 2:
func_189(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam4){
case 0:
if(!func_170(Var1, Param1, fParam3, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_168(Var1, Param1, Param2, 0, 0)){
return Var1;
}
break;
case 2:
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, 0, 1)){
return Var1;
}
break;
}
iVar0++;
}
return Param0;
}


void func_189(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
struct<3> Var4;
struct<3> Var5;
float fVar6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
struct<3> Var11;
Var0={
Param2 - Param1 
};
Var0.f_2=0f;
Var1={
*uParam0 - Param1 
};
Var1.f_2=0f;
Var2={
func_190(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var1) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
if(fVar3 < (fParam3 * 0.5f)){
if(!bParam5){
if(func_176(Var2, Var1) >=0f){
Var2={
Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_176(Var2, Var1) >=0f){
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) 
};
}else{
Var2={
Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) 
};
}
Var4={
*uParam0 + Var2 
};
fVar6=vdist(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
Var7={
Param1 + Param2 / Vector(2f, 2f, 2f) 
};
Var7.f_2=0f;
Var2={
func_190(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
Var2={
Var2 * FtoV((fParam3 * 0.5f)) 
};
Var8={
Var7 - Var2 
};
Var9={
Var7 + Var2 
};
Var10={
Var9 - Var8 
};
Var10.f_2=0f;
Var11={
*uParam0 - Var8 
};
Var11.f_2=0f;
Var2={
func_190(0f, 0f, 1f, Var10) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var11) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
if(!bParam5){
if(func_176(Var2, Var11) >=0f){
Var2={
Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_176(Var2, Var11) >=0f){
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) 
};
}else{
Var2={
Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) 
};
}
Var5={
*uParam0 + Var2 
};
if(vdist(Var4, *uParam0, uParam0->f_1, 0f) < vdist(Var5, *uParam0, uParam0->f_1, 0f)){
*uParam0={
Var4 
};
}else{
*uParam0={
Var5 
};
}}}


Vector3 func__190(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


void func_191(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6){
struct<3> Var0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
Var0={
*uParam0 
};
fVar1=(*uParam0 - Param1.f_0);
fVar2=(*uParam0 - Param3.f_0);
if(fVar1 < fVar2){
fVar3=fVar1;
}else{
fVar3=fVar2;
}
fVar4=(uParam0->f_1 - Param1.f_1);
fVar5=(uParam0->f_1 - Param3.f_1);
if(fVar4 < fVar5){
fVar6=fVar4;
}else{
fVar6=fVar5;
}
Var0={
*uParam0 
};
if(!bParam6){
if(fVar3 < fVar6){
if(fVar1 < fVar2){
Var0.f_0=(Param1.f_0 - fParam5);
}else{
Var0.f_0=(Param3.f_0 + fParam5);
}}elseif(fVar4 < fVar5){
Var0.f_1=(Param1.f_1 - fParam5);
}else{
Var0.f_1=(Param3.f_1 + fParam5);
}}elseif(fVar3 < fVar6){
if(fVar1 < fVar2){
Var0.f_0=(Param3.f_0 + fParam5);
}else{
Var0.f_0=(Param1.f_0 - fParam5);
}}elseif(fVar4 < fVar5){
Var0.f_1=(Param3.f_1 + fParam5);
}else{
Var0.f_1=(Param1.f_1 - fParam5);
}
*uParam0={
Var0 
};
}

int func_192(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
bool bVar1;
if(func_246(Param0)){
if(func_195(uParam1, bParam4, 0, 1, 1)){
if(bParam4){
}
return 1;
}}
if(func_193(uParam1, bParam4, 1)){
if(bParam4){
}
return 1;
}
if(bParam5){
if(func_141(*uParam1, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam2){
if(vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0]){
if(bParam4){
func_185(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
}
bVar1=true;
}
iVar0++;
}
if(bVar1){
return 1;
}
return 0;
}

int func_193(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_181(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_194(&Var2, &(Global_2635560.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_181(Var2, &uVar1) || func_186(Var2)){
Var2={
*uParam0 
};
func_194(&Var2, &(Global_2635560.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}


void func_194(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_188(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_188(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_188(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_185(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_191(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_189(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}

int func_195(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640611[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640611[iVar0 /*17*/].f_16)){
if(func_182(*uParam0, &(Global_2640611[iVar0 /*17*/]), 1008981770, bParam4, 0)){
if(bParam1){
if(Global_2640611[iVar0 /*17*/].f_12){
*uParam0={
Global_2640611[iVar0 /*17*/].f_13 
};
}
else{
Var1={
*uParam0 
};
func_194(&Var1, &(Global_2640611[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_195(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_194(&Var1, &(Global_2640611[iVar0 /*17*/]), 1036831949, 1, 0);
}
*uParam0={
Var1 
};
}}
return 1;
}}}
iVar0++;
}
return 0;
}

int func_196(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
int iVar8;
float fVar9;
bool bVar10;
int iVar11;
float fVar12;
struct<3> Var13;
var uVar14;
if(Global_2635560.f_1854 > 0){
iVar1=0;
iVar2=0;
if(!vmag(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_192(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_187(uParam0, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
Global_2643228.f_162=0;
Global_2643228.f_163=0;
iVar5=0;
while (iVar5 < 40){
Global_2643228[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar5]=0f;
iVar5++;
}
if(uParam2->f_30){
func_199(*uParam0);
}elseif(uParam2->f_29){
func_198();
}else{
func_197();
}
iVar1=0;
while (iVar1 < Global_2635560.f_1854){
iVar2=Global_2635560.f_2260[iVar1];
if(iVar2 > -1 && iVar2 < 101){
Var3={
Global_2635560.f_1855[iVar2 /*4*/] 
};
fVar4=Global_2635560.f_1855[iVar2 /*4*/].f_3;
if(vmag(Var3) > 0f){
if((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57==0){
if((uParam2->f_5 > 0f && vdist(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f){
if((uParam2->f_12 && !func_166(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_192(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar6=uParam2->f_31;
bVar7=true;
iVar8=1;
fVar9=uParam2->f_49;
if(!uParam2->f_55){
iVar6=0;
bVar7=false;
iVar8=0;
fVar9=1f;
}
elseif(uParam2->f_17){
iVar6=0;
bVar7=false;
iVar8=0;
if(uParam2->f_33==1){
fVar9=(fVar9 * 0.375f);
}
}
else{
bVar7=true;
iVar8=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar9=(fVar9 * 0.375f);
}}
}
bVar10=false;
if(!func_165(Var3, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_203(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar10=true;
}}elseif(func_203(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_121(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar10=true;
}
}
if(bVar10){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar12=0f;
if(uParam2->f_52){
iVar11=func_155(Var3, uParam2->f_54, &fVar12);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar11 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar11 < uParam2->f_53){
iVar5=0;
while (iVar5 < Global_2643228.f_162){
Global_2643228[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar5]=0f;
iVar5++;
}
Global_2643228.f_162=0;
uParam2->f_53=iVar11;
}
}
if(uParam2->f_30){
if(Global_2643228.f_162==0){
Global_2643228[0 /*3*/]={
Var3 
};
Global_2643228.f_121[0]=fVar4;
}
else{
iVar5=0;
while (iVar5 < Global_2643228.f_162 + 1){
if(iVar5 < 40){
if(vdist2(Var3, uParam2->f_35) < vdist2(Global_2643228[iVar5 /*3*/], uParam2->f_35)){
func_154(Var3, fVar4, iVar5);
iVar5=Global_2643228.f_162 + 1;
}
}
iVar5++;
}
}
Global_2643228.f_162++;
if(Global_2643228.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635560.f_1854;
}
elseif(Global_2643228.f_162==40){
iVar1=Global_2635560.f_1854;
}
}
}
else{
Global_2643228[Global_2643228.f_162 /*3*/]={
Var3 
};
Global_2643228.f_121[Global_2643228.f_162]=fVar4;
Global_2643228.f_162++;
if(Global_2643228.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635560.f_1854;
}
elseif(Global_2643228.f_162==40){
iVar1=Global_2635560.f_1854;
}
}
}}}else{
*uParam0={
Var3 
};
*uParam1=fVar4;
return 1;
}
}
}
else{
*uParam0={
Var3 
};
*uParam1=fVar4;
return 1;
}}}
}}}}
iVar1++;
}
if(Global_2643228.f_162 > 0){
if(uParam2->f_30){
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}else{
if(Global_2643228.f_163 > 0 && !Global_2643228.f_163==Global_2643228.f_162){
func_152(0, uParam2);
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643228.f_162);
Var13={
Global_2643228[0 /*3*/] 
};
uVar14=Global_2643228.f_121[0];
Global_2643228[0 /*3*/]={
Global_2643228[iVar0 /*3*/] 
};
Global_2643228.f_121[0]=Global_2643228.f_121[iVar0];
Global_2643228[iVar0 /*3*/]={
Var13 
};
Global_2643228.f_121[iVar0]=uVar14;
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 2){
return 0;
}elseif(uParam2->f_59 && Global_2635560.f_1854 > 0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
*uParam0={
Global_2635560.f_1855[iVar0 /*4*/] 
};
*uParam1=Global_2635560.f_1855[iVar0 /*4*/].f_3;
return 1;
}else{
return 0;
}}}
return 0;
}


void func_197(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635560.f_1854){
Global_2635560.f_2260[iVar0]=iVar0;
iVar0++;
}}


void func_198(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=0;
while (iVar0 < Global_2635560.f_1854){
Global_2635560.f_2260[iVar0]=iVar0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2635560.f_1854){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
uVar3=Global_2635560.f_2260[iVar1];
Global_2635560.f_2260[iVar1]=Global_2635560.f_2260[iVar2];
Global_2635560.f_2260[iVar2]=uVar3;
iVar0++;
}}


void func_199(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635560.f_1854){
uVar1=func_200(Param0, fVar0, &fVar0);
Global_2635560.f_2260[iVar2]=uVar1;
iVar2++;
}}

int func_200(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar0=-1;
fVar1=1E+08f;
iVar3=0;
while (iVar3 < Global_2635560.f_1854){
fVar2=vdist2(Param0, Global_2635560.f_1855[iVar3 /*4*/]);
if(fVar2 < fVar1 && fVar2 > fParam1){
iVar0=iVar3;
fVar1=fVar2;
}
iVar3++;
}
*fParam2=fVar1;
return iVar0;
}

int func_201(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_202(Param0, iParam2, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_131(Param0, fParam1, iParam2, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
if(func_334(iVar2, 0, 1) && func_334(iParam3, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_202(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_130(iParam1, 1008981770);
fVar1=func_130(iParam3, 1008981770);
fVar2=vdist(Param0, Param2);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_203(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
Global_2635560.f_2=0;
if(fParam1 > 0f){
if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1)){
return 0;
}}
if(fParam2 > 0f){
if(PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2)){
return 0;
}}
if(fParam3 > 0f){
if(OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, iParam16)){
return 0;
}}
Global_2635560.f_2++;
if(bParam11){
if(FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0){
return 0;
}}
Global_2635560.f_2++;
if(fParam12 > 0f){
if(func_208(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635560.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_204(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635560.f_2++;
return 1;
}

int func_204(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_334(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_205(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_334(iVar1, 1, 1)){
if(!func_31(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && iVar1 !=PLAYER::PLAYER_ID())){
if((func_137(iVar1) || !bParam8) && !Global_2657704[iVar1 /*463*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(iVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_205(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_205(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}


Vector3 func__205(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_207() && Global_1853988[iVar0 /*867*/].f_834) && !func_206(Global_1853988[iVar0 /*867*/].f_835)){
return Global_1853988[iVar0 /*867*/].f_835;
}
return func_260(iParam0);
}

int func_206(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


var func__207(){
return Global_2683883.f_19;
}

int func_208(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam6==0){
if(func_334(iVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_137(iVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && uParam7) && bParam4) && func_132(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_260(iVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_209(struct<3> Param0){
var uVar0;
if(Global_2794162.f_942 && func_210(Param0, &uVar0)){
return 1;
}
return 0;
}

int func_210(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
*uParam1=-1;
iVar2=func_222(Param0, 0);
if(!iVar2==-1){
iVar0=83;
while (iVar0 <=87){
iVar1=iVar0;
if(func_211(iVar1)){
if(func_222(Global_1950844.f_543[iVar0 /*3*/], 0)==iVar2){
*uParam1=iVar0 + 1000;
return 1;
}}
iVar0++;
}}
return 0;
}

int func_211(int iParam0){
int iVar0;
int iVar1;
iVar0=func_221(iParam0);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293==iVar0){
return 1;
}
iVar1=Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
if(iVar1 !=func_109()){
if(Global_1853988[iVar1 /*867*/].f_267.f_293==iVar0){
return 1;
}}
if(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7==iParam0){
return 1;
}
if(func_220(PLAYER::PLAYER_ID(), 0) || (func_217(PLAYER::PLAYER_ID()) && func_74(func_216(PLAYER::PLAYER_ID()))==12)){
return 1;
}
if(func_215(PLAYER::PLAYER_ID()) || (func_217(PLAYER::PLAYER_ID()) && func_74(func_216(PLAYER::PLAYER_ID()))==8)){
return 1;
}
if(func_214(PLAYER::PLAYER_ID()) || (func_217(PLAYER::PLAYER_ID()) && func_74(func_216(PLAYER::PLAYER_ID()))==5)){
return 1;
}
if(func_213(PLAYER::PLAYER_ID()) || (func_217(PLAYER::PLAYER_ID()) && func_74(func_216(PLAYER::PLAYER_ID()))==10)){
return 1;
}
if(func_212(PLAYER::PLAYER_ID()) || (func_217(PLAYER::PLAYER_ID()) && func_74(func_216(PLAYER::PLAYER_ID()))==6)){
return 1;
}
return 0;
}

int func_212(int iParam0){
if(iParam0 !=func_109()){
if(func_334(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_74(Global_2657704[iParam0 /*463*/].f_321.f_7)==6;
}}}
return 0;
}

int func_213(int iParam0){
if(iParam0 !=func_109()){
if(func_334(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_74(Global_2657704[iParam0 /*463*/].f_321.f_7)==10;
}}}
return 0;
}

int func_214(int iParam0){
if(iParam0 !=func_109()){
if(func_334(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_109()){
return func_74(Global_2657704[iParam0 /*463*/].f_321.f_7)==5;
}}}
return 0;
}

int func_215(int iParam0){
if(iParam0 !=func_109()){
if(func_334(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_109()){
return func_74(Global_2657704[iParam0 /*463*/].f_321.f_7)==8;
}}}
return 0;
}

int func_216(int iParam0){
if(iParam0 !=func_109() && func_334(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_17;
}
return -1;
}

int func_217(int iParam0){
if(iParam0 !=func_109() && func_334(iParam0, 1, 1)){
if(func_219(iParam0) && !func_218(iParam0)){
return 1;
}}
return 0;
}

int func_218(int iParam0){
if(iParam0 !=func_109() && func_334(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321, 4);
}
return 0;
}

int func_219(int iParam0){
if(iParam0 !=func_109() && func_334(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321, 3);
}
return 0;
}

int func_220(int iParam0, bool bParam1){
var uVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_109()){
if(func_334(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_109()){
return func_74(Global_2657704[iParam0 /*463*/].f_321.f_7)==12;
}}}
return 0;
}

int func_221(int iParam0){
switch (iParam0){
case 83:
return 1;
break;
case 84:
return 2;
break;
case 85:
return 3;
break;
case 86:
return 4;
break;
case 87:
return 5;
break;
}
return 0;
}

int func_222(struct<3> Param0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 12){
if(Global_2640611[iVar0 /*17*/].f_9==1 || iParam1==0){
if(func_182(Param0, &(Global_2640611[iVar0 /*17*/]), 0.1f, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_223(struct<3> Param0, int iParam1){
int iVar0;
int iVar1;
int iVar2[3];
int iVar3[3];
if(Global_2635560.f_45.f_319){
return;
}
if(!func_242()){
if(iParam1==0){
}
iVar1=func_241(Param0);
if(iVar1 > -1){
func_253();
switch (iVar1){
case 0:
func_240(-1139.678f, -2694.165f, 12.949f, 283.4298f);
func_240(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
func_240(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
func_240(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
func_240(-1110.51f, -2693.236f, 12.9595f, 298.84f);
func_240(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
func_240(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
func_240(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
func_240(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
break;
case 1:
func_240(-1411.731f, -533.6462f, 30.2703f, 215.116f);
func_240(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
func_240(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
func_240(-1438.8f, -584.4678f, 29.595f, 118.1207f);
break;
case 2:
func_240(-780.5905f, 292.8159f, 84.673f, 97.2697f);
func_240(-788.6147f, 291.8073f, 84.72f, 97.7348f);
func_240(-765.572f, 294.4459f, 84.5182f, 93.9327f);
func_240(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
break;
case 3:
func_240(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
func_240(-647.239f, 49.2068f, 40.7135f, 355.9723f);
func_240(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
func_240(-610.5603f, 5.1258f, 41.2404f, 98.696f);
break;
case 4:
func_240(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
func_240(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
func_240(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
func_240(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
break;
case 5:
func_240(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
func_240(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
func_240(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
func_240(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
break;
case 6:
func_240(-58.1347f, -573.486f, 36.5789f, 341.8442f);
func_240(-64.227f, -590.2214f, 35.1654f, 338.972f);
func_240(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
func_240(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
break;
case 7:
func_240(-232.1917f, -978.1431f, 28.166f, 160.2115f);
func_240(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
func_240(-251.993f, -998.3963f, 28.3747f, 249.3297f);
func_240(-262.222f, -994.5226f, 29.23f, 249.4673f);
break;
case 8:
func_240(151.624f, -1309.343f, 28.2023f, 243.201f);
func_240(152.7886f, -1305.608f, 28.2023f, 243.9973f);
func_240(145.8017f, -1287.19f, 28.312f, 120.6275f);
func_240(142.8935f, -1282.286f, 28.3156f, 120.3024f);
break;
case 9:
func_240(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
func_240(-2322.187f, 277.638f, 168.4671f, 23.4249f);
func_240(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
func_240(-2314.396f, 290.9f, 168.4671f, 114.3983f);
func_240(-2316.81f, 296.424f, 168.4671f, 113.6228f);
func_240(-2318.572f, 299.2423f, 168.4671f, 293.83f);
func_240(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
func_240(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
func_240(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
func_240(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
func_240(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
func_240(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
break;
case 10:
func_238(78);
break;
case 11:
func_238(79);
break;
case 12:
func_238(82);
break;
case 13:
func_238(81);
break;
case 14:
func_238(73);
break;
case 15:
func_240(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_240(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_240(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_240(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 16:
func_238(75);
break;
case 17:
func_238(76);
break;
case 18:
func_238(77);
break;
case 19:
func_240(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
func_240(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
func_240(-931.6637f, 703.693f, 151.369f, 87.7447f);
func_240(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
break;
case 20:
func_238(80);
break;
case 21:
case 25:
func_238(87);
break;
case 22:
case 26:
func_238(88);
break;
case 23:
case 27:
func_238(89);
break;
case 24:
case 28:
func_238(90);
break;
case 29:
case 30:
if(func_237(iParam1)){
func_238(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33);
}
break;
case 31:
func_240(-352.53f, -1836.742f, 21.924f, 274.8f);
func_240(-336.412f, -1837.341f, 22.497f, 264.6f);
func_240(-320.707f, -1840.342f, 23.195f, 257.4f);
func_240(-304.646f, -1843.295f, 24.219f, 261.599f);
func_240(-288.991f, -1844.123f, 25.228f, 269.599f);
func_240(-273.031f, -1842.69f, 26.27f, 278.199f);
func_240(-361.271f, -1814.526f, 21.63f, 96.399f);
func_240(-343.939f, -1813.331f, 22.368f, 87.999f);
func_240(-326.881f, -1814.914f, 23.106f, 78.799f);
func_240(-310.941f, -1818.223f, 23.957f, 78.799f);
func_240(-294.16f, -1820.207f, 25.092f, 89.199f);
func_240(-277.392f, -1819.237f, 26.283f, 100.199f);
func_240(-257.213f, -1838.977f, 27.318f, 285.799f);
func_240(-261.286f, -1815.615f, 27.439f, 110.399f);
func_240(-246.086f, -1808.691f, 28.576f, 117.398f);
func_240(-231.901f, -1800.767f, 28.619f, 119.398f);
func_240(-199.77f, -1989.34f, 26.62f, 180.997f);
func_240(-201.159f, -1971.41f, 26.62f, 190.798f);
func_240(-205.571f, -1954.537f, 26.62f, 199.998f);
func_240(-197.879f, -1940.822f, 26.62f, 114.998f);
func_240(-141.311f, -1967.41f, 21.805f, 91.997f);
func_240(-141.145f, -1977.861f, 21.813f, 91.997f);
func_240(-140.565f, -1988.289f, 21.815f, 91.997f);
func_240(-145.045f, -2032.168f, 21.956f, 73.597f);
func_240(-147.923f, -2041.781f, 21.956f, 73.597f);
func_240(-185.791f, -1948.005f, 26.62f, 18.596f);
func_240(-181.155f, -1965.422f, 26.62f, 8.196f);
func_240(-179.172f, -1984.332f, 26.62f, 1.396f);
func_240(-225.88f, -1824.637f, 28.897f, 299.596f);
func_240(-211.722f, -1816.401f, 28.859f, 300.796f);
func_240(-217.99f, -1792.624f, 28.649f, 119.196f);
func_240(-203.828f, -1784.264f, 28.678f, 119.996f);
func_240(-194.254f, -2018.756f, 26.62f, 75f);
func_240(-186.956f, -2031.369f, 26.62f, 338f);
func_240(-194.916f, -2047.94f, 26.62f, 329.8f);
func_240(-205.565f, -2064.553f, 26.62f, 320.2f);
func_240(-218.606f, -2077.97f, 26.62f, 311.2f);
func_240(-233.372f, -2089.601f, 26.62f, 304f);
func_240(-207.822f, -2002.11f, 26.62f, 173.799f);
func_240(-207.567f, -2027.579f, 26.62f, 158.599f);
func_240(-215.235f, -2042.272f, 26.62f, 148.999f);
func_240(-227.643f, -2058.498f, 26.62f, 138.799f);
func_240(-242.977f, -2071.452f, 26.62f, 125.798f);
func_240(-256.624f, -2087.982f, 26.62f, 204.198f);
func_240(-249.549f, -2098.767f, 26.62f, 294.198f);
func_240(-228.998f, -2048.889f, 26.62f, 141.198f);
func_240(-176.963f, -2009.239f, 24.519f, 261.597f);
func_240(-195.128f, -1806.447f, 28.814f, 299.997f);
func_240(-180.02f, -1797.414f, 28.797f, 299.997f);
func_240(-165.796f, -1787.672f, 28.788f, 304.597f);
func_240(-188.124f, -1774.765f, 28.711f, 123.197f);
func_240(-417.428f, -1836.374f, 19.238f, 121.797f);
func_240(-430.967f, -1844.844f, 18.468f, 121.797f);
func_240(-444.94f, -1853.739f, 17.786f, 121.797f);
break;
}}elseif(func_234(Param0, &iVar2, &iVar3) || (func_210(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)))){
func_253();
iVar0=0;
while (iVar0 < iVar2){
if(iVar2[iVar0] > 1000){
iVar2[iVar0]=(iVar2[iVar0] - 1000);
iVar3[iVar0]=1;
}
if(iVar2[iVar0] >=83 && iVar2[iVar0] <=87){
Global_2635560.f_516=1;
}
if(!iVar3[iVar0] && func_233(iVar2[iVar0], -1)){
if(func_237(iParam1)){
func_238(iVar2[iVar0]);
}}elseif(iVar3[iVar0]){
if(((func_232(PLAYER::PLAYER_PED_ID()) || func_230(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)){
if(func_229(iParam1)){
func_228(iVar2[iVar0]);
}
elseif(func_227(iParam1)){
func_226(iVar2[iVar0]);
func_228(iVar2[iVar0]);
}
else{
func_226(iVar2[iVar0]);
func_228(iVar2[iVar0]);
}}else{
func_224(iVar2[iVar0], iParam1);
}}else{
func_238(iVar2[iVar0]);
}
iVar0++;
}}}}


void func_224(int iParam0, int iParam1){
switch (iParam0){
case 23:
func_240(434.1898f, 6535.824f, 27.0084f, 66.9998f);
func_240(434.9146f, 6539.661f, 26.9691f, 66.9998f);
func_240(435.1928f, 6543.298f, 26.889f, 66.9998f);
func_240(429.8495f, 6506.581f, 27.1807f, 59.7997f);
func_240(429.8463f, 6511.11f, 27.0717f, 60.9997f);
func_240(434.2748f, 6581.816f, 26.1303f, 85.1993f);
func_240(443.1016f, 6580.717f, 26.0739f, 85.1993f);
func_240(451.9748f, 6579.937f, 26.0319f, 85.1993f);
break;
case 26:
func_240(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
func_240(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
func_240(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
func_240(-142.1459f, 6342.532f, 30.49f, 44.7982f);
func_240(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
func_240(-151.1909f, 6358.461f, 30.4907f, 223.398f);
func_240(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
func_240(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
break;
case 24:
func_240(60.7522f, 6465.807f, 30.3941f, 213.3973f);
func_240(57.4131f, 6462.55f, 30.3663f, 213.3973f);
func_240(48.0438f, 6452.668f, 30.3245f, 213.3973f);
func_240(40.6765f, 6445.235f, 30.3475f, 213.3973f);
func_240(37.8298f, 6442.521f, 30.3489f, 213.3973f);
func_240(35.0212f, 6439.866f, 30.3332f, 213.3973f);
func_240(32.1837f, 6437.21f, 30.2991f, 213.3973f);
func_240(29.4732f, 6434.526f, 30.3702f, 213.3973f);
break;
case 25:
func_240(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
func_240(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
func_240(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
func_240(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
func_240(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
func_240(-360.983f, 6130.575f, 30.4401f, 45.7965f);
func_240(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
func_240(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
break;
case 22:
func_240(45.2181f, 6341.107f, 30.2296f, 14.3964f);
func_240(41.6057f, 6339.476f, 30.2306f, 14.3964f);
func_240(39.2508f, 6359.469f, 30.2398f, 207.3965f);
func_240(36.3203f, 6356.893f, 30.2398f, 207.3965f);
func_240(51.6043f, 6365.022f, 30.2399f, 33.5965f);
func_240(65.6465f, 6380.626f, 30.2398f, 212.9964f);
func_240(24.8587f, 6366.36f, 30.2286f, 32.7965f);
func_240(19.6254f, 6360.736f, 30.2305f, 32.7965f);
break;
case 28:
func_240(94.0245f, 181.2181f, 103.5566f, 160.3953f);
func_240(91.0039f, 182.2811f, 103.6179f, 160.3953f);
func_240(68.365f, 148.2105f, 103.5812f, 339.9951f);
func_240(62.2104f, 150.5185f, 103.6101f, 339.9951f);
func_240(69.5198f, 186.4278f, 103.9415f, 69.7949f);
func_240(62.59f, 189.0833f, 103.9981f, 69.7949f);
func_240(55.6095f, 191.8089f, 104.2827f, 69.7949f);
func_240(154.7309f, 182.1333f, 104.6903f, 160.1945f);
break;
case 31:
func_240(322.4916f, -714.5293f, 28.1574f, 158.5941f);
func_240(329.5591f, -694.4284f, 28.1656f, 158.5941f);
func_240(324.565f, -684.3934f, 28.3133f, 247.194f);
func_240(326.4054f, -679.9403f, 28.3192f, 247.194f);
func_240(297.1177f, -804.3891f, 28.4859f, 160.594f);
func_240(288.5461f, -814.6994f, 28.1563f, 163.194f);
func_240(286.0127f, -821.7357f, 28.3093f, 163.194f);
func_240(283.6725f, -828.9533f, 28.1247f, 158.994f);
break;
case 29:
func_240(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
func_240(-1454.819f, -359.998f, 42.7885f, 311.3925f);
func_240(-1462.675f, -360.1352f, 42.9255f, 223.392f);
func_240(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
func_240(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
func_240(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
func_240(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
func_240(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
break;
case 30:
func_240(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
func_240(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
func_240(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
func_240(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
func_240(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
func_240(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
func_240(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
func_240(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
break;
case 27:
func_240(1414.237f, -1656.344f, 60.2449f, 332.7893f);
func_240(1416.668f, -1659.933f, 60.6982f, 332.7893f);
func_240(1419.327f, -1663.972f, 61.2382f, 332.7893f);
func_240(1421.557f, -1667.367f, 61.7479f, 332.7893f);
func_240(1423.744f, -1670.853f, 62.3125f, 332.7893f);
func_240(1412.157f, -1652.746f, 59.9105f, 332.7893f);
func_240(1426.201f, -1673.598f, 62.7133f, 330.1893f);
func_240(1435.804f, -1694.73f, 65.0743f, 352.5892f);
break;
case 33:
func_240(2810.787f, 4435.92f, 47.5295f, 20.7996f);
func_240(2808.413f, 4443.922f, 47.3732f, 14.7995f);
func_240(2806.298f, 4451.786f, 47.1865f, 15.3995f);
func_240(2803.925f, 4459.858f, 46.9823f, 15.3995f);
func_240(2801.756f, 4467.755f, 46.8147f, 15.3995f);
func_240(2893.563f, 4430.258f, 47.338f, 105.9994f);
func_240(2903.725f, 4425.854f, 47.3523f, 23.1992f);
func_240(2907.076f, 4418.059f, 47.6301f, 23.1992f);
break;
case 36:
func_240(1680.448f, 4821.131f, 41.0599f, 186.399f);
func_240(1679.76f, 4829.447f, 40.9167f, 186.399f);
func_240(1678.668f, 4838.03f, 41.0221f, 187.7989f);
func_240(1677.612f, 4846.028f, 41.0452f, 187.7989f);
func_240(1675.851f, 4860.434f, 41.0901f, 187.7989f);
func_240(1674.843f, 4868.343f, 41.0684f, 187.7989f);
func_240(1673.543f, 4875.752f, 41.0684f, 186.7986f);
func_240(1672.525f, 4884.972f, 41.0478f, 186.7986f);
break;
case 34:
func_240(422.863f, 3583.901f, 32.2386f, 313.5986f);
func_240(426.6211f, 3583.208f, 32.2386f, 313.5986f);
func_240(430.466f, 3582.042f, 32.2386f, 313.5986f);
func_240(434.2751f, 3580.881f, 32.2386f, 313.5986f);
func_240(438.1525f, 3579.911f, 32.2386f, 313.5986f);
func_240(442.0173f, 3578.948f, 32.2386f, 313.5986f);
func_240(420.2694f, 3572.995f, 32.2385f, 353.7984f);
func_240(424.4825f, 3572.1f, 32.2386f, 348.1984f);
break;
case 35:
func_240(627.005f, 2726.019f, 40.7692f, 4.3984f);
func_240(620.9771f, 2725.759f, 40.7897f, 4.3984f);
func_240(614.8536f, 2725.355f, 40.8321f, 4.3984f);
func_240(611.1158f, 2737.387f, 40.9734f, 185.3984f);
func_240(598.9713f, 2736.261f, 41.0602f, 186.5986f);
func_240(592.6151f, 2735.886f, 41.0602f, 186.5986f);
func_240(586.0421f, 2735.9f, 41.0535f, 186.5986f);
func_240(627.4468f, 2742.742f, 40.8963f, 183.5979f);
break;
case 32:
func_240(214.3318f, 2492.26f, 53.9736f, 312.7978f);
func_240(213.9953f, 2496.666f, 53.8128f, 312.7978f);
func_240(213.7524f, 2501.251f, 53.5958f, 312.7978f);
func_240(213.6645f, 2505.908f, 53.3477f, 312.7978f);
func_240(213.4478f, 2510.734f, 53.1055f, 312.7978f);
func_240(212.9148f, 2515.268f, 52.9376f, 312.7978f);
func_240(211.5983f, 2519.216f, 52.6753f, 312.7978f);
func_240(210.1288f, 2523.187f, 52.3493f, 312.7978f);
break;
case 38:
func_240(153.6785f, -2476.192f, 4.9877f, 178.4004f);
func_240(150.9209f, -2516.979f, 4.9909f, 179.9999f);
func_240(150.9499f, -2524.965f, 4.9905f, 179.9999f);
func_240(153.866f, -2467.242f, 4.9877f, 178.4004f);
func_240(150.8115f, -2533.139f, 4.9895f, 180.0004f);
func_240(153.8647f, -2433.386f, 5.2336f, 170.2002f);
func_240(142.7427f, -2536.147f, 5f, 205.0002f);
func_240(138.8267f, -2535.865f, 5f, 205.0002f);
break;
case 41:
func_240(-341.4255f, -2734.451f, 5.0413f, 314.8f);
func_240(-334.0134f, -2741.43f, 5.0269f, 314.8f);
func_240(-329.7832f, -2745.604f, 5.0196f, 314.8f);
func_240(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
func_240(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
func_240(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
func_240(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
func_240(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
break;
case 39:
func_240(1143.73f, -3105.091f, 4.8989f, 146.1979f);
func_240(1140.009f, -3104.954f, 4.8985f, 146.1979f);
func_240(1136.267f, -3104.69f, 4.8969f, 146.1979f);
func_240(1132.732f, -3104.277f, 4.8944f, 146.1979f);
func_240(1128.724f, -3104.54f, 4.896f, 146.1979f);
func_240(1125.106f, -3104.057f, 4.8942f, 146.1979f);
func_240(1117.8f, -3103.674f, 4.8922f, 146.1979f);
func_240(1114.015f, -3103.448f, 4.8931f, 146.1979f);
break;
case 40:
func_240(653.1188f, -2700.255f, 5.2101f, 24.7971f);
func_240(656.1305f, -2707.245f, 5.214f, 24.7971f);
func_240(659.3307f, -2714.378f, 5.2188f, 22.7968f);
func_240(662.2627f, -2722.228f, 5.2188f, 19.1968f);
func_240(649.2115f, -2728.359f, 5.1124f, 20.5967f);
func_240(646.2606f, -2720.833f, 5.1103f, 21.3967f);
func_240(643.4582f, -2713.846f, 5.1099f, 21.3967f);
func_240(640.3513f, -2706.571f, 5.108f, 21.3967f);
break;
case 37:
func_240(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
func_240(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
func_240(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
func_240(-238.214f, -2614.847f, 5.0502f, 271.5953f);
func_240(-238.013f, -2630.961f, 5.0331f, 271.3949f);
func_240(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
func_240(-253.401f, -2631.108f, 5.0319f, 272.195f);
func_240(-245.5563f, -2631.06f, 5.0323f, 272.195f);
break;
case 83:
func_240(-1190.795f, -3371.393f, 12.945f, 348.399f);
func_240(-1185.634f, -3373.893f, 12.945f, 348.399f);
func_240(-1114.818f, -3414.185f, 12.945f, 314.199f);
func_240(-1110.976f, -3416.37f, 12.945f, 314.199f);
func_240(-1098.621f, -3460.792f, 12.9453f, 329.799f);
func_240(-1093.31f, -3463.464f, 12.9453f, 329.799f);
func_240(-1089.433f, -3443.234f, 12.945f, 329.799f);
func_240(-1084.271f, -3446.31f, 12.945f, 329.799f);
func_240(-1093.808f, -3452.407f, 12.9451f, 329.799f);
func_240(-1088.383f, -3455.466f, 12.9451f, 329.799f);
func_240(-1118.474f, -3411.385f, 12.9451f, 313.199f);
func_240(-1181.003f, -3375.658f, 12.945f, 346.799f);
func_240(-1212.071f, -3382.283f, 12.9451f, 328.999f);
func_240(-1217.708f, -3378.623f, 12.9451f, 328.999f);
func_240(-1216.986f, -3390.396f, 12.9452f, 328.999f);
func_240(-1222.566f, -3386.707f, 12.9452f, 328.999f);
func_240(-1222.06f, -3398.882f, 12.9452f, 328.999f);
func_240(-1227.698f, -3394.946f, 12.9451f, 328.999f);
func_240(-1097.517f, -3472.086f, 12.9453f, 328.999f);
func_240(-1102.951f, -3468.619f, 12.9452f, 328.999f);
func_240(-1227.253f, -3407.38f, 12.9452f, 328.999f);
func_240(-1232.836f, -3403.572f, 12.9452f, 328.999f);
break;
case 84:
func_240(-1364.879f, -3285.201f, 12.945f, 330.2f);
func_240(-1359.229f, -3288.52f, 12.945f, 330.2f);
func_240(-1369.636f, -3293.617f, 12.945f, 330.2f);
func_240(-1363.881f, -3296.796f, 12.945f, 330.2f);
func_240(-1432.898f, -3247.702f, 12.945f, 330.2f);
func_240(-1437.282f, -3255.429f, 12.945f, 330.2f);
func_240(-1441.623f, -3262.969f, 12.945f, 330.2f);
func_240(-1443.954f, -3251.006f, 12.945f, 330.2f);
func_240(-1374.159f, -3301.61f, 12.945f, 330.2f);
func_240(-1368.508f, -3304.924f, 12.945f, 330.2f);
func_240(-1359.905f, -3276.118f, 12.9448f, 330.4f);
func_240(-1354.228f, -3279.63f, 12.9448f, 330.4f);
func_240(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
func_240(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
func_240(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
func_240(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
func_240(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
func_240(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
func_240(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
func_240(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
func_240(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
func_240(-1444.064f, -3273.751f, 12.945f, 330.7996f);
break;
case 85:
func_240(-2060.105f, 3186.159f, 31.81f, 329.599f);
func_240(-2065.521f, 3189.007f, 31.81f, 150.199f);
func_240(-2055.006f, 3194.989f, 31.81f, 329.599f);
func_240(-2060.471f, 3197.816f, 31.81f, 150.199f);
func_240(-2049.611f, 3204.032f, 31.81f, 329.599f);
func_240(-2055.048f, 3206.958f, 31.81f, 150.199f);
func_240(-2049.627f, 3216.253f, 31.81f, 150.199f);
func_240(-2039.024f, 3222.121f, 31.81f, 329.599f);
func_240(-2044.17f, 3213.208f, 31.81f, 329.599f);
func_240(-2044.672f, 3224.638f, 31.81f, 150.199f);
func_240(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
func_240(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
func_240(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
func_240(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
func_240(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
func_240(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
func_240(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
func_240(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
func_240(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
func_240(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
func_240(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
func_240(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
break;
case 86:
func_240(-1843.828f, 3085.094f, 31.81f, 165.8f);
func_240(-1828.571f, 3084.114f, 31.841f, 329.2f);
func_240(-1823.414f, 3092.762f, 31.843f, 330f);
func_240(-1819.045f, 3100.435f, 31.845f, 330f);
func_240(-1833.313f, 3075.722f, 31.838f, 330f);
func_240(-1847.648f, 3076.8f, 31.835f, 165.8f);
func_240(-1838.479f, 3078.576f, 31.863f, 150.599f);
func_240(-1833.605f, 3086.784f, 31.863f, 150.599f);
func_240(-1828.424f, 3095.617f, 31.863f, 150.599f);
func_240(-1823.95f, 3102.821f, 31.862f, 150.599f);
func_240(-1819.284f, 3110.67f, 31.8615f, 150.2f);
func_240(-1814.545f, 3108.229f, 31.8476f, 330.6f);
func_240(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
func_240(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
func_240(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
func_240(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
func_240(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
func_240(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
func_240(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
func_240(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
func_240(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
func_240(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
break;
case 87:
func_240(-2538.561f, 3303.172f, 31.814f, 296.999f);
func_240(-2530.309f, 3307.445f, 31.816f, 296.999f);
func_240(-2521.733f, 3311.833f, 31.817f, 296.999f);
func_240(-2512.881f, 3316.428f, 31.819f, 296.999f);
func_240(-2502.952f, 3321.518f, 31.821f, 296.999f);
func_240(-2542.613f, 3310.728f, 31.814f, 296.999f);
func_240(-2534.195f, 3314.753f, 31.815f, 296.999f);
func_240(-2525.635f, 3318.97f, 31.817f, 296.999f);
func_240(-2516.674f, 3323.545f, 31.819f, 296.999f);
func_240(-2507.153f, 3328.454f, 31.82f, 296.999f);
func_240(-2547.689f, 3298.791f, 31.812f, 296.999f);
func_240(-2551.261f, 3306.304f, 31.8123f, 296.999f);
func_240(-2497.446f, 3333.296f, 31.821f, 296.999f);
func_240(-2494.089f, 3326.065f, 31.8218f, 296.999f);
func_240(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
func_240(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
func_240(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
func_240(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
func_240(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
func_240(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
func_240(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
func_240(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
break;
case 89:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_240(1284.416f, 2890.299f, 45.0276f, 336.3999f);
func_240(1273.248f, 2901.428f, 45.0426f, 338.3999f);
func_240(1262.945f, 2911.535f, 43.2959f, 341.9999f);
func_240(1272.094f, 2873.387f, 45.3443f, 328.5991f);
func_240(1259.785f, 2892.217f, 45.1126f, 339.9999f);
func_240(1231.279f, 2910.881f, 43.3085f, 12f);
func_240(1306.515f, 2839.475f, 46.8947f, 132.3996f);
func_240(1307.453f, 2825.276f, 45.1566f, 127.1998f);
func_240(1257.029f, 2872.157f, 45.9766f, 338.5992f);
func_240(1225.764f, 2930.095f, 41.6173f, 14.7999f);
}else{
func_240(1265.123f, 2836.949f, 47.1021f, 119.9996f);
func_240(1258.145f, 2831.643f, 46.4503f, 135.7993f);
func_240(1240.847f, 2828.721f, 46.4388f, 39.5992f);
func_240(1236.877f, 2835.49f, 46.3491f, 22.9991f);
func_240(1235.697f, 2843.403f, 46.0231f, 2.7991f);
func_240(1237.686f, 2850.607f, 45.5261f, 335.5991f);
func_240(1241.126f, 2858.816f, 45.0176f, 339.7991f);
func_240(1249.715f, 2810.588f, 47.2648f, 255.1992f);
func_240(1257.696f, 2808.609f, 47.014f, 266.1992f);
func_240(1265.577f, 2808.353f, 46.7598f, 277.199f);
func_240(1273.808f, 2808.484f, 46.3872f, 263.999f);
func_240(1282.535f, 2807.134f, 45.9705f, 250.7989f);
func_240(1290.168f, 2803.745f, 45.8005f, 238.7988f);
func_240(1296.445f, 2798.777f, 46.0903f, 228.9988f);
func_240(1302.041f, 2792.33f, 45.957f, 221.7987f);
func_240(1251.389f, 2825.818f, 45.9856f, 119.1982f);
func_240(1285.48f, 2819.238f, 45.044f, 228.3993f);
func_240(1293.023f, 2814.164f, 44.8859f, 233.399f);
func_240(1242.18f, 2814.153f, 47.7108f, 227.3991f);
func_240(1236.362f, 2819.623f, 47.6845f, 224.399f);
func_240(1231.532f, 2825.855f, 47.4649f, 210.5992f);
func_240(1228.177f, 2833.423f, 47.3171f, 197.5993f);
func_240(1243.095f, 2866.749f, 44.6219f, 353.7992f);
func_240(1307.346f, 2785.787f, 46.1136f, 219.9997f);
func_240(1300.752f, 2808.224f, 44.5688f, 228.9997f);
func_240(1306.571f, 2802.468f, 44.6275f, 224.1992f);
func_240(1244.465f, 2875.697f, 44.5839f, 353.7992f);
func_240(1312.441f, 2795.427f, 45.2701f, 218.5991f);
}
break;
case 90:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_240(14.4916f, 2660.726f, 79.0178f, 310.1999f);
func_240(3.855f, 2672.388f, 78.437f, 319.2f);
func_240(-7.057f, 2682.247f, 77.472f, 319.2f);
func_240(-14.041f, 2663.43f, 77.4221f, 319.2f);
func_240(41.8086f, 2597.059f, 81.3524f, 301.9997f);
func_240(60.2273f, 2609.745f, 79.5672f, 305.9998f);
func_240(34.0188f, 2659.723f, 78.9894f, 314.2f);
func_240(29.4879f, 2675.34f, 76.0202f, 314.2f);
func_240(19.0088f, 2686.16f, 75.6897f, 314.2f);
func_240(7.6101f, 2697.113f, 76.2923f, 314.2f);
}else{
func_240(50.6405f, 2633.902f, 79.4503f, 305.1998f);
func_240(46.2894f, 2639.951f, 79.9122f, 305.1998f);
func_240(55.3668f, 2627.773f, 79.6363f, 305.1998f);
func_240(59.9522f, 2620.408f, 80.0499f, 305.1998f);
func_240(42.1486f, 2646.073f, 80.108f, 305.1998f);
func_240(68.1481f, 2630.07f, 77.0725f, 305.1998f);
func_240(62.6048f, 2637.014f, 76.1722f, 305.1998f);
func_240(57.3543f, 2643.56f, 75.5301f, 305.1998f);
func_240(52.611f, 2649.698f, 76.1354f, 305.1998f);
func_240(74.5845f, 2640.475f, 72.602f, 305.1998f);
func_240(68.5462f, 2646.784f, 71.6298f, 305.1998f);
func_240(62.426f, 2652.977f, 71.7029f, 305.1998f);
func_240(79.5597f, 2650.835f, 68.668f, 305.1998f);
func_240(72.6035f, 2656.857f, 67.3294f, 305.1998f);
func_240(83.4156f, 2660.237f, 64.3198f, 305.1998f);
func_240(102.851f, 2688.009f, 51.732f, 224f);
func_240(109.815f, 2681.012f, 51.112f, 224f);
func_240(116.355f, 2674.26f, 50.529f, 224f);
func_240(125.138f, 2665.98f, 49.8f, 224f);
func_240(132.228f, 2659.865f, 49.26f, 228.4f);
func_240(139.354f, 2653.536f, 48.737f, 228.4f);
func_240(88.512f, 2702.995f, 53.042f, 224.199f);
func_240(81.565f, 2710.357f, 53.67f, 224.199f);
func_240(75.156f, 2716.981f, 54.223f, 224.199f);
func_240(68.442f, 2723.806f, 54.775f, 226.199f);
func_240(61.449f, 2730.606f, 55.308f, 226.199f);
func_240(53.702f, 2738.167f, 55.855f, 226.199f);
func_240(91.2443f, 2667.262f, 59.9931f, 314.599f);
}
break;
case 91:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_240(2772.011f, 3889.062f, 42.94f, 145.4f);
func_240(2785.592f, 3880.409f, 43.695f, 146.199f);
func_240(2788.387f, 3898.107f, 45.364f, 140.999f);
func_240(2801.558f, 3912.485f, 44.931f, 131.999f);
func_240(2805.531f, 3892.253f, 47.01f, 106.399f);
func_240(2824.791f, 3894.787f, 47.4293f, 105.3989f);
func_240(2761.739f, 3945.948f, 44.59f, 135.398f);
func_240(2814.589f, 3930.404f, 44.816f, 134.9978f);
func_240(2747.627f, 3930.92f, 43.8497f, 138.3978f);
func_240(2796.312f, 3928.316f, 42.6106f, 134.5979f);
}else{
func_240(2730.174f, 3890.294f, 42.435f, 54.6f);
func_240(2714.633f, 3918.283f, 42.938f, 16f);
func_240(2716.533f, 3910.15f, 42.699f, 19.6f);
func_240(2757.499f, 3874.045f, 42.724f, 64.8f);
func_240(2747.99f, 3878.676f, 42.561f, 62.8f);
func_240(2738.337f, 3884.314f, 42.614f, 57.2f);
func_240(2711.836f, 3926.255f, 42.931f, 21.6f);
func_240(2707.586f, 3934.558f, 42.984f, 27.6f);
func_240(2702.361f, 3943.039f, 42.951f, 30.6f);
func_240(2696.696f, 3951.317f, 43.012f, 34.8f);
func_240(2766.778f, 3868.911f, 42.822f, 59.8f);
func_240(2775.397f, 3863.697f, 43.204f, 54.2f);
func_240(2738.841f, 3869.927f, 42.492f, 242.799f);
func_240(2746.49f, 3865.861f, 42.808f, 239.599f);
func_240(2754.829f, 3861.039f, 42.906f, 240.799f);
func_240(2762.616f, 3856.316f, 42.895f, 240.799f);
func_240(2770.463f, 3851.383f, 43.216f, 233.199f);
func_240(2778.129f, 3844.914f, 43.26f, 229.199f);
func_240(2785.341f, 3837.918f, 43.141f, 224.999f);
func_240(2730.65f, 3875.186f, 42.437f, 231.999f);
func_240(2724.14f, 3880.885f, 42.469f, 224.599f);
func_240(2718.541f, 3887.508f, 42.614f, 217.399f);
func_240(2783.246f, 3857.409f, 43.175f, 45.199f);
func_240(2790.716f, 3850.631f, 43.125f, 45.199f);
func_240(2690.655f, 3959.246f, 43.255f, 40.199f);
func_240(2797.912f, 3842.523f, 43.166f, 40.199f);
func_240(2791.836f, 3830.845f, 43.14f, 221.999f);
func_240(2712.952f, 3894.566f, 42.484f, 14.799f);
}
break;
case 92:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_240(3374.661f, 5559.709f, 12.3726f, 138.7999f);
func_240(3366.365f, 5569.449f, 13.9704f, 112.8f);
func_240(3358.493f, 5581.463f, 16.1783f, 112.8f);
func_240(3356.705f, 5595.363f, 15.4029f, 112.8f);
func_240(3336.662f, 5552.357f, 19.491f, 249.6f);
func_240(3336.791f, 5567.825f, 20.432f, 249.6f);
func_240(3335.259f, 5599.046f, 22.4606f, 249.6f);
func_240(3336.811f, 5613.029f, 22.2159f, 249.6f);
func_240(3354.696f, 5609.699f, 15.9453f, 111.3999f);
func_240(3354.006f, 5624.206f, 16.018f, 111.3999f);
}else{
func_240(3372.053f, 5506.134f, 20.8174f, 99.5999f);
func_240(3374.923f, 5520.177f, 20.3207f, 86f);
func_240(3350.643f, 5490.432f, 18.8423f, 139.9997f);
func_240(3364.189f, 5502.98f, 19.648f, 125.7999f);
func_240(3354.101f, 5484.773f, 19.619f, 116.399f);
func_240(3365.919f, 5519.949f, 18.8008f, 102.9988f);
func_240(3341.889f, 5506.809f, 19.584f, 161.199f);
func_240(3338.581f, 5497.709f, 19.376f, 161.199f);
func_240(3335.674f, 5489.348f, 19.542f, 161.199f);
func_240(3332.019f, 5479.563f, 19.738f, 150.998f);
func_240(3327.404f, 5470.857f, 19.302f, 159.398f);
func_240(3323.903f, 5461.49f, 18.492f, 156.398f);
func_240(3320.016f, 5452.957f, 17.834f, 153.198f);
func_240(3315.782f, 5444.61f, 17.115f, 150.798f);
func_240(3335.451f, 5455.723f, 18.2323f, 162.1979f);
func_240(3338.788f, 5464.803f, 18.8631f, 163.7977f);
func_240(3362.476f, 5488.211f, 20.4432f, 108.5979f);
func_240(3371.259f, 5491.274f, 21.5286f, 104.9989f);
func_240(3342.201f, 5517.014f, 19.642f, 170.199f);
func_240(3343.267f, 5526.085f, 18.902f, 175.598f);
func_240(3343.531f, 5536.075f, 18.217f, 178.598f);
func_240(3357.257f, 5496.71f, 18.9729f, 132.5977f);
func_240(3342.346f, 5473.345f, 19.1235f, 159.3987f);
func_240(3347.236f, 5480.447f, 19.4672f, 131.199f);
func_240(3357.623f, 5516.9f, 16.9016f, 118.7991f);
func_240(3361.366f, 5545.886f, 15.5532f, 118.7991f);
func_240(3352.612f, 5541.013f, 16.3238f, 131.999f);
func_240(3343.349f, 5546.494f, 17.8738f, 173.9988f);
}
break;
case 93:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_240(43.848f, 6845.657f, 13.379f, 247.2f);
func_240(50.379f, 6861.146f, 15.105f, 247.2f);
func_240(32.501f, 6871.777f, 13.3283f, 247.2f);
func_240(38.437f, 6885.796f, 13.3627f, 247.2f);
func_240(55.806f, 6875.081f, 14.824f, 247.2f);
func_240(11.616f, 6877.079f, 11.466f, 247.2f);
func_240(18.954f, 6891.633f, 11.37f, 247.2f);
func_240(26.68f, 6907.587f, 11.869f, 247.2f);
func_240(7.479f, 6907.895f, 12.024f, 247.2f);
func_240(44.9981f, 6901.352f, 11.9426f, 247.2f);
}else{
func_240(35.591f, 6836.608f, 13.288f, 274.4f);
func_240(36.028f, 6830.135f, 13.801f, 270.8f);
func_240(35.114f, 6823.884f, 14.527f, 260.8f);
func_240(48.779f, 6838.693f, 14.337f, 273.6f);
func_240(56.738f, 6821.8f, 15.244f, 244.8f);
func_240(48.377f, 6825.895f, 14.656f, 249.8f);
func_240(49.11f, 6831.439f, 13.991f, 274.8f);
func_240(53.544f, 6818.275f, 16.342f, 243f);
func_240(46.162f, 6821.945f, 15.483f, 249.8f);
func_240(60.129f, 6836.8f, 15.605f, 269.6f);
func_240(40.88f, 6802.952f, 20.113f, 242.6f);
func_240(48.203f, 6799.134f, 20.897f, 244.4f);
func_240(70.449f, 6809.271f, 16.846f, 243f);
func_240(61.436f, 6814.266f, 16.71f, 244.2f);
func_240(56.142f, 6793.458f, 19.806f, 242.6f);
func_240(65.759f, 6791.12f, 18.433f, 276.4f);
func_240(77.305f, 6805.391f, 18.558f, 245.6f);
func_240(85.893f, 6800.243f, 18.535f, 249.8f);
func_240(56.85f, 6780.582f, 18.822f, 297.999f);
func_240(65.636f, 6784.669f, 18.789f, 293.799f);
func_240(74.121f, 6788.498f, 18.739f, 293.799f);
func_240(97.779f, 6796.32f, 19.02f, 276.799f);
func_240(106.76f, 6796.983f, 18.914f, 272.599f);
func_240(112.387f, 6802.858f, 18.994f, 210.599f);
func_240(117.58f, 6802.644f, 18.663f, 209.399f);
func_240(122.481f, 6802.693f, 18.468f, 209.399f);
func_240(127.182f, 6802.686f, 18.218f, 209.399f);
func_240(132.429f, 6801.882f, 17.949f, 209.399f);
}
break;
case 94:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_240(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
func_240(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
func_240(-2232.397f, 2274.252f, 31.602f, 296.7993f);
func_240(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
func_240(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
func_240(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
func_240(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
func_240(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
func_240(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
func_240(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
}else{
func_240(-2239.671f, 2390.292f, 10.756f, 189.2002f);
func_240(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
func_240(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
func_240(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
func_240(-2238.044f, 2372.67f, 15.07f, 187.4004f);
func_240(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
func_240(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
func_240(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
func_240(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
func_240(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
func_240(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
func_240(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
func_240(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
func_240(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
func_240(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
func_240(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
func_240(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
func_240(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
func_240(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
func_240(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
func_240(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
func_240(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
func_240(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
func_240(-2255.106f, 2285.415f, 31.617f, 130.3999f);
func_240(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
func_240(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
func_240(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
func_240(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
}
break;
case 95:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_240(4.0332f, 3378.618f, 41.0822f, 247.1989f);
func_240(38.819f, 3321.2f, 37.0283f, 203.999f);
func_240(26.877f, 3309.062f, 37.93f, 191.9991f);
func_240(15.6727f, 3297.846f, 39.0535f, 191.9991f);
func_240(-24.2865f, 3367.527f, 41.4783f, 264.399f);
func_240(-23.1279f, 3352.254f, 40.52f, 280.399f);
func_240(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
func_240(97.4844f, 3335.385f, 34.6164f, 7.9981f);
func_240(20.409f, 3370.839f, 38.8393f, 235.799f);
func_240(48.457f, 3336.586f, 35.8912f, 270.3979f);
}else{
func_240(25.9869f, 3349.706f, 36.0366f, 273.9994f);
func_240(25.0176f, 3356.915f, 36.4258f, 276.9998f);
func_240(36.2443f, 3351.358f, 36.2386f, 272.5997f);
func_240(35.9352f, 3358.816f, 37.0033f, 276.7998f);
func_240(25.9651f, 3342.673f, 36.2157f, 270.7997f);
func_240(30.027f, 3292.351f, 38.604f, 140.199f);
func_240(49.1614f, 3358.589f, 35.9759f, 263.5988f);
func_240(48.288f, 3352.494f, 35.5841f, 261.1988f);
func_240(23.897f, 3283.152f, 39.381f, 145.399f);
func_240(60.9182f, 3356.21f, 35.8814f, 255.3988f);
func_240(18.723f, 3274.025f, 40.054f, 155.799f);
func_240(59.0177f, 3350.004f, 35.3204f, 255.7989f);
func_240(36.958f, 3298.847f, 38.001f, 127.799f);
func_240(54.165f, 3311.582f, 36.517f, 303.799f);
func_240(61.607f, 3317.105f, 35.916f, 306.999f);
func_240(68.994f, 3323.129f, 35.364f, 308.199f);
func_240(76.266f, 3329.467f, 34.805f, 311.399f);
func_240(82.757f, 3335.915f, 34.344f, 316.598f);
func_240(46.5977f, 3306.196f, 37.1628f, 304.9976f);
func_240(14.664f, 3263.688f, 40.931f, 160.398f);
func_240(50.8234f, 3324.118f, 36.2129f, 305.1976f);
func_240(11.7852f, 3256.101f, 41.7031f, 159.198f);
func_240(89.575f, 3343.311f, 33.932f, 318.398f);
func_240(58.4154f, 3329.423f, 35.6197f, 305.5979f);
func_240(65.3201f, 3334.253f, 35.1903f, 306.5977f);
func_240(72.1063f, 3339.793f, 34.8449f, 308.5977f);
func_240(95.6614f, 3349.917f, 33.696f, 316.1977f);
func_240(85.4387f, 3353.183f, 33.8047f, 317.9978f);
}
break;
case 96:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_240(2135.708f, 1757.503f, 102.073f, 40.999f);
func_240(2148.674f, 1764.557f, 102.75f, 40.999f);
func_240(2160.511f, 1771.173f, 104.149f, 40.999f);
func_240(2172.842f, 1777.391f, 105.369f, 40.999f);
func_240(2127.938f, 1736.353f, 100.835f, 222.199f);
func_240(2141.682f, 1739.865f, 99.833f, 222.199f);
func_240(2152.786f, 1747.776f, 99.785f, 222.199f);
func_240(2166.356f, 1754.682f, 100.07f, 220.399f);
func_240(2090.66f, 1701.805f, 101.681f, 243.199f);
func_240(2066.149f, 1716.735f, 102.112f, 228.2f);
}else{
func_240(2073.044f, 1725.935f, 102.5096f, 225.2f);
func_240(2077.24f, 1730.299f, 102.5247f, 225.2f);
func_240(2081.68f, 1734.742f, 102.5588f, 225.2f);
func_240(2086.052f, 1739.045f, 102.6618f, 225.2f);
func_240(2090.55f, 1743.53f, 102.6058f, 225.2f);
func_240(2095.295f, 1748.274f, 102.3022f, 225.2f);
func_240(2101.779f, 1721.807f, 101.927f, 225.2f);
func_240(2107.08f, 1727.001f, 101.932f, 225.2f);
func_240(2095.867f, 1716.475f, 101.925f, 225.2f);
func_240(2112.387f, 1732.492f, 101.849f, 225.2f);
func_240(2089.718f, 1710.779f, 101.978f, 225.2f);
func_240(2111.639f, 1717.132f, 100.855f, 225.2f);
func_240(2117.297f, 1722.655f, 100.704f, 225.2f);
func_240(2105.821f, 1711.672f, 101.065f, 225.2f);
func_240(2098.759f, 1704.866f, 101.209f, 225.2f);
func_240(2121.208f, 1713.145f, 99.65f, 225.2f);
func_240(2115.34f, 1707.542f, 99.829f, 225.2f);
func_240(2109.211f, 1702.247f, 100.079f, 225.2f);
func_240(2124.167f, 1704.036f, 98.584f, 225.2f);
func_240(2118.181f, 1698.253f, 98.645f, 225.2f);
func_240(2127.253f, 1694.878f, 97.078f, 225.2f);
func_240(2117.786f, 1738.219f, 101.839f, 225.2f);
func_240(2122.34f, 1728.011f, 100.627f, 225.2f);
func_240(2126.288f, 1718.542f, 99.501f, 225.2f);
func_240(2129.762f, 1709.847f, 98.352f, 225.2f);
func_240(2132.765f, 1700.777f, 96.999f, 225.2f);
func_240(2120.399f, 1689.165f, 97.388f, 225.2f);
func_240(2098.994f, 1747.929f, 102.2403f, 225.2f);
}
break;
case 97:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_240(1871.691f, 358.5369f, 162.1067f, 153.1979f);
func_240(1858.966f, 351.2935f, 161.7614f, 166.598f);
func_240(1873.611f, 342.6637f, 161.6936f, 142.998f);
func_240(1887.645f, 343.1557f, 162.1659f, 138.5979f);
func_240(1888.644f, 328.0839f, 161.7489f, 139.398f);
func_240(1898.596f, 315.2232f, 161.4418f, 173.7979f);
func_240(1896.729f, 266.5388f, 161.1619f, 113.5978f);
func_240(1900.167f, 281.3884f, 161.7807f, 115.197f);
func_240(1856.286f, 294.624f, 161.442f, 167.9966f);
func_240(1868.622f, 309.7907f, 162.6084f, 155.1968f);
}else{
func_240(1856.378f, 255.9146f, 162.7158f, 147.6202f);
func_240(1837.279f, 227.3696f, 165.2592f, 164.3995f);
func_240(1835.192f, 219.3931f, 167.5468f, 169.9994f);
func_240(1833.557f, 211.859f, 169.864f, 169.9994f);
func_240(1839.534f, 194.4053f, 171.3841f, 172.9989f);
func_240(1838.289f, 185.8157f, 171.2585f, 174.1989f);
func_240(1837.478f, 177.0607f, 170.7063f, 174.1989f);
func_240(1840.463f, 202.6959f, 170.8702f, 174.1989f);
func_240(1836.296f, 168.7307f, 170.5786f, 174.1989f);
func_240(1835.412f, 159.3162f, 170.4163f, 171.1989f);
func_240(1826.91f, 214.9648f, 172.2502f, 18.7986f);
func_240(1823.805f, 223.0288f, 172.0794f, 21.7986f);
func_240(1820.599f, 231.144f, 172.2987f, 21.7986f);
func_240(1817.245f, 239.1232f, 172.0878f, 21.7986f);
func_240(1814.089f, 247.0423f, 171.7386f, 24.9986f);
func_240(1810.879f, 255.6553f, 171.7517f, 19.3986f);
func_240(1807.729f, 265.4899f, 172.2307f, 15.1986f);
func_240(1823.147f, 197.3122f, 172.235f, 192.3984f);
func_240(1824.641f, 184.4241f, 171.5948f, 183.3985f);
func_240(1825.019f, 171.2314f, 170.5843f, 183.3985f);
func_240(1824.748f, 162.8998f, 170.4961f, 173.1985f);
func_240(1817.345f, 214.6964f, 172.5223f, 203.9982f);
func_240(1813.466f, 222.3717f, 172.3316f, 200.9982f);
func_240(1809.114f, 230.8225f, 172.346f, 205.1983f);
func_240(1805.594f, 239.3896f, 172.0033f, 197.9984f);
func_240(1802.515f, 247.4269f, 171.8964f, 197.9984f);
func_240(1833.982f, 150.4025f, 170.411f, 163.7985f);
func_240(1823.079f, 154.5105f, 170.8194f, 163.7985f);
}
break;
case 123:
case 124:
case 125:
func_225(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
func_225(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
func_225(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
func_225(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
func_225(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
func_225(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
func_225(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
func_225(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
func_225(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
func_225(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
func_225(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
func_225(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
func_225(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
func_225(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
func_225(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
func_225(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
func_225(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
func_225(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
func_225(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
func_225(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
func_225(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
func_225(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
func_225(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
func_225(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
func_225(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
func_225(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
func_225(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
func_225(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
func_225(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
func_225(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
func_225(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
func_225(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
break;
default:
break;
}}


void func_225(struct<3> Param0, float fParam1, int iParam2, bool bParam3){
struct<2> Var0;
struct<2> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
if(!iParam2==0){
func_124(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
fVar2=(Var1.f_1 - Var0.f_1);
if(bParam3){
fVar2=(fVar2 * -1f);
}
fVar2=(fVar2 * 0.5f);
Var3={
0f, fVar2, 0f 
};
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var3) 
};
func_240(Var4, fParam1);
}else{
func_240(Param0, fParam1);
}}


void func_226(int iParam0){
switch (iParam0){
case 83:
func_240(-1133.454f, -3371.672f, 12.945f, 329.799f);
func_240(-1119.748f, -3379.991f, 12.945f, 329.799f);
func_240(-1147.602f, -3363.505f, 12.945f, 329.799f);
func_240(-1161.988f, -3354.852f, 12.945f, 329.799f);
func_240(-1116.563f, -3358.99f, 12.945f, 329.799f);
func_240(-1131.23f, -3350.104f, 12.945f, 329.799f);
func_240(-1145.252f, -3341.608f, 12.945f, 329.799f);
func_240(-1115.202f, -3339.265f, 12.945f, 329.799f);
func_240(-1129.559f, -3330.697f, 12.945f, 329.799f);
func_240(-1114.664f, -3320.954f, 12.945f, 329.799f);
func_240(-1199.923f, -3369.502f, 12.945f, 350.399f);
func_240(-1212.069f, -3363.568f, 12.945f, 350.399f);
func_240(-1223.637f, -3356.694f, 12.945f, 350.399f);
func_240(-1102.284f, -3420.613f, 12.945f, 354.599f);
func_240(-1091.131f, -3427.396f, 12.945f, 354.599f);
func_240(-1079.372f, -3434.306f, 12.945f, 354.599f);
func_240(-1067.498f, -3441.878f, 13.114f, 354.599f);
func_240(-1055.714f, -3448.819f, 12.977f, 354.599f);
func_240(-1043.37f, -3455.796f, 13.146f, 354.599f);
func_240(-1017.023f, -3382.777f, 12.8401f, 330.6f);
func_240(-1010.608f, -3386.103f, 12.8401f, 330.6f);
func_240(-1004.658f, -3389.823f, 12.8401f, 330.6f);
func_240(-998.3798f, -3393.644f, 12.8401f, 330.6f);
func_240(-991.5242f, -3397.297f, 12.8401f, 330.6f);
func_240(-985.0826f, -3401.247f, 12.8401f, 330.6f);
func_240(-978.2733f, -3405.031f, 12.8401f, 330.6f);
func_240(-971.724f, -3409.109f, 12.8401f, 330.6f);
func_240(-964.4719f, -3413.202f, 13.1463f, 330.6f);
func_240(-1022.94f, -3392.372f, 12.8401f, 330.6f);
func_240(-1016.219f, -3395.82f, 12.8401f, 330.6f);
func_240(-1009.873f, -3399.143f, 12.8401f, 330.6f);
func_240(-1003.436f, -3402.982f, 12.8401f, 330.6f);
func_240(-997.0872f, -3406.928f, 12.8401f, 330.6f);
func_240(-990.2305f, -3410.548f, 12.8401f, 330.6f);
func_240(-983.4429f, -3414.093f, 12.8401f, 330.6f);
func_240(-976.8809f, -3417.846f, 12.8401f, 330.6f);
func_240(-969.4039f, -3421.727f, 13.1463f, 330.6f);
func_240(-1028.251f, -3401.834f, 12.8401f, 330.6f);
func_240(-1021.631f, -3405.433f, 12.8401f, 330.6f);
func_240(-1015.209f, -3408.563f, 12.8401f, 330.6f);
func_240(-1008.81f, -3412.484f, 12.8401f, 330.6f);
func_240(-1002.277f, -3415.987f, 12.8401f, 330.6f);
func_240(-995.7023f, -3419.97f, 12.8401f, 330.6f);
func_240(-989.1453f, -3423.988f, 12.8401f, 330.6f);
func_240(-982.6298f, -3427.981f, 12.8401f, 330.6f);
func_240(-974.9305f, -3431.833f, 13.1463f, 330.6f);
break;
case 84:
func_240(-1356.991f, -3242.228f, 12.945f, 330f);
func_240(-1369.313f, -3234.758f, 12.945f, 330f);
func_240(-1381.751f, -3227.408f, 12.945f, 330f);
func_240(-1394.302f, -3220.021f, 12.945f, 330f);
func_240(-1354.339f, -3223.129f, 12.945f, 330f);
func_240(-1366.302f, -3215.809f, 12.945f, 330f);
func_240(-1378.492f, -3208.645f, 12.945f, 330f);
func_240(-1350.322f, -3203.405f, 12.945f, 330f);
func_240(-1362.684f, -3196.451f, 12.945f, 330f);
func_240(-1347.089f, -3182.69f, 12.945f, 330f);
func_240(-1452.642f, -3222.367f, 12.945f, 347.799f);
func_240(-1464.229f, -3215.108f, 12.945f, 347.799f);
func_240(-1476.133f, -3207.652f, 12.945f, 347.799f);
func_240(-1488.295f, -3200.033f, 12.945f, 347.799f);
func_240(-1336.877f, -3272.344f, 12.945f, 8.199f);
func_240(-1323.381f, -3279.614f, 12.945f, 8.199f);
func_240(-1309.671f, -3287.749f, 12.945f, 8.199f);
func_240(-1296.963f, -3294.511f, 12.945f, 8.199f);
func_240(-1501.978f, -3193.849f, 12.945f, 350.599f);
func_240(-1344.716f, -3288.333f, 12.9445f, 331.2f);
func_240(-1338.141f, -3290.335f, 12.9445f, 331.2f);
func_240(-1331.473f, -3294.178f, 12.9445f, 331.2f);
func_240(-1324.921f, -3297.998f, 12.9445f, 331.2f);
func_240(-1318.129f, -3301.957f, 12.9445f, 331.2f);
func_240(-1350.466f, -3294.226f, 12.9445f, 331.2f);
func_240(-1343.482f, -3297.576f, 12.9445f, 331.2f);
func_240(-1336.398f, -3302.456f, 12.9445f, 331.2f);
func_240(-1329.82f, -3306.82f, 12.945f, 331.2f);
func_240(-1322.761f, -3310.353f, 12.945f, 331.2f);
func_240(-1316.587f, -3314.556f, 12.945f, 331.2f);
func_240(-1326.538f, -3318.499f, 12.945f, 331.2f);
func_240(-1335.74f, -3313.678f, 12.945f, 331.2f);
func_240(-1350.848f, -3302.619f, 12.9446f, 331.2f);
func_240(-1357.961f, -3306.886f, 12.945f, 331.2f);
func_240(-1335.202f, -3322.428f, 12.9452f, 331.2f);
func_240(-1351.401f, -3311.566f, 12.9452f, 331.2f);
func_240(-1344.255f, -3305.965f, 12.9451f, 331.2f);
func_240(-1299.832f, -3305.573f, 12.945f, 331.2f);
func_240(-1293.414f, -3309.413f, 12.945f, 331.2f);
func_240(-1286.835f, -3313.157f, 12.945f, 331.2f);
func_240(-1303.988f, -3313.1f, 12.945f, 331.2f);
func_240(-1297.402f, -3316.699f, 12.945f, 331.2f);
func_240(-1290.969f, -3320.519f, 12.945f, 331.2f);
func_240(-1308.27f, -3320.612f, 12.945f, 331.2f);
func_240(-1301.968f, -3324.714f, 12.945f, 331.2f);
func_240(-1295.483f, -3328.422f, 12.945f, 331.2f);
break;
case 85:
func_240(-2039.992f, 3132.191f, 31.81f, 149.399f);
func_240(-2025.075f, 3128.63f, 31.81f, 197.599f);
func_240(-2049.589f, 3142.464f, 31.81f, 109.199f);
func_240(-2088.648f, 3081.327f, 31.81f, 150.599f);
func_240(-2070.669f, 3111.575f, 31.81f, 123.399f);
func_240(-2053.385f, 3109.703f, 31.81f, 150.599f);
func_240(-2044.448f, 3094.012f, 31.81f, 181.799f);
func_240(-2071.825f, 3093.477f, 31.81f, 150.599f);
func_240(-2060.579f, 3085.924f, 31.81f, 150.599f);
func_240(-2062.712f, 3066.073f, 31.81f, 150.599f);
func_240(-2094.385f, 3190.445f, 31.81f, 117.799f);
func_240(-2083.056f, 3182.885f, 31.81f, 117.799f);
func_240(-2071.578f, 3175.554f, 31.81f, 117.799f);
func_240(-2120.249f, 3173.97f, 31.81f, 25.199f);
func_240(-2067.547f, 3146.325f, 31.81f, 14.998f);
func_240(-2080.506f, 3154.591f, 31.81f, 15.798f);
func_240(-2093.278f, 3159.793f, 31.81f, 14.798f);
func_240(-2106.614f, 3167.605f, 31.81f, 21.198f);
func_240(-2106.347f, 3196.902f, 31.81f, 117.799f);
func_240(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
func_240(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
func_240(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
func_240(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
func_240(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
func_240(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
func_240(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
func_240(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
func_240(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
func_240(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
func_240(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
func_240(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
func_240(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
func_240(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
func_240(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
func_240(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
func_240(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
func_240(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
func_240(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
func_240(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
func_240(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
func_240(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
func_240(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
func_240(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
func_240(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
func_240(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
func_240(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
break;
case 86:
func_240(-1885.187f, 3095.344f, 31.81f, 150.2f);
func_240(-1898.637f, 3072.816f, 31.811f, 150.2f);
func_240(-1886.469f, 3065.78f, 31.811f, 150.2f);
func_240(-1874.621f, 3058.437f, 31.81f, 150.2f);
func_240(-1862.818f, 3051.244f, 31.81f, 150.2f);
func_240(-1915.317f, 3041.652f, 31.811f, 150.2f);
func_240(-1896.724f, 2997.848f, 31.81f, 150.2f);
func_240(-1932.975f, 3011.781f, 31.81f, 150.2f);
func_240(-1875.668f, 3034.438f, 31.811f, 150.2f);
func_240(-1886.144f, 3016.285f, 31.81f, 150.2f);
func_240(-1913.706f, 3104.196f, 31.81f, 118.599f);
func_240(-1925.44f, 3112.236f, 31.81f, 118.599f);
func_240(-1938.08f, 3119.383f, 31.81f, 118.599f);
func_240(-1927.822f, 3072.679f, 31.81f, 13.399f);
func_240(-1940.575f, 3079.031f, 31.81f, 13.399f);
func_240(-1953.344f, 3084.888f, 31.81f, 13.399f);
func_240(-1965.91f, 3091.929f, 31.81f, 13.399f);
func_240(-1978.86f, 3100.029f, 31.81f, 13.399f);
func_240(-1950.928f, 3126.457f, 31.81f, 118.999f);
func_240(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
func_240(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
func_240(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
func_240(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
func_240(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
func_240(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
func_240(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
func_240(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
func_240(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
func_240(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
func_240(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
func_240(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
func_240(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
func_240(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
func_240(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
func_240(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
func_240(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
func_240(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
func_240(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
func_240(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
func_240(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
func_240(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
func_240(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
func_240(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
func_240(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
func_240(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
func_240(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
break;
case 87:
func_240(-2484.323f, 3249.294f, 31.828f, 151f);
func_240(-2495.313f, 3255.746f, 31.828f, 151f);
func_240(-2472.644f, 3242.684f, 31.828f, 151f);
func_240(-2506.313f, 3262.27f, 31.823f, 151f);
func_240(-2461.494f, 3235.93f, 31.828f, 151f);
func_240(-2505.602f, 3238.049f, 31.828f, 151f);
func_240(-2481.937f, 3224.8f, 31.828f, 151f);
func_240(-2516.813f, 3244.266f, 31.823f, 151f);
func_240(-2470.03f, 3217.899f, 31.828f, 151f);
func_240(-2493.933f, 3231.308f, 31.828f, 151f);
func_240(-2443.467f, 3227.753f, 31.828f, 175.8f);
func_240(-2431.365f, 3220.9f, 31.828f, 175.8f);
func_240(-2419.883f, 3214.708f, 31.828f, 175.8f);
func_240(-2501.903f, 3272.865f, 31.822f, 123.999f);
func_240(-2513.555f, 3280.176f, 31.817f, 123.999f);
func_240(-2524.776f, 3287.276f, 31.973f, 123.999f);
func_240(-2407.718f, 3208.055f, 31.827f, 176.199f);
func_240(-2395.689f, 3201.125f, 31.827f, 176.199f);
func_240(-2383.498f, 3194.211f, 31.833f, 176.199f);
func_240(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
func_240(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
func_240(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
func_240(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
func_240(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
func_240(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
func_240(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
func_240(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
func_240(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
func_240(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
func_240(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
func_240(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
func_240(-2383.986f, 3223.995f, 31.986f, 150.5996f);
func_240(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
func_240(-2370.524f, 3215.946f, 32.002f, 150.5996f);
func_240(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
func_240(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
func_240(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
func_240(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
func_240(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
func_240(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
func_240(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
func_240(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
func_240(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
func_240(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
func_240(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
func_240(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
break;
default:
break;
}}

int func_227(int iParam0){
switch (iParam0){
case joaat("microlight"):
case joaat("havok"):
case joaat("seabreeze"):
case joaat("rogue"):
case joaat("pyro"):
case joaat("buzzard"):
case joaat("frogger"):
case joaat("maverick"):
case joaat("supervolito"):
case joaat("supervolito2"):
case joaat("volatus"):
case joaat("cuban800"):
case joaat("besra"):
case joaat("duster"):
case joaat("stunt"):
case joaat("velum"):
case joaat("velum2"):
case joaat("vestra"):
case joaat("lazer"):
case joaat("alphaz1"):
case joaat("howard"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("starling"):
case joaat("conada"):
case -1659004814:
return 1;
default:
}
return 0;
}


void func_228(int iParam0){
switch (iParam0){
case 83:
case 84:
func_240(-947.712f, -3367.704f, 12.944f, 60f);
func_240(-904.692f, -3293.072f, 12.944f, 60f);
func_240(-863.71f, -3221.978f, 12.944f, 60f);
func_240(-966.418f, -3162.773f, 12.944f, 60f);
func_240(-1007.435f, -3233.93f, 12.944f, 60f);
func_240(-1050.455f, -3308.559f, 12.944f, 60f);
func_240(-1145.673f, -3253.456f, 12.944f, 60f);
func_240(-1098.386f, -3181.428f, 12.944f, 60f);
func_240(-1060.474f, -3108.903f, 12.944f, 60f);
func_240(-1155.391f, -3053.632f, 12.944f, 60f);
func_240(-1196.114f, -3125.146f, 12.948f, 60f);
func_240(-1235.552f, -3201.86f, 12.944f, 60f);
func_240(-1344.446f, -3139.177f, 12.944f, 60f);
func_240(-1301.308f, -3064.341f, 12.944f, 60f);
func_240(-1260.135f, -2992.912f, 12.944f, 60f);
func_240(-1364.244f, -2932.9f, 12.98f, 60f);
func_240(-1405.284f, -3004.108f, 12.96f, 60f);
func_240(-1448.29f, -3078.72f, 12.95f, 60f);
func_240(-1535.732f, -3028.318f, 12.945f, 60f);
func_240(-1492.639f, -2953.558f, 12.945f, 60f);
func_240(-1451.506f, -2882.2f, 12.944f, 60f);
func_240(-1553.927f, -2823.12f, 13.002f, 60f);
func_240(-1595.097f, -2894.571f, 12.944f, 60f);
func_240(-1637.836f, -2968.714f, 12.945f, 60f);
func_240(-1740.971f, -2911.484f, 12.944f, 330f);
func_240(-1696.293f, -2833.978f, 12.944f, 330f);
func_240(-1651.502f, -2756.273f, 12.945f, 330f);
func_240(-1588.258f, -2647.575f, 12.944f, 330f);
func_240(-1536.862f, -2681.378f, 12.945f, 330f);
func_240(-1529.025f, -2544.485f, 12.944f, 330f);
break;
case 85:
case 86:
case 87:
func_240(-1970.422f, 2825.696f, 31.81f, 60.4f);
func_240(-2033.307f, 2855.526f, 31.83f, 60.4f);
func_240(-2091.018f, 2888.691f, 31.81f, 60.4f);
func_240(-2206.717f, 2955.363f, 31.81f, 60.4f);
func_240(-2268.817f, 2990.846f, 31.81f, 60.4f);
func_240(-2324.039f, 3023.154f, 31.811f, 60.4f);
func_240(-2435.806f, 3087.705f, 31.824f, 60.4f);
func_240(-2543.753f, 3149.909f, 31.821f, 60.4f);
func_240(-1944.848f, 2898.798f, 31.81f, 125.398f);
func_240(-1978.705f, 2924.367f, 31.846f, 151.999f);
func_240(-2064.849f, 2955.153f, 31.867f, 151.199f);
func_240(-2106.165f, 2980.687f, 31.81f, 104.599f);
func_240(-2302.367f, 3088.676f, 31.814f, 150.598f);
func_240(-2152.113f, 2924.162f, 31.81f, 60.198f);
func_240(-2488.232f, 3118.146f, 31.822f, 59.798f);
func_240(-2277.922f, 3133.756f, 31.811f, 120.598f);
func_240(-2604.776f, 3185.186f, 31.812f, 59.998f);
func_240(-2608.107f, 3305.049f, 31.812f, 60.198f);
func_240(-2718.936f, 3323.203f, 31.81f, 201.198f);
func_240(-2658.718f, 3216.499f, 31.812f, 59.998f);
func_240(-2380.372f, 3055.341f, 31.826f, 60.4f);
func_240(-2790.616f, 3286.24f, 31.812f, 240.397f);
func_240(-2770.946f, 3322.605f, 31.812f, 240.397f);
func_240(-2678.805f, 3339.186f, 31.812f, 199.597f);
func_240(-2743.882f, 3224.094f, 31.81f, 303.397f);
func_240(-2701.354f, 3203.092f, 31.994f, 328.397f);
func_240(-2249.816f, 2944.609f, 31.937f, 330.196f);
func_240(-2586.579f, 3137.286f, 31.935f, 330.196f);
func_240(-2134.76f, 2878.728f, 31.81f, 330.196f);
func_240(-1949.075f, 2861.21f, 31.811f, 58.798f);
break;
default:
break;
}}

int func_229(int iParam0){
switch (iParam0){
case joaat("hydra"):
case joaat("dodo"):
case joaat("mammatus"):
case joaat("annihilator"):
case joaat("tula"):
case joaat("hunter"):
case joaat("mogul"):
case joaat("cargobob"):
case joaat("cargobob2"):
case joaat("shamal"):
case joaat("savage"):
case joaat("luxor"):
case joaat("luxor2"):
case joaat("nimbus"):
case joaat("swift"):
case joaat("swift2"):
case joaat("valkyrie"):
case joaat("titan"):
case joaat("skylift"):
case joaat("miljet"):
case joaat("bombushka"):
case joaat("volatol"):
case joaat("alkonost"):
case 191916658:
case 239897677:
return 1;
default:
}
return 0;
}

int func_230(var uParam0){
if(func_231(uParam0)){
return 1;
}
return 0;
}

int func_231(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f){
return 1;
}
return 0;
}

int func_232(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f){
return 1;
}
return 0;
}

int func_233(int iParam0, int iParam1){
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

int func_234(struct<2> Param0, var uParam1, var uParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
float fVar5;
int iVar6;
iVar2=0;
fVar3=50f;
fVar5=300f;
iVar6=-1;
iVar0=1;
while (iVar0 <=130){
if(iVar2 < *uParam2){
iVar1=0;
iVar1=0;
while (iVar1 < 2){
if(vdist(Param0.f_0, Param0.f_1, 0f, Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3){
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=0;
iVar2++;
iVar1=99;
}
iVar1++;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 162){
fVar3=50f;
if(iVar0 >=83 && iVar0 <=87){
if(func_211(iVar0)){
fVar3=300f;
}else{
fVar3=0f;
}}
if(iVar0 >=89 && iVar0 <=97){
if(func_235(iVar0)){
fVar3=75f;
}else{
fVar3=0f;
}}
if(iVar0 >=123 && iVar0 <=125){
fVar3=150f;
}
if(iVar2 < *uParam2){
fVar4=vdist(Param0.f_0, Param0.f_1, 0f, Global_1950844.f_543[iVar0 /*3*/], Global_1950844.f_543[iVar0 /*3*/].f_1, 0f);
if(fVar4 < fVar3){
if(iVar0 >=83 && iVar0 <=87){
if(fVar4 <=fVar5){
fVar5=fVar4;
if(iVar6 !=-1){
(*uParam2)[iVar6]=iVar0;
}
else{
iVar6=iVar2;
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=1;
iVar2++;
}}}else{
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=1;
iVar2++;
}}}
iVar0++;
}
if(iVar2 > 0){
return 1;
}
return 0;
}

int func_235(int iParam0){
int iVar0;
int iVar1;
iVar0=func_236(iParam0);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_300==iVar0){
return 1;
}
iVar1=Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
if(iVar1 !=func_109()){
if(Global_1853988[iVar1 /*867*/].f_267.f_300==iVar0){
return 1;
}}
if(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7==iParam0){
return 1;
}
return 0;
}

int func_236(int iParam0){
switch (iParam0){
case 89:
return 1;
break;
case 90:
return 2;
break;
case 91:
return 3;
break;
case 92:
return 4;
break;
case 93:
return 5;
break;
case 94:
return 6;
break;
case 95:
return 7;
break;
case 96:
return 8;
break;
case 97:
return 9;
break;
}
return 0;
}

int func_237(int iParam0){
if((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
return 1;
}
return 0;
}


void func_238(int iParam0){
switch (iParam0){
case 78:
func_240(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
func_240(-612.8933f, 692.116f, 148.7577f, 79.1005f);
func_240(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
func_240(-639.3558f, 696.9992f, 150.5134f, 77.481f);
break;
case 79:
func_240(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_240(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_240(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_240(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 82:
func_240(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_240(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_240(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_240(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 81:
func_240(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
func_240(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
func_240(-1283.894f, 467.2136f, 95.4036f, 95.058f);
func_240(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
break;
case 73:
func_240(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
func_240(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
func_240(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
func_240(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
break;
case 75:
func_240(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_240(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_240(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_240(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 76:
func_240(-668.575f, 668.7567f, 149.4004f, 69.8844f);
func_240(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_240(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_240(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
break;
case 77:
func_240(128.4334f, 578.7522f, 182.2934f, 106.5458f);
func_240(97.7791f, 576.8907f, 181.5599f, 91.3539f);
func_240(83.5896f, 576.4791f, 181.0832f, 89.7262f);
func_240(69.9599f, 575.9902f, 180.5019f, 91.4926f);
break;
case 80:
func_240(-872.1293f, 698.7591f, 148.5084f, 339.673f);
func_240(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
func_240(-907.3458f, 695.8158f, 150.396f, 270.6491f);
func_240(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
break;
case 87:
if(func_239()){
func_240(-1608.297f, -556.875f, 33.406f, 310f);
func_240(-1616.095f, -563.402f, 33.049f, 309.4f);
func_240(-1560.29f, -531.69f, 34.576f, 35.3994f);
func_240(-1555.303f, -538.781f, 34.044f, 35.3994f);
}else{
func_240(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
func_240(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
func_240(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
func_240(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
func_240(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
func_240(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
func_240(-1611.769f, -601.588f, 31.2908f, 50.7362f);
func_240(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
}
break;
case 88:
if(func_239()){
func_240(-1402.362f, -511.396f, 30.888f, 35.4f);
func_240(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
func_240(-1407.634f, -503.839f, 31.35f, 35.4f);
func_240(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
}else{
func_240(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
func_240(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
func_240(-1346.236f, -523.9114f, 30.6f, 124.7302f);
func_240(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
func_240(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
func_240(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
func_240(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
func_240(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
}
break;
case 89:
if(func_239()){
func_240(-102.737f, -597.379f, 35.053f, 160.999f);
func_240(-97.793f, -589.568f, 35.082f, 134.799f);
func_240(-110.357f, -619.402f, 35.055f, 160.599f);
func_240(-112.561f, -627.723f, 35.046f, 165.399f);
}else{
func_240(-108.2604f, -613.6386f, 35.055f, 160.8063f);
func_240(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
func_240(-112.84f, -629.6357f, 35.0662f, 174.9843f);
func_240(-98.7403f, -590.3209f, 35.075f, 139.7632f);
func_240(-98.3748f, -612.642f, 35.137f, 161.1124f);
func_240(-92.595f, -595.4065f, 35.1888f, 161.3083f);
func_240(-104.4742f, -630.1472f, 35.1396f, 161.184f);
func_240(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
}
break;
case 90:
if(func_239()){
func_240(-59.349f, -779.238f, 43.134f, 228.398f);
func_240(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
func_240(-65.212f, -772.66f, 43.151f, 219.398f);
func_240(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
}else{
func_240(-59.684f, -779.4568f, 43.114f, 228.7591f);
func_240(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
func_240(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
func_240(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
func_240(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
func_240(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
func_240(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
func_240(-9.239f, -773.0505f, 43.0788f, 318.0367f);
}
break;
case 91:
func_240(246.5035f, -1798.749f, 26.1131f, 212.5996f);
func_240(247.8968f, -1797.017f, 26.1131f, 212.5996f);
func_240(249.3848f, -1795.374f, 26.1131f, 212.5996f);
func_240(250.8498f, -1793.695f, 26.1131f, 212.5996f);
func_240(262.9285f, -1784.205f, 26.1131f, 164.5991f);
func_240(266.8129f, -1787.476f, 26.1131f, 164.5991f);
func_240(264.814f, -1785.801f, 26.1131f, 164.5991f);
func_240(269.0069f, -1789.16f, 26.1131f, 164.5991f);
break;
case 92:
func_240(-1464.5f, -927.9f, 9f, 296.7991f);
func_240(-1466f, -926.1f, 9f, 296.7991f);
func_240(-1467.9f, -924.7f, 9f, 296.7991f);
func_240(-1469.7f, -923.7f, 9f, 296.7991f);
func_240(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
func_240(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
func_240(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
func_240(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
break;
case 93:
func_240(30.0784f, -1024.16f, 28.4469f, 234.5994f);
func_240(29.1695f, -1026.719f, 28.4453f, 234.5994f);
func_240(28.2538f, -1029.296f, 28.4421f, 234.5994f);
func_240(27.3737f, -1031.767f, 28.3937f, 234.5994f);
func_240(32.6932f, -1017.063f, 28.4531f, 234.5994f);
func_240(33.672f, -1014.399f, 28.4552f, 234.5994f);
func_240(37.488f, -1014.344f, 28.4781f, 175.5986f);
func_240(39.4909f, -1015.097f, 28.484f, 175.5986f);
break;
case 94:
func_240(45.0033f, 2784.392f, 56.8782f, 103.5999f);
func_240(43.316f, 2785.903f, 56.8782f, 103.5999f);
func_240(41.6126f, 2787.36f, 56.8782f, 103.5999f);
func_240(39.9584f, 2788.773f, 56.8782f, 103.5999f);
func_240(35.2347f, 2792.135f, 56.8781f, 208.7997f);
func_240(33.7771f, 2790.379f, 56.8781f, 208.7997f);
func_240(30.7578f, 2786.8f, 56.8781f, 208.7997f);
func_240(29.3121f, 2785.045f, 56.8745f, 208.7997f);
break;
case 95:
func_240(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
func_240(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
func_240(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
func_240(-337.675f, 6074.252f, 30.2727f, 152.9999f);
func_240(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
func_240(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
func_240(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
func_240(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
break;
case 96:
func_240(1738.422f, 3716.779f, 33.0787f, 6.9999f);
func_240(1736.207f, 3715.989f, 33.094f, 6.9999f);
func_240(1748.442f, 3714.17f, 33.0889f, 39.399f);
func_240(1750.475f, 3715.007f, 33.1067f, 39.399f);
func_240(1747.18f, 3721.102f, 33.007f, 95.199f);
func_240(1746.413f, 3723.255f, 32.9738f, 95.199f);
func_240(1740.67f, 3717.613f, 33.0616f, 8.199f);
func_240(1733.937f, 3715.08f, 33.1236f, 8.199f);
break;
case 97:
func_240(947.9371f, -1452.737f, 30.143f, 331.5991f);
func_240(950.2141f, -1452.826f, 30.1364f, 331.5991f);
func_240(952.4588f, -1452.882f, 30.129f, 331.5991f);
func_240(954.6608f, -1452.869f, 30.1303f, 331.5991f);
func_240(935.1006f, -1452.701f, 30.1907f, 316.999f);
func_240(932.5459f, -1452.579f, 30.2194f, 316.999f);
func_240(929.9319f, -1452.567f, 30.2647f, 316.999f);
func_240(927.4857f, -1452.446f, 30.3167f, 316.999f);
break;
case 98:
func_240(186.6051f, 306.8702f, 104.389f, 162.3999f);
func_240(184.3881f, 306.7666f, 104.3845f, 162.3999f);
func_240(182.1681f, 306.6823f, 104.375f, 162.3999f);
func_240(183.3219f, 296.2871f, 104.3707f, 350.7995f);
func_240(180.9933f, 296.3411f, 104.3704f, 350.7995f);
func_240(178.6569f, 296.4709f, 104.3701f, 350.7995f);
func_240(195.1475f, 304.4284f, 104.4644f, 77.3989f);
func_240(195.0814f, 301.8218f, 104.5287f, 77.3989f);
break;
case 99:
func_240(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
func_240(-33.3895f, -199.7716f, 51.355f, 5.3995f);
func_240(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
func_240(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
func_240(-17.9628f, -206.2525f, 51.3702f, 29.399f);
func_240(-14.8043f, -207.5648f, 51.4707f, 29.399f);
func_240(-11.8482f, -208.6405f, 51.5633f, 29.399f);
func_240(-9.1304f, -209.4894f, 51.6472f, 29.399f);
break;
case 100:
func_240(2478.52f, 4082.137f, 36.8208f, 227.5999f);
func_240(2477.557f, 4079.946f, 36.8014f, 227.5999f);
func_240(2465.123f, 4081.35f, 37.0655f, 167.4f);
func_240(2463.017f, 4082.271f, 37.0653f, 167.4f);
func_240(2467.7f, 4080.332f, 37.0649f, 167.4f);
func_240(2469.587f, 4079.538f, 37.061f, 167.4f);
func_240(2481.354f, 4088.553f, 36.9131f, 209.4f);
func_240(2482.442f, 4091.023f, 36.9472f, 209.4f);
break;
case 101:
func_240(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
func_240(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
func_240(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
func_240(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
func_240(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
func_240(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
func_240(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
func_240(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
break;
case 102:
func_240(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
func_240(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
func_240(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
func_240(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
func_240(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
func_240(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
func_240(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
func_240(-1127.039f, -1564.395f, 3.292f, 168.9988f);
break;
default:
break;
}}


bool func_239(){
return Global_2683883.f_17;
}


void func_240(struct<3> Param0, float fParam1){
if(Global_2635560.f_1854 < 101){
if(vmag(Param0) <=0.01f){
return;
}
Global_2635560.f_1855[Global_2635560.f_1854 /*4*/]={
Param0 
};
Global_2635560.f_1855[Global_2635560.f_1854 /*4*/].f_3=fParam1;
Global_2635560.f_1854++;
}}

int func_241(struct<3> Param0){
int iVar0;
if(vdist(Global_2635560.f_3009, Param0) < Global_2635560.f_3017){
return Global_2635560.f_3012;
}
Global_2635560.f_3009={
Param0 
};
iVar0=0;
while (iVar0 < 32){
if(Param0.f_2 <=0f){
Param0.f_2=((Global_2642989[iVar0 /*7*/].f_2 + Global_2642989[iVar0 /*7*/].f_3.f_2) * 0.5f);
}
if(func_178(Param0, &(Global_2642989[iVar0 /*7*/]))){
Global_2635560.f_3012=iVar0;
return iVar0;
}
iVar0++;
}
Global_2635560.f_3012=-1;
return -1;
}

int func_242(){
if(MISC::IS_BIT_SET(Global_4718592.f_13, 0) && !Global_2684820.f_6453){
return 0;
}
return 0;
}

int func_243(struct<2> Param0, var uParam1, bool bParam2, float fParam3){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar3=0;
iVar0=83;
while (iVar0 <=84 + 1){
if(bParam2){
if(func_211(iVar0)){
fVar1=fParam3;
}else{
fVar1=0f;
}}else{
fVar1=fParam3;
}
fVar2=vdist(Param0.f_0, Param0.f_1, 0f, Global_1950844.f_543[iVar0 /*3*/], Global_1950844.f_543[iVar0 /*3*/].f_1, 0f);
if(fVar2 < fVar1){
iVar3++;
}
iVar0++;
}
if(iVar3 > 0){
return 1;
}
return 0;
}


void func_244(){
int iVar0;
iVar0=0;
while (iVar0 < 30){
Global_2635560.f_2837[iVar0 /*3*/]={
0f, 0f, 0f 
};
iVar0++;
}}

int func_245(var uParam0, bool bParam1){
int iVar0;
struct<3> Var1;
Var1={
*uParam0 
};
iVar0=0;
while (iVar0 < 2){
if(Var1.f_2 <=0f){
Var1.f_2=((Global_2642945[iVar0 /*7*/].f_2 + Global_2642945[iVar0 /*7*/].f_3.f_2) * 0.5f);
}
if(func_178(Var1, &(Global_2642945[iVar0 /*7*/]))){
if(bParam1){
func_189(&Var1, Global_2642945[iVar0 /*7*/], Global_2642945[iVar0 /*7*/].f_3, Global_2642945[iVar0 /*7*/].f_6, 1036831949, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
return 0;
}

int func_246(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635560.f_515 && !Global_2635560.f_516){
if(!Global_2635560.f_45.f_317){
if(!func_250(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_249(Param0, 1008981770)){
if(!func_195(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_195(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_248(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_247(&(Global_2635560.f_45[iVar0 /*12*/])) 
};
if(!func_195(&Var1, 0, 0, 0, 1)){
if(!func_195(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__247(var uParam0){
switch (uParam0->f_10){
case 0:
return *uParam0;
break;
case 1:
case 2:
return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
break;
}
return *uParam0;
}

int func_248(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635560.f_45[iVar0 /*12*/].f_9){
if(func_182(Param0, &(Global_2635560.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_249(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635560.f_45[iVar0 /*12*/].f_9){
if(func_182(Param0, &(Global_2635560.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_250(int iParam0, bool bParam1){
if(func_42() !=0){
return func_251(iParam0) !=0;
}
return func_160(iParam0, bParam1, 0);
}

int func_251(int iParam0){
if(func_334(iParam0, 0, 1)){
return Global_2657704[iParam0 /*463*/].f_1;
}
return 0;
}

int func_252(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}


void func_253(){
int iVar0;
struct<4> Var1;
iVar0=0;
while (iVar0 < 101){
Global_2635560.f_1855[iVar0 /*4*/]={
Var1 
};
iVar0++;
}
Global_2635560.f_1854=0;
}


void func_254(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_691[iVar0])){
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_691[iVar0]){
if(!Global_2635560.f_687[iVar0]==-1){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635560.f_687[iVar0])){
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2635560.f_687[iVar0]);
Global_2635560.f_687[iVar0]=-1;
}else{
Global_2635560.f_687[iVar0]=-1;
}}}}elseif(!Global_2635560.f_687[iVar0]==-1){
Global_2635560.f_687[iVar0]=-1;
}
iVar0++;
}}

int func_255(){
if(!Global_2635560.f_606==0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_611) < func_252(0)){
return 1;
}
return 0;
}

int func_256(){
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE()==5){
return 0;
}}
if(Global_2635560.f_517==MISC::GET_FRAME_COUNT()){
return 0;
}
if(!func_258(PLAYER::PLAYER_ID()) && !func_257(0)){
return 0;
}
return 1;
}


bool func_257(bool bParam0){
if(bParam0){}
return Global_1575038;
}

int func_258(int iParam0){
if(!func_34(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_2672524.f_1, iParam0);
}


float func_259(){
return 10f;
}


Vector3 func__260(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


void func_261(int iParam0){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(Local_86.f_2[iVar0]), iVar1);
}


void func_262(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_86.f_5=iParam0;
}


void func_263(){
if(func_20() > 0){
func_294();
func_287();
func_279();
func_266();
}
if(func_265(NETWORK::PARTICIPANT_ID()) !=3 && func_20()==3){
func_264(3);
}
switch (func_265(NETWORK::PARTICIPANT_ID())){
case 0:
if(func_20() > 0){
func_264(2);
}
break;
case 2:
break;
case 3:
break;
}}


void func_264(int iParam0){
Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1=iParam0;
}

int func_265(int iParam0){
return Local_88[iParam0 /*4*/].f_1;
}


void func_266(){
if(!func_276()){
return;
}
if(func_272()){
if(!func_271(PLAYER::PLAYER_ID())){
func_269();
}}elseif(func_271(PLAYER::PLAYER_ID())){
func_267();
}}


void func_267(){
func_268(11);
}


void func_268(int iParam0){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_6), iParam0);
}


void func_269(){
func_270(11);
}


void func_270(bool bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_6), iParam0);
}


bool func_271(int iParam0){
return func_6(iParam0, 11);
}

int func_272(){
if(func_5(PLAYER::PLAYER_ID())){
return 0;
}
if(!func_7()){
return 0;
}
if(func_275() !=0){
func_274(0);
}
if(func_273(NETWORK::PARTICIPANT_ID(), 1)){
if(func_275()==0){
func_274(1);
}
return 0;
}
if(func_12(2)){
return 0;
}
return 1;
}


bool func_273(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=(iParam1 / 32);
iVar1=(iParam1 % 32);
return MISC::IS_BIT_SET(Local_88[iParam0 /*4*/].f_2[iVar0], iVar1);
}


void func_274(int iParam0){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_304=iParam0;
}

int func_275(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_304;
}

int func_276(){
if(!func_277()){
return 0;
}
return 1;
}


bool func_277(){
return func_278(PLAYER::PLAYER_ID());
}


var func__278(int iParam0){
return func_6(iParam0, 9);
}


void func_279(){
if(!func_286()){
return;
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_285(PLAYER::PLAYER_PED_ID(), func_16(), 120f, 1)){
if(!func_273(NETWORK::PARTICIPANT_ID(), 1)){
func_284(1);
}}elseif(func_273(NETWORK::PARTICIPANT_ID(), 1)){
func_283(1);
}
if(!func_273(NETWORK::PARTICIPANT_ID(), 0) && func_280()){
func_284(0);
}}

int func_280(){
if(func_277()){
if(!func_285(PLAYER::PLAYER_PED_ID(), func_16(), 1000f, 1)){
return 1;
}
if(func_282(PLAYER::PLAYER_ID(), 1, 1)){
return 1;
}
if(func_281(PLAYER::PLAYER_ID())){
return 1;
}
if(func_219(PLAYER::PLAYER_ID())){
return 1;
}}elseif(!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_17())){
return 1;
}
return 0;
}

int func_281(int iParam0){
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 14)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 11)){
return 1;
}
return 0;
}

int func_282(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_109()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 0)){
return 1;
}
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 1)){
return 1;
}}
if(bParam2){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return 1;
}}
return 0;
}


void func_283(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}


void func_284(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}


bool func_285(int iParam0, int iParam1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(uParam0, iParam3), ENTITY::GET_ENTITY_COORDS(uParam1, iParam3)) <=(fParam2 * fParam2);
}

int func_286(){
if(func_7()){
return 1;
}
return 0;
}


void func_287(){
int iVar0;
if(func_292(0)){
if(func_290()){
iVar0=1;
}else{
iVar0=2;
}}else{
iVar0=0;
}
if(iVar0 !=func_289()){
switch (func_289()){
case 2:
if(!func_314(1) && iVar0==0){
func_117(1);
}
break;
case 0:
if((func_277() && !func_273(NETWORK::PARTICIPANT_ID(), 0)) && iVar0==2){
func_284(0);
}
break;
}
func_288(iVar0);
}}


void func_288(int iParam0){
uLocal_91=iParam0;
}

int func_289(){
return uLocal_91;
}


bool func_290(){
return func_291(PLAYER::PLAYER_ID());
}

int func_291(int iParam0){
if(func_34(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_109()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}


bool func_292(bool bParam0){
return func_293(PLAYER::PLAYER_ID(), bParam0);
}


bool func_293(int iParam0, bool bParam1){
if(!func_34(iParam0)){
return 0;
}
if(!bParam1){
if(func_291(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_109();
}


void func_294(){
var uVar0;
if(func_19() > 0){
func_299();
}
switch (func_19()){
case 0:
break;
case 1:
break;
case 2:
if(((((!func_12(3) && !func_273(NETWORK::PARTICIPANT_ID(), 2)) && func_7()) && !NETWORK::NETWORK_IS_ENTITY_FADING(func_16())) && func_297(func_10())) && func_296(func_16())==0){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(func_16(), 1);
NETWORK::NETWORK_FADE_OUT_ENTITY(func_16(), 0, 1);
func_284(2);
}
break;
case 3:
if(((!func_12(4) && !func_273(NETWORK::PARTICIPANT_ID(), 3)) && func_7()) && !ENTITY::IS_ENTITY_VISIBLE(func_16())){
func_284(3);
}
break;
case 4:
if(((!func_12(5) && !func_273(NETWORK::PARTICIPANT_ID(), 4)) && func_7()) && func_297(func_10())){
uVar0=func_10();
func_295(&uVar0);
func_284(4);
}
break;
case 5:
break;
}}


void func_295(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0)){
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::DELETE_ENTITY(&uVar0);
}}

int func_296(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
iVar0=0;
while (iVar0 < iVar1){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), 0)){
iVar2++;
}
iVar0++;
}}
return iVar2;
}

int func_297(var uParam0){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
if(func_298(uParam0)){
return 1;
}}
return 0;
}

int func_298(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
}
return 0;
}


void func_299(){
if(func_305()){
if(!HUD::DOES_BLIP_EXIST(uLocal_93)){
uLocal_93=HUD::ADD_BLIP_FOR_ENTITY(func_16());
HUD::SET_BLIP_SPRITE(uLocal_93, func_304());
func_301(&uLocal_93, func_303());
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_93, func_300());
}}elseif(HUD::DOES_BLIP_EXIST(uLocal_93)){
HUD::REMOVE_BLIP(&uLocal_93);
}}


char* func_300(){
return "CASINO_VD";
}


void func_301(var uParam0, int iParam1){
var uVar0;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
uVar0=func_302(iParam1);
HUD::SET_BLIP_COLOUR(*uParam0, uVar0);
}}

int func_302(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
switch (iParam0){
case 1:
return 4;
case 0:
return 4;
case 6:
return 59;
case 18:
return 2;
case 13:
return 5;
case 116:
return 38;
case 28:
return 6;
case 29:
return 7;
case 30:
return 8;
case 31:
return 9;
case 32:
return 10;
case 33:
return 11;
case 34:
return 12;
case 35:
return 13;
case 36:
return 14;
case 37:
return 15;
case 38:
return 16;
case 39:
return 17;
case 40:
return 18;
case 41:
return 19;
case 42:
return 20;
case 43:
return 21;
case 44:
return 22;
case 45:
return 23;
case 46:
return 24;
case 47:
return 25;
case 48:
return 26;
case 49:
return 27;
case 50:
return 28;
case 51:
return 29;
case 52:
return 30;
case 53:
return 31;
case 54:
return 32;
case 55:
return 33;
case 56:
return 34;
case 57:
return 35;
case 58:
return 36;
case 59:
return 37;
case 9:
return 57;
case 10:
return 53;
case 118:
return 57;
case 14:
return 56;
case 3:
return 55;
case 21:
return 50;
case 15:
return 51;
case 20:
return 52;
case 11:
return 54;
case 23:
return 58;
case 12:
return 60;
case 24:
return 61;
case 4:
return 62;
default:
}
HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
return 0;
}

int func_303(){
return 12;
}

int func_304(){
return 225;
}

int func_305(){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10())){
return 0;
}
if(func_19() !=1){
return 0;
}
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), func_16(), 0)){
return 0;
}
if(!func_7()){
return 0;
}
return 1;
}


void func_306(int iParam0){
Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=iParam0;
}

int func_307(){
func_308();
return 1;
}


void func_308(){
func_270(10);
}

int func_309(){
return Local_86.f_0;
}

int func_310(int iParam0){
return Local_88[iParam0 /*4*/];
}


void func_311(){
int iVar0;
var uVar1;
bool bVar2;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iLocal_89[iVar0]=func_313();
iVar0++;
}
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)){
iLocal_89[iVar0]=iVar0;
uVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(iLocal_89[iVar0]);
if(func_334(uVar1, 0, 1)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!bVar2){
if(func_273(iLocal_89[iVar0], 1)){
bVar2=true;
}}
if(!func_12(1)){
if(func_273(iLocal_89[iVar0], 0)){
func_261(1);
}}
if(!func_12(3)){
if(func_273(iLocal_89[iVar0], 2)){
func_261(3);
}}
if(!func_12(4)){
if(func_273(iLocal_89[iVar0], 3)){
func_261(4);
}}
if(!func_12(5)){
if(func_273(iLocal_89[iVar0], 4)){
func_261(5);
}}}}}
iVar0++;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(bVar2){
if(!func_12(2)){
func_261(2);
}}elseif(func_12(2)){
func_312(2);
}}}


void func_312(int iParam0){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Local_86.f_2[iVar0]), iVar1);
}

int func_313(){
return -1;
}


bool func_314(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(uLocal_90[iVar0], iVar1);
}

int func_315(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_321()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_320()){
return 1;
}
if(func_319(159)){
if(!func_318()){
return 1;
}}
if(func_319(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_316() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_316())==0){
return 1;
}}
return 0;
}

int func_316(){
switch (func_42()){
case 0:
return func_317();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_317(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


bool func_318(){
return Global_2683883.f_698;
}

int func_319(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_320(){
return Global_2694576;
}


bool func_321(){
return Global_2683883.f_693;
}


void func_322(){
wait(0);
}


void func_323(){
if(func_277() && func_2() !=3){
func_329();
}
if(func_328(PLAYER::PLAYER_ID())){
func_327();
}
if(func_271(PLAYER::PLAYER_ID())){
func_267();
}
if(func_5(PLAYER::PLAYER_ID())){
func_326();
}
if(func_275() !=0){
func_274(0);
}
if(func_2() !=0){
func_324();
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_324(){
var uVar0;
uVar0=func_10();
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0)){
func_325(&uVar0);
}}


void func_325(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}


void func_326(){
func_268(12);
}


void func_327(){
func_268(10);
}


bool func_328(int iParam0){
return func_6(iParam0, 10);
}


void func_329(){
func_268(9);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_305=0;
}

int func_330(struct<21> Param0){
func_333(8, Param0);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
func_331(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_86, 8, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_88, 33, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
return 1;
}

int func_331(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_332();
}else{
return 0;
}}
if(!func_257(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_332();
}else{
return 0;
}}
if(func_321()){
if(!bParam2){
func_332();
}else{
return 0;
}}
if(func_319(157)){
if(!bParam2){
func_332();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_332();
}else{
return 0;
}}}
wait(0);
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
}
if(iParam1 > -1){
Global_1574666=iVar0;
}
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_332();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_332();
}else{
return 0;
}}
return 1;
}


void func_332(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_333(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_332();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_334(int iParam0, bool bParam1, bool bParam2){
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