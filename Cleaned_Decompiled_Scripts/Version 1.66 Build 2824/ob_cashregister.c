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
int iLocal_18=0;
struct<3> Local_19={
0, 0, 0 
};
int iLocal_20=0;
var uLocal_21=0;
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
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_1666891, 1)){
func_25();
}else{
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
func_22(0, -1, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
iLocal_20=1;
}}elseif(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2)){
func_25();
}
while (true){
wait(0);
if(iLocal_20==1){
if(func_14()){
func_25();
}}
if(ENTITY::DOES_ENTITY_EXIST(uScriptParam_21)){
if(BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_21)){
switch (iLocal_18){
case 0:
if(ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_21)){
Local_19={
ENTITY::GET_ENTITY_COORDS(uScriptParam_21, 1) 
};
iLocal_18=1;
}
break;
case 1:
if((OBJECT::HAS_OBJECT_BEEN_BROKEN(uScriptParam_21, 0) && ENTITY::IS_ENTITY_VISIBLE(uScriptParam_21)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uScriptParam_21)){
func_1();
iLocal_18=2;
}
break;
case 2:
break;
}}else{
func_25();
}}else{
func_25();
}}}


void func_1(){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
iVar0=joaat("prop_money_bag_01");
iVar1=joaat("pickup_money_med_bag");
iVar3=MISC::GET_RANDOM_INT_IN_RANGE(70, 121);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=joaat("prop_cash_pile_01");
iVar3=MISC::GET_RANDOM_INT_IN_RANGE(50, 101);
iVar3=func_13(iVar3, 1);
}
MISC::SET_BIT(&uVar2, 3);
MISC::SET_BIT(&uVar2, 4);
STREAMING::REQUEST_MODEL(iVar0);
while (!STREAMING::HAS_MODEL_LOADED(iVar0)){
wait(0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_2(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Local_19, 1067030938, 1069547520), uVar2, iVar3, iVar0, 0, 0);
}else{
OBJECT::CREATE_PICKUP(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
}}


struct<5> func_2(int iParam0, struct<3> Param1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6){
struct<5> Var0;
Var0=123;
if(func_12() && func_11(iParam0)){
Var0={
func_3(iParam0, Param1, uParam2, iParam3, iParam4, bParam5) 
};
}else{
Var0.f_4=OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, uParam2, iParam3, iParam4, bParam5, iParam6);
}
return Var0;
}


struct<5> func_3(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, bool bParam5){
struct<5> Var0;
int iVar1;
struct<5> Var2;
int iVar3;
Var0=123;
if(func_10()==-1){
return Var0;
}
iVar1=func_9(-1);
if(iVar1==-1){
return Var0;
}
Var2=123;
Var2.f_0=iParam0;
Var2.f_1={
Param1 
};
if(func_4(&Var2) !=-1){
return Var0;
}
MISC::SET_BIT(&uParam2, 5);
Var2.f_4=OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, Param1, uParam2, uParam3, uParam4, bParam5, 0);
iVar3=PLAYER::NETWORK_PLAYER_ID_TO_INT();
if(bParam5){
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_12=SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_13=NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
if(Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_13==0){
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_13=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_11=1;
}else{
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_11=2;
}}
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/]={
Var2 
};
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_5={
Param1 
};
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_8=uParam2;
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_9=uParam3;
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_10=uParam4;
return Var2;
}

int func_4(var uParam0){
int iVar0;
if(!func_7(uParam0)){
return -1;
}
iVar0=0;
while (iVar0 < 10){
if(func_5(uParam0, &(Global_2652258.f_2452[iVar0 /*16*/]))){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_5(var uParam0, var uParam1){
if((*uParam0==*uParam1 && func_6(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4==uParam1->f_4){
return 1;
}
return 0;
}


bool func_6(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_7(var uParam0){
if((*uParam0==123 || func_8(uParam0->f_1)) || uParam0->f_4==0){
return 0;
}
return 1;
}

int func_8(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_9(int iParam0){
int iVar0;
int iVar1;
if(iParam0==-1){
iParam0=PLAYER::NETWORK_PLAYER_ID_TO_INT();
}
iVar0=-1;
iVar1=0;
while (iVar1 < 10){
if(!func_7(&(Global_1914091[iParam0 /*297*/].f_98.f_21[iVar1 /*14*/]))){
iVar0=iVar1;
}else{
iVar1++;
}}
return iVar0;
}

int func_10(){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 < 10){
if(!func_7(&(Global_2652258.f_2452[iVar1 /*16*/]))){
iVar0=iVar1;
}else{
iVar1++;
}}
return iVar0;
}

int func_11(int iParam0){
switch (iParam0){
case joaat("pickup_money_variable"):
case joaat("pickup_money_case"):
case joaat("pickup_money_wallet"):
case joaat("pickup_money_purse"):
case joaat("pickup_money_dep_bag"):
case joaat("pickup_money_med_bag"):
case joaat("pickup_money_paper_bag"):
case joaat("pickup_money_security_case"):
case joaat("pickup_gang_attack_money"):
return 1;
default:
}
return 0;
}


var func__12(){
return Global_262145.f_30937;
}

int func_13(int iParam0, int iParam1){
float fVar0;
switch (iParam1){
case 0:
break;
case 1:
if(iParam0 > 0){
fVar0=(to_float(iParam0) * Global_262145);
iParam0=round(fVar0);
}
break;
default:
break;
}
return iParam0;
}

int func_14(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_21()){
return 1;
}
if(Global_2696917){
return 1;
}
if(func_20()){
return 1;
}
if(func_19(159)){
if(!func_18()){
return 1;
}}
if(func_19(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_15() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_15())==0){
return 1;
}}
return 0;
}

int func_15(){
switch (func_17()){
case 0:
return func_16();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_16(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_17(){
return Global_32163;
}


bool func_18(){
return Global_2683864.f_698;
}

int func_19(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_20(){
return Global_2694526;
}


bool func_21(){
return Global_2683864.f_693;
}

int func_22(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_24();
}else{
return 0;
}}
if(!func_23(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_24();
}else{
return 0;
}}
if(func_21()){
if(!bParam2){
func_24();
}else{
return 0;
}}
if(func_19(157)){
if(!bParam2){
func_24();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_24();
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
func_24();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_24();
}else{
return 0;
}}
return 1;
}


bool func_23(bool bParam0){
if(bParam0){}
return Global_1575035;
}


void func_24(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_25(){
SCRIPT::TERMINATE_THIS_THREAD();
}