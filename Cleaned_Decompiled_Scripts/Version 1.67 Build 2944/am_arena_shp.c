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
int iLocal_12=0;
float fLocal_13=0f;
var uLocal_14=0;
var uLocal_15=0;
char* sLocal_16=NULL;
var uLocal_17=0;
var uLocal_18=0;
int iLocal_19=0;
struct<67> Local_20={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 
};
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
struct<2> Local_39={
0, 0 
};
var uLocal_40=0;
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
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=1;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
int iLocal_84=0;
struct<34> Local_85={
2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
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
iLocal_12=-1;
fLocal_13=0.001f;
sLocal_16="NULL";
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_53(ScriptParam_85);
}else{
func_51();
}
while (true){
func_50();
if(Global_262145.f_24258){
func_51();
}
if(func_42()){
func_51();
}
func_1();
}}


void func_1(){
bool bVar0;
int iVar1;
int iVar2;
bVar0=false;
if(Global_4536658){
if(Global_4540738[iLocal_19 /*12*/].f_11){
func_39(iLocal_19);
Global_4540738[iLocal_19 /*12*/].f_11=0;
}}
if(Local_20.f_66.f_8){
func_17(Local_20.f_66);
}
if((Local_20.f_66.f_2==1 && Global_4536659) && func_16(&Local_20)){
bVar0=true;
}
if(Global_4535172[iLocal_19 /*85*/].f_66==2147483647 && Local_20.f_66.f_12){
if(bVar0){
func_15(0);
}
func_51();
}
if(Local_20.f_66.f_18 > 0 && !func_14()){
iVar2=(1000 / round((MISC::GET_FRAME_TIME() * 1000f)));
if((MISC::GET_FRAME_COUNT() - Local_20.f_66.f_18) > iVar2 * 10){
Local_20.f_66.f_18=-1;
}}
if(((func_13() && Local_20.f_66.f_2==1) && Local_20.f_66.f_13) && !Local_20.f_66.f_12){
if(MISC::GET_FRAME_COUNT() - Local_20.f_66.f_14) >=func_12(Local_20.f_66.f_5){
iVar1=0;
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
iVar1=1;
}elseif(Local_20.f_66.f_2 !=1){
iVar1=2;
}elseif(Local_20.f_66.f_5 !=1 && !NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&(Local_20.f_66), Local_20.f_66.f_6, Local_20.f_66.f_4, Local_20.f_66.f_7, Local_20.f_66.f_1, Local_20.f_66.f_10)){
iVar1=3;
}elseif(!NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Local_20.f_66)){
iVar1=4;
}else{
Local_20.f_66.f_12=1;
Global_4535172[iLocal_19 /*85*/].f_66.f_12=1;
Global_4535172[iLocal_19 /*85*/].f_66=Local_20.f_66;
}
if(iVar1 !=0){
func_7(iLocal_19);
func_51();
}}}
if(!iLocal_84){
if(bVar0){
func_5(&Local_39, 0);
iLocal_84=1;
}}elseif(bVar0){
StringCopy(&(Local_39.f_1), "HUD_TRANSP", 64);
func_2(&Local_39, func_4(&Local_39));
}else{
iLocal_84=0;
func_15(0);
}}


void func_2(var uParam0, int iParam1){
if(iParam1==1){
*uParam0=0;
func_3(uParam0);
}
if(*uParam0==0){
if(uParam0->f_36){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_37){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_39){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_38){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}elseif(uParam0->f_40){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}else{
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
}
*uParam0=1;
}
if(*uParam0==1){}}


void func_3(var uParam0){
uParam0->f_35=0;
}

int func_4(var uParam0){
return uParam0->f_35;
}


void func_5(var uParam0, bool bParam1){
func_6(uParam0);
if(bParam1){
func_15(0);
}
uParam0->f_35=1;
}


void func_6(var uParam0){
struct<46> Var0;
Var0.f_41=1;
*uParam0={
Var0 
};
}


void func_7(int iParam0){
bool bVar0;
bVar0=false;
if(!func_13()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_10(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_8(&(Global_4535172[iParam0 /*85*/]));
}}


void func_8(var uParam0){
uParam0->f_66=0;
uParam0->f_66=2147483647;
uParam0->f_66.f_1=0;
uParam0->f_66.f_2=0;
uParam0->f_66.f_3=-1593119440;
uParam0->f_66.f_4=-2085313189;
uParam0->f_66.f_5=0;
uParam0->f_66.f_6=1227573907;
uParam0->f_66.f_7=-1161833819;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_13=0;
uParam0->f_2=0;
func_9(&(uParam0->f_14));
func_9(&(uParam0->f_14.f_13));
StringCopy(&(uParam0->f_14.f_26), "", 32);
StringCopy(&(uParam0->f_14.f_34), "", 24);
StringCopy(&(uParam0->f_14.f_40), "", 16);
StringCopy(&(uParam0->f_14.f_44), "", 32);
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_66.f_8=0;
uParam0->f_66.f_9=0;
uParam0->f_66.f_10=0;
uParam0->f_66.f_11=0;
uParam0->f_66.f_13=0;
uParam0->f_66.f_12=0;
uParam0->f_66.f_14=0;
uParam0->f_66.f_15=0;
uParam0->f_66.f_16=0;
uParam0->f_66.f_18=0;
}


void func_9(var uParam0){
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

int func_10(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


var func__11(){
return Global_1574918;
}

int func_12(int iParam0){
switch (iParam0){
case 0:
return Global_4536661;
break;
case 1:
return Global_4536660;
break;
}
return 0;
}

int func_13(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


bool func_14(){
return Global_100885.f_394 > 0;
}


void func_15(bool bParam0){
HUD::BUSYSPINNER_OFF();
if(bParam0){
HUD::PRELOAD_BUSYSPINNER();
}}

int func_16(var uParam0){
if(uParam0->f_66.f_4==2043854386){
return 0;
}
return 1;
}


void func_17(var uParam0){
struct<7> Var0;
int iVar1;
bool bVar2;
int iVar3;
struct<67> Var4;
bool bVar5;
var uVar6;
int iVar7;
int iVar8;
int iVar9;
iVar1=0;
bVar2=false;
if(!func_13()){
iVar1=1;
Var0.f_0=uParam0;
Var0.f_2=0;
}
if(iVar1 || SCRIPT::GET_EVENT_DATA(1, uParam0, &Var0, 7)){
Var4.f_66=2147483647;
iVar3=func_38(Var0.f_0, &Var4);
if(iVar3 !=-1){
Global_4535172[iVar3 /*85*/].f_66.f_8=0;
if(Global_4535172[iVar3 /*85*/].f_66.f_18==0){
Global_4535172[iVar3 /*85*/].f_66.f_18=MISC::GET_FRAME_COUNT();
}}
bVar5=true;
if(iVar3 !=-1){
Global_4535172[iVar3 /*85*/].f_66.f_17=Var0.f_2;
}else{
Global_4536646.f_4=Var0.f_2;
Global_4536646.f_6=Var0.f_3;
Global_4536646.f_7=Var0.f_4;
Global_4536646.f_8=Var0.f_5;
Global_4536646.f_9=Var0.f_6;
if(Global_4536646.f_10==0){
Global_4536646.f_10=MISC::GET_FRAME_COUNT();
}}
switch (Var0.f_2){
case 0:
if(iVar3 !=-1){
Global_4540738[iVar3 /*12*/]=Global_4535172[iVar3 /*85*/].f_66.f_3;
Global_4540738[iVar3 /*12*/].f_1=Global_4535172[iVar3 /*85*/].f_66.f_7;
Global_4540738[iVar3 /*12*/].f_2=Global_4535172[iVar3 /*85*/].f_66.f_4;
Global_4540738[iVar3 /*12*/].f_3=Global_4535172[iVar3 /*85*/].f_66.f_1;
Global_4540738[iVar3 /*12*/].f_5=Var0.f_1;
Global_4540738[iVar3 /*12*/].f_6=Var0.f_3;
Global_4540738[iVar3 /*12*/].f_7=Var0.f_4;
Global_4540738[iVar3 /*12*/].f_8=Var0.f_5;
Global_4540738[iVar3 /*12*/].f_9=Var0.f_6;
Global_4540738[iVar3 /*12*/].f_11=1;
Global_4535172[iVar3 /*85*/].f_66.f_2=2;
if(Global_4535172[iVar3 /*85*/].f_66.f_11 & 4 !=0){
func_33(iVar3, bVar5);
}elseif(func_13()){
if(bVar5){
NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4535172[iVar3 /*85*/].f_66, &uVar6);
}}}
break;
default:
if(iVar3 !=-1){
Global_4535172[iVar3 /*85*/].f_66.f_2=3;
if((Global_4535172[iVar3 /*85*/].f_66.f_11 & 1 !=0 && Global_4535172[iVar3 /*85*/].f_66.f_9 < 2) && func_32(Var0.f_2)){
if(func_10(iVar3)){
if(func_24()){
Global_4535172[iVar3 /*85*/].f_66.f_2=1;
Global_4535172[iVar3 /*85*/].f_66.f_9++;
}elseif(Global_4535172[iVar3 /*85*/].f_66.f_11 & 2 !=0){
Global_4536680=Global_4535172[iVar3 /*85*/].f_66.f_4;
Global_4536682=Global_4535172[iVar3 /*85*/].f_66.f_6;
Global_4536683=Var0.f_2;
Global_4536681=Global_4535172[iVar3 /*85*/].f_66.f_1;
if(func_23(Global_4536680) && func_13()){
if(!func_22(Global_4535172[iVar3 /*85*/].f_66)){
iVar7=func_21();
Global_4536533[iVar7 /*7*/]=Global_4535172[iVar3 /*85*/].f_66;
Global_4536533[iVar7 /*7*/].f_2=Global_4536680;
Global_4536533[iVar7 /*7*/].f_3=Global_4536682;
Global_4536533[iVar7 /*7*/].f_1=Global_4536681;
Global_4536533[iVar7 /*7*/].f_4=NETWORK::GET_NETWORK_TIME();
}}else{
Global_4536677=1;
}}
}
elseif(func_20(&iVar3)){
Global_4535172[iVar3 /*85*/].f_66.f_2=1;
Global_4535172[iVar3 /*85*/].f_66.f_9++;
}
elseif(Global_4535172[iVar3 /*85*/].f_66.f_11 & 2 !=0){
Global_4536680=Global_4535172[iVar3 /*85*/].f_66.f_4;
Global_4536682=Global_4535172[iVar3 /*85*/].f_66.f_6;
Global_4536683=Var0.f_2;
Global_4536681=Global_4535172[iVar3 /*85*/].f_66.f_1;
if(func_23(Global_4536680) && func_13()){
if(!func_22(Global_4535172[iVar3 /*85*/].f_66)){
iVar8=func_21();
Global_4536533[iVar8 /*7*/]=Global_4535172[iVar3 /*85*/].f_66;
Global_4536533[iVar8 /*7*/].f_2=Global_4536680;
Global_4536533[iVar8 /*7*/].f_3=Global_4536682;
Global_4536533[iVar8 /*7*/].f_1=Global_4536681;
Global_4536533[iVar8 /*7*/].f_4=NETWORK::GET_NETWORK_TIME();
}}else{
Global_4536677=1;
}
}}elseif(Global_4535172[iVar3 /*85*/].f_66.f_11 & 2 !=0){
Global_4536680=Global_4535172[iVar3 /*85*/].f_66.f_4;
Global_4536682=Global_4535172[iVar3 /*85*/].f_66.f_6;
Global_4536683=Var0.f_2;
Global_4536681=Global_4535172[iVar3 /*85*/].f_66.f_1;
if((func_23(Global_4536680) && func_13()) && func_32(Var0.f_2)){
if(!func_22(Global_4535172[iVar3 /*85*/].f_66)){
iVar9=func_21();
Global_4536533[iVar9 /*7*/]=Global_4535172[iVar3 /*85*/].f_66;
Global_4536533[iVar9 /*7*/].f_2=Global_4536680;
Global_4536533[iVar9 /*7*/].f_3=Global_4536682;
Global_4536533[iVar9 /*7*/].f_1=Global_4536681;
Global_4536533[iVar9 /*7*/].f_4=NETWORK::GET_NETWORK_TIME();
}
}
else{
Global_4536677=1;
}}
if(Global_4535172[iVar3 /*85*/].f_66.f_2==3){
if(bVar2){
func_19(1, Global_4535172[iVar3 /*85*/].f_66.f_4);
Global_4536677=0;
}
if(Global_4535172[iVar3 /*85*/].f_66.f_11 & 4 !=0){
func_18(iVar3, Global_4535172[iVar3 /*85*/].f_66.f_4, Global_4535172[iVar3 /*85*/].f_66.f_10, Global_4535172[iVar3 /*85*/].f_66.f_1, Var0.f_2);
}}}
break;
}}}


void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
break;
}
if(iParam0 !=-1){
func_7(iParam0);
}}


void func_19(int iParam0, var uParam1){
Global_2697092=uParam1;
Global_2697091=iParam0;
}

int func_20(int iParam0){
bool bVar0;
int iVar1;
bVar0=false;
if(!func_13()){
bVar0=true;
}
iVar1=1;
if(*iParam0==-1 || func_10(*iParam0)){
return 0;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536678=1;
return 0;
}
if(Global_2695872){
if(Global_4535172[*iParam0 /*85*/].f_66.f_6==1067618600 || Global_4535172[*iParam0 /*85*/].f_66.f_6==-1303831698){
Global_4536679=1;
return 0;
}}}
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Global_4535172[*iParam0 /*85*/].f_66)){
if(iVar1 && !bVar0){
}
Global_4535172[*iParam0 /*85*/].f_66.f_13=1;
Global_4535172[*iParam0 /*85*/].f_66.f_12=0;
Global_4535172[*iParam0 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
if(bVar0){
if(*iParam0 !=-1){
Global_4535172[*iParam0 /*85*/].f_66.f_8=1;
Global_4535172[*iParam0 /*85*/].f_66.f_12=1;
}}
Global_4535172[*iParam0 /*85*/].f_66.f_18=0;
return 1;
}
return 0;
}

int func_21(){
int iVar0;
int iVar1;
int iVar2;
iVar2=Global_4536533;
iVar0=0;
while (iVar0 <=(iVar2 - 1)){
if(Global_4536533[iVar0 /*7*/] !=0 && Global_4536533[iVar0 /*7*/] !=2147483647){
iVar1++;
}
iVar0++;
}
if(iVar1 >=iVar2){
return 0;
}
return iVar1;
}

int func_22(int iParam0){
int iVar0;
int iVar1;
iVar1=Global_4536533;
if(iParam0==2147483647 || iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 <=(iVar1 - 1)){
if(Global_4536533[iVar0 /*7*/]==iParam0){
return 1;
}
if(Global_4536533[iVar0 /*7*/].f_6==iParam0){
Global_4536533[iVar0 /*7*/].f_4=NETWORK::GET_NETWORK_TIME();
Global_4536533[iVar0 /*7*/].f_6=2147483647;
return 1;
}
iVar0++;
}
return 0;
}

int func_23(int iParam0){
if(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0==1780666425 || iParam0==-2043695058) || iParam0==-1586170317) || iParam0==393059668) || iParam0==-1027218631) || iParam0==1048226110) || iParam0==569170531) || iParam0==-856006867) || iParam0==848090538) || iParam0==-293060240) || iParam0==-47546905) || iParam0==463142405) || iParam0==1550217370) || iParam0==-101307780) || iParam0==1052472386) || iParam0==-2130199671) || iParam0==-1227654538) || iParam0==-876012764) || iParam0==-722894325) || iParam0==1407278493) || iParam0==-1579394494) || iParam0==1179783540) || iParam0==923419301) || iParam0==-308826175) || iParam0==603298940) || iParam0==-12619854) || iParam0==-311112675) || iParam0==870439158) || iParam0==-974288740) || iParam0==-4138654) || iParam0==-1180954122) || iParam0==-1918051016) || iParam0==844330594) || iParam0==1934825517) || iParam0==1852024236) || iParam0==2099238988) || iParam0==1952643559) || iParam0==-1172900789) || iParam0==-2015399333) || iParam0==-1574795641) || iParam0==-961034881) || iParam0==1135468152) || iParam0==1265272476) || iParam0==-634726636) || iParam0==696556762) || iParam0==443347049) || iParam0==403506509) || iParam0==-883876414) || iParam0==-1064150715) || iParam0==-1387253055) || iParam0==-716963152) || iParam0==1138089938) || iParam0==-561012053) || iParam0==1240683675) || iParam0==1241904665) || iParam0==-494565059) || iParam0==827308208) || iParam0==-1857685192) || iParam0==1698417709) || iParam0==-2017925037) || iParam0==1057653594) || iParam0==1810506918) || iParam0==451427308) || iParam0==824622151) || iParam0==1253978276) || iParam0==-1576080766) || iParam0==1508411869) || iParam0==1428501742) || iParam0==-1918967151) || iParam0==1261538664) || iParam0==1180397655) || iParam0==1414674366) || iParam0==261460130) || iParam0==-2027658376) || iParam0==1668610896) || iParam0==-2032529561) || iParam0==-1224479447) || iParam0==-319306689) || iParam0==-466527264) || iParam0==1925965142) || iParam0==592152676) || iParam0==2035612943) || iParam0==1568659720) || iParam0==1220095570) || iParam0==2050320631) || iParam0==592672421) || iParam0==1775876058) || iParam0==-842062976) || iParam0==-518651910) || iParam0==14658715) || iParam0==-604793592) || iParam0==-823426392) || iParam0==-1401862980) || iParam0==-173354274) || iParam0==409533976) || iParam0==-1472522337) || iParam0==542574408) || iParam0==-1261799063) || iParam0==784631574) || iParam0==-2027479156) || iParam0==-837690641) || iParam0==-1029672338) || iParam0==-1503749970) || iParam0==-1843409092) || iParam0==1669058563) || iParam0==2102747615) || iParam0==2030771998) || iParam0==1708747007) || iParam0==645293860) || iParam0==-818859193) || iParam0==300796227) || iParam0==-1999832346) || iParam0==1058055395) || iParam0==-321151125) || iParam0==2078731875) || iParam0==1280785534) || iParam0==-1878824774) || iParam0==247992227) || iParam0==-229237358) || iParam0==-1123183389) || iParam0==1814197076) || iParam0==713955548) || iParam0==-2026544524) || iParam0==-719580138) || iParam0==-163417439) || iParam0==-550417574) || iParam0==208223429) || iParam0==-1433071892) || iParam0==761999406) || iParam0==-1101941763) || iParam0==1748245957) || iParam0==1036772696) || iParam0==-1384648535) || iParam0==-800037808) || iParam0==-695852120) || iParam0==77355315) || iParam0==2097889166) || iParam0==1707592130) || iParam0==1628412596) || iParam0==883337077) || iParam0==-1274418755) || iParam0==-1853979468) || iParam0==-239888995) || iParam0==1163066566) || iParam0==-955087020) || iParam0==1874391251) || iParam0==1633116913) || iParam0==668586600) || iParam0==15168061) || iParam0==590289134) || iParam0==99792878) || iParam0==1866258778) || iParam0==-178394060) || iParam0==409592287) || iParam0==593836803) || iParam0==1973036520) || iParam0==2063456538) || iParam0==-728008329) || iParam0==119239868) || iParam0==-456458353) || iParam0==1900048468) || iParam0==333526332) || iParam0==-2091351051) || iParam0==-373571001) || iParam0==-367430800) || iParam0==1823444356){
return 1;
}
return 0;
}

int func_24(){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
bVar0=false;
if(!func_13()){
bVar0=true;
}
iVar1=1;
iVar2=func_31();
if(iVar2==-1){
return 0;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
if(func_30(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1)==1){
Global_4536678=1;
}
return 0;
}
if(Global_2695872){
if(Global_4535172[iVar2 /*85*/].f_66.f_6==1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6==-1303831698){
Global_4536679=1;
return 0;
}}}
iVar3=func_29(iVar2);
if(iVar3 !=2147483647){
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3)){
Global_4535172[iVar2 /*85*/].f_66.f_13=1;
Global_4535172[iVar2 /*85*/].f_66.f_12=0;
Global_4535172[iVar2 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
if(bVar0){
Global_4535172[iVar2 /*85*/].f_66.f_8=1;
Global_4535172[iVar2 /*85*/].f_66.f_12=1;
}
Global_4535172[iVar2 /*85*/].f_66.f_18=0;
if(bVar0 || iVar1){
func_25(Global_4535172[iVar2 /*85*/], iVar2);
}
Global_4536659=1;
return 1;
}}
return 0;
}


void func_25(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
struct<3> Var0;
int iVar1;
if(iParam19 < 0){
return;
}
Var0.f_2=2147483647;
Var0.f_0=-710178565;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0.f_66 
};
Var0.f_2.f_33=iParam19;
iVar1=func_27(Var0.f_1);
if((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260){
return;
}
if(!iVar1==0){
func_26();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_26(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__27(int iParam0){
var uVar0;
if(func_28(uParam0)){
MISC::SET_BIT(&uVar0, uParam0);
}
return uVar0;
}

int func_28(var uParam0){
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

int func_29(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66;
}
return -1;
}

int func_30(int iParam0, int iParam1, int iParam2){
if(iParam0==-433440095 || iParam0==1474183246){
switch (iParam1){
case 1940862352:
if(iParam2 >=10000){
return 1;
}else{
return 0;
}
break;
case -31156877:
case -327918414:
case 550898518:
case 835976347:
case 1347433368:
case -1100963799:
if(iParam2 >=1000){
return 1;
}else{
return 2;
}
break;
case 1982688246:
return 0;
break;
case 1718438689:
case -1027218631:
case -1398318418:
case 1652884147:
case -57868256:
case -1216489292:
case -46622315:
case -352356931:
case -990286235:
case 563463121:
case 1734805203:
case 941287179:
case -1186079845:
case -1985150258:
case -1127021384:
case -109201286:
case -661030418:
case 1301046174:
case -1586170317:
case 393059668:
case 23796958:
case -1077156170:
case 1780666425:
case -2043695058:
case -1922554349:
case 1287308202:
case 691372038:
case 1480707108:
case 1512499951:
case 562283735:
case -154732333:
case -1362660491:
case 645708827:
case 767907967:
case -1970151306:
case 718859568:
case -1955564771:
case 892388724:
case -1426920838:
case 1349151477:
case 1620609399:
case 1961641934:
case 210955503:
case -59668082:
case 1736933716:
case -1468524125:
case 111573502:
case 1525644423:
case 968073639:
case 1577781788:
case -934465332:
case -1194253122:
case -212607085:
case -815546555:
case 1048226110:
case 569170531:
case -856006867:
case 848090538:
case -47546905:
case -293060240:
case 463142405:
case 1550217370:
case -664597565:
case 599804707:
case 1052472386:
case -2130199671:
case -1227654538:
case 1864522104:
case 215608230:
case -876012764:
case -722894325:
case 1407278493:
case -1579394494:
case -27443911:
case 1179783540:
case 923419301:
case -308826175:
case 603298940:
case -12619854:
case -311112675:
case 870439158:
case -974288740:
case -4138654:
case -1180954122:
case -1918051016:
case 844330594:
case 1934825517:
case 1852024236:
case 2099238988:
case 1952643559:
case -1172900789:
case -2015399333:
case -1574795641:
case -961034881:
case 1135468152:
case 1265272476:
case -634726636:
case 696556762:
case 443347049:
case 403506509:
case -883876414:
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
case -561012053:
case 1240683675:
case 1241904665:
case -494565059:
case 827308208:
case -1857685192:
case 1698417709:
case -2017925037:
case 1057653594:
case 1810506918:
case 451427308:
case 824622151:
case 1253978276:
case -1576080766:
case 1508411869:
case 1428501742:
case -1918967151:
case 1261538664:
case 1180397655:
case 1414674366:
case 261460130:
case -2027658376:
case 1668610896:
case -2032529561:
return 1;
break;
case 1515774909:
case 1173654533:
case -899802304:
case -663944335:
case 1208553146:
case -613221010:
case -671062876:
case 291576838:
case -1276678868:
case 711665950:
case -407201236:
case -754024203:
case -1885444887:
case 1931729587:
case 1064954035:
case -180141073:
case 2131324797:
case 283351220:
case 1108628223:
case -876847842:
case 68030260:
return 2;
break;
}
switch (iParam1){
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
case -1224479447:
case 1220095570:
case 2050320631:
case 592672421:
case -842062976:
case 14658715:
case -604793592:
case -823426392:
case -1401862980:
case -173354274:
case 409533976:
case -1472522337:
case 542574408:
case -1261799063:
case 784631574:
case -2027479156:
case -837690641:
case -1029672338:
case -1503749970:
case -1843409092:
case 1669058563:
case 2102747615:
case 2030771998:
case 1708747007:
case 645293860:
case -818859193:
case 300796227:
case -1999832346:
case 1058055395:
case -321151125:
case 2078731875:
case 1280785534:
case -1878824774:
case 247992227:
case -229237358:
case -1123183389:
case 1814197076:
case 713955548:
case -2026544524:
case -719580138:
case -163417439:
case -550417574:
case 208223429:
case -1433071892:
case 761999406:
case -1101941763:
case 1748245957:
case 1036772696:
case -1384648535:
case -800037808:
case -695852120:
case 77355315:
case 2097889166:
case 1707592130:
case 1628412596:
case 883337077:
case -1274418755:
case -1853979468:
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
case 2063456538:
case -728008329:
case 119239868:
case -456458353:
case 1900048468:
case 333526332:
case -2091351051:
case -373571001:
case -367430800:
case 1823444356:
if(iParam2==0){
return 0;
}
return 1;
break;
case 1775876058:
case -518651910:
return 2;
break;
}
return 0;
}elseif((iParam0==-1134853190 || iParam0==925407197) || iParam0==-1589378882){
return 0;
}
return 1;
}

int func_31(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(func_29(iVar0) !=2147483647){
if(func_10(iVar0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_32(int iParam0){
if((iParam0 >=500 && iParam0 <=599) || iParam0==408){
return 1;
}
return 0;
}


void func_33(int iParam0, bool bParam1){
int iVar0;
int iVar1;
var uVar2;
struct<10> Var3;
int iVar4;
struct<3> Var5;
var uVar6;
if(iParam0==-1){
return;
}
NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEE(func_29(iParam0));
if(Global_4535172[iParam0 /*85*/].f_66.f_10==1){}elseif(Global_4535172[iParam0 /*85*/].f_66.f_10==4){
iVar0=1;
}elseif(Global_4535172[iParam0 /*85*/].f_66.f_10==2){
iVar1=1;
}
Var3=-1;
Var3.f_1=-1;
Var3.f_2=-1;
Var3.f_3=-1;
Var3.f_4=-1;
Var3.f_5=-1;
Var3.f_6=-1;
Var3.f_7=-1;
Var3.f_8=-1;
Var3.f_9=-1;
func_37(&Var3);
switch (Global_4535172[iParam0 /*85*/].f_66.f_4){
case 631654431:
MONEY::NETWORK_SPENT_MOVE_YACHT(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
break;
case -180141073:
if(func_36(Global_4535172[iParam0 /*85*/].f_14)){
MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), iVar1, iVar0, 0);
}
break;
case 68030260:
MONEY::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], &(Global_4535172[iParam0 /*85*/].f_14), iVar1, iVar0);
break;
case -982394051:
MONEY::NETWORK_SPENT_CINEMA(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
break;
case 454359403:
MONEY::NETWORK_SPENT_IN_STRIPCLUB(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, Global_4535172[iParam0 /*85*/].f_2, iVar0);
break;
case -1586170317:
MONEY::NETWORK_EARN_FROM_JOB_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case 650665123:
MONEY::NETWORK_SPENT_TELESCOPE(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
break;
case 1654961868:
MONEY::NETWORK_SPENT_CALL_PLAYER(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), iVar1, iVar0);
break;
case 1182673174:
MONEY::NETWORK_SPENT_CARWASH(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
break;
case 563463121:
MONEY::NETWORK_EARN_FROM_CRATE_DROP(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1940862352:
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), iVar1, iVar0);
break;
case -1389227906:
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), iVar1, iVar0);
break;
case -516219046:
MONEY::NETWORK_BUY_HEALTHCARE(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
break;
case -1398318418:
MONEY::NETWORK_EARN_FROM_BETTING(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case 2043854386:
MONEY::NETWORK_SPENT_CASH_DROP(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
break;
case 277665518:
MONEY::NETWORK_SPENT_ARREST_BAIL(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
break;
case -1077156170:
MONEY::NETWORK_EARN_FROM_DAILY_OBJECTIVES(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), -1);
break;
case -96593501:
MONEY::NETWORK_SPENT_BOUNTY(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
break;
case 742499889:
MONEY::NETWORK_SPENT_WAGER(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 2050093329:
MONEY::NETWORK_SPEND_BOSS(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -1752488069:
MONEY::NETWORK_SPEND_GOON(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 634375935:
MONEY::NETWORK_SPENT_RENAME_ORGANIZATION(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case 2115896461:
MONEY::_NETWORK_SPEND_RENAME_ACID_PRODUCT(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, func_35(&(Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_267)));
break;
case 797947947:
MONEY::_NETWORK_SPEND_RENAME_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, func_35(&(Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_283)));
break;
case -1027218631:
MONEY::NETWORK_EARN_FROM_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case -47546905:
MONEY::NETWORK_EARN_FROM_PREMIUM_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case 291576838:
MONEY::NETWORK_BUY_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 14, 1, iVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0, 0, 0, iVar0);
break;
case 1612072658:
MONEY::NETWORK_SPENT_BUY_PASSIVE_MODE(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, 0);
break;
case -990286235:
MONEY::NETWORK_EARN_FROM_BOUNTY(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), &(Global_4535172[iParam0 /*85*/].f_14.f_13), 1);
break;
case 1349151477:
MONEY::NETWORK_EARN_FROM_GANGATTACK_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -31156877:
case -327918414:
case 550898518:
case 835976347:
MONEY::NETWORK_EARN_FROM_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -1186079845:
MONEY::NETWORK_EARN_FROM_ROB_ARMORED_CARS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1734805203:
MONEY::NETWORK_EARN_FROM_HOLDUPS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -1645229221:
MONEY::NETWORK_PAY_EMPLOYEE_WAGE(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
break;
case -585718395:
MONEY::NETWORK_SPEND_APARTMENT_UTILITIES(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, &Global_4540949);
break;
case -2129781826:
MONEY::NETWORK_SPENT_PA_SERVICE_DANCER(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], iVar1, iVar0);
break;
case 1941570214:
MONEY::NETWORK_SPENT_PA_HELI_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], iVar1, iVar0);
break;
case 1869490922:
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
break;
case -336803850:
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
break;
case -1412692765:
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
break;
case 618167454:
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
break;
case 980623936:
MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
break;
case 1287308202:
case 691372038:
case 1480707108:
case 1512499951:
case 562283735:
case -154732333:
case -1362660491:
case 645708827:
case 767907967:
case -1970151306:
case 718859568:
case -1955564771:
case 892388724:
case -1426920838:
case -664597565:
case -1100963799:
MONEY::NETWORK_REFUND_CASH(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), &(Global_4535172[iParam0 /*85*/].f_14.f_44), iVar1);
break;
case -1922554349:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
break;
case -2043695058:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
break;
case 1780666425:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
break;
case 1643659499:
MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0, 0);
break;
case 1839532116:
MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
break;
case 941287179:
MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_3);
break;
case -352356931:
MONEY::NETWORK_EARN_FROM_AI_TARGET_KILL(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 1948102096:
MONEY::NETWORK_SPENT_REQUEST_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, Global_4535172[iParam0 /*85*/]);
break;
case -1834046564:
if(Global_4535172[iParam0 /*85*/].f_66.f_16==1){
iVar4=1;
}
MONEY::NETWORK_SPENT_TAXI(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, 0, iVar4);
break;
case 393059668:
MONEY::NETWORK_EARN_FROM_BEND_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case -57868256:
MONEY::NETWORK_EARN_FROM_CHALLENGE_WIN(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), Global_4535172[iParam0 /*85*/].f_4);
break;
case -1127021384:
MONEY::NETWORK_EARN_FROM_NOT_BADSPORT(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1564537328:
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4535172[iParam0 /*85*/].f_66.f_1, "RaceToPoint", 0, 0);
break;
case -1359375127:
MONEY::NETWORK_SPENT_PROSTITUTES(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case 283351220:
MONEY::NETWORK_BUY_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, iVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
break;
case -2085313189:
switch (Global_4535172[iParam0 /*85*/].f_66.f_6){
case 1067618600:
MONEY::NETWORK_BUY_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, iVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
break;
}
break;
case 1704445500:
MONEY::NETWORK_SPENT_BETTING(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, &(Global_4535172[iParam0 /*85*/].f_14.f_34), 0, 0);
break;
case 1620609399:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
break;
case 1961641934:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
break;
case 210955503:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
break;
case -59668082:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
break;
case 1736933716:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
break;
case -1468524125:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
break;
case 111573502:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
break;
case 1525644423:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
break;
case 968073639:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
break;
case 1577781788:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
break;
case -934465332:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
break;
case -1194253122:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
break;
case -212607085:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
break;
case -815546555:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
break;
case 1048226110:
MONEY::NETWORK_EARN_BOSS(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 569170531:
MONEY::NETWORK_EARN_GOON(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -856006867:
MONEY::NETWORK_EARN_AGENCY(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
break;
case 208223429:
MONEY::NETWORK_EARN_FROM_CONTRABAND(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
break;
case 848090538:
MONEY::NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Global_4535172[iParam0 /*85*/].f_66.f_1, -1, Global_4535172[iParam0 /*85*/]);
break;
case 665109499:
MONEY::NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
break;
case -1330755006:
MONEY::NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
break;
case 1976384368:
MONEY::NETWORK_SPENT_JUKEBOX(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 0);
break;
case 268924934:
MONEY::NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
break;
case -293060240:
MONEY::NETWORK_EARN_FROM_VEHICLE_EXPORT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
break;
case 437291904:
MONEY::NETWORK_SPENT_VEHICLE_EXPORT_MODS(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12);
break;
case -135813048:
MONEY::NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
break;
case 463142405:
MONEY::NETWORK_EARN_SMUGGLER_AGENCY(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
break;
case 1550217370:
MONEY::NETWORK_EARN_WAGE_PAYMENT_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -101307780:
MONEY::NETWORK_EARN_WAGE_PAYMENT(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
break;
case 599804707:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
break;
case 1347433368:
MONEY::NETWORK_EARN_FROM_CASHING_OUT(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1052472386:
MONEY::NETWORK_EARN_FROM_CRIMINAL_MASTERMIND(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case -2130199671:
MONEY::NETWORK_EARN_HEIST_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case -1227654538:
MONEY::NETWORK_EARN_FIRST_TIME_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
break;
case -930104477:
MONEY::NETWORK_SPENT_EMPLOY_ASSASSINS(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case 1864522104:
MONEY::NETWORK_EARN_TARGET_REFUND(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
break;
case 215608230:
MONEY::NETWORK_EARN_TARGET_REFUND(Global_4535172[iParam0 /*85*/].f_66.f_1, 1);
break;
case -876012764:
MONEY::NETWORK_EARN_GANGOPS_WAGES(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -722894325:
MONEY::NETWORK_EARN_GANGOPS_WAGES_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 1407278493:
MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -1579394494:
case -27443911:
MONEY::NETWORK_EARN_GANGOPS_SETUP(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case 1179783540:
MONEY::NETWORK_EARN_GANGOPS_FINALE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
break;
case 923419301:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
break;
case -308826175:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
break;
case 603298940:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
break;
case -12619854:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 3);
break;
case -311112675:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 4);
break;
case 870439158:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 5);
break;
case -974288740:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 6);
break;
case -4138654:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 7);
break;
case -1180954122:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 8);
break;
case -1918051016:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 9);
break;
case 844330594:
MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 10);
break;
case 1934825517:
MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
break;
case 1852024236:
MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
break;
case 2099238988:
MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
break;
case 1952643559:
break;
case 2039302543:
break;
case -1172900789:
MONEY::NETWORK_EARN_DOOMSDAY_FINALE_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
break;
case -1733398043:
MONEY::NETWORK_SPEND_GANGOPS_SKIP_MISSION(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
break;
case -1892760262:
MONEY::NETWORK_SPEND_GANGOPS_START_STRAND(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
break;
case -2015399333:
MONEY::NETWORK_EARN_BOUNTY_HUNTER_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 402505853:
if(func_34(PLAYER::INT_TO_PLAYERINDEX(Global_4535172[iParam0 /*85*/]), 0, 0)){
MONEY::NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(PLAYER::INT_TO_PLAYERINDEX(Global_4535172[iParam0 /*85*/]), Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
}
break;
case 1678112166:
MONEY::NETWORK_SPENT_REHIRE_DJ(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
break;
case -1143510182:
MONEY::NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
break;
case -1574795641:
MONEY::NETWORK_EARN_FROM_BUSINESS_BATTLE(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -961034881:
MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 1135468152:
MONEY::NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1265272476:
MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
break;
case -634726636:
MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 696556762:
MONEY::NETWORK_EARN_FMBB_WAGE_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 837955913:
MONEY::NETWORK_SPENT_ARENA_JOIN_SPECTATOR(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, 0, 1);
break;
case 403506509:
MONEY::NETWORK_EARN_BB_EVENT_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -883876414:
MONEY::NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
MONEY::NETWORK_EARN_ARENA_CAREER_PROGRESSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case -1532467144:
MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
break;
case 1815541181:
MONEY::NETWORK_SPEND_MAKE_IT_RAIN(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case -561012053:
MONEY::NETWORK_EARN_SPIN_THE_WHEEL_CASH(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -1342064661:
MONEY::NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
break;
case 1240683675:
MONEY::NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1241904665:
MONEY::NETWORK_EARN_ARENA_WAR(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_1);
break;
case -494565059:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "RC_TIME_TRIAL", &uVar2);
break;
case 827308208:
MONEY::NETWORK_EARN_DAILY_OBJECTIVE_EVENT(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -1857685192:
MONEY::NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1698417709:
MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -2017925037:
MONEY::NETWORK_EARN_CASINO_STORY_MISSION_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1057653594:
case 1810506918:
case 451427308:
case 824622151:
case 1253978276:
case -1576080766:
case 1508411869:
case 1428501742:
case -1918967151:
case 1261538664:
case 1180397655:
case 1414674366:
case 261460130:
case -2027658376:
MONEY::NETWORK_EARN_CASINO_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -1693570755:
MONEY::NETWORK_SPEND_CASINO_GENERIC(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), Global_4535172[iParam0 /*85*/]);
break;
case 1868043300:
MONEY::NETWORK_SPEND_PLAY_ARCADE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -697248883:
MONEY::NETWORK_SPEND_ARCADE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -1295545795:
MONEY::NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
break;
case 914079366:
MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
break;
case 395122350:
MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
break;
case -331981076:
MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case 1671535231:
MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1982688246:
break;
}
switch (Global_4535172[iParam0 /*85*/].f_66.f_4){
case 1668610896:
MONEY::NETWORK_EARN_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case -2032529561:
MONEY::NETWORK_EARN_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
break;
case -1224479447:
MONEY::NETWORK_EARN_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case 1220095570:
case 2050320631:
case 592672421:
MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1775876058:
MONEY::NETWORK_EARN_COLLECTABLE_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -842062976:
MONEY::NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -1896606724:
Var3.f_0=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
break;
case -1291433573:
Var3.f_1=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
break;
case 538631715:
Var3.f_2=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
break;
case 133782822:
Var3.f_3=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
break;
case 2081885153:
Var3.f_4=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
break;
case -1314365345:
Var3.f_5=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
break;
case 1322977732:
Var3.f_6=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
break;
case 396623013:
Var3.f_7=Global_4535172[iParam0 /*85*/].f_66.f_1;
MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
break;
case 1981664462:
MONEY::NETWORK_SPEND_BEACH_PARTY(Global_4535172[iParam0 /*85*/]);
break;
case -518651910:
case 14658715:
MONEY::NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -604793592:
case -823426392:
case -1401862980:
case -173354274:
case 409533976:
case -1472522337:
case 542574408:
case -1261799063:
case 784631574:
case -2027479156:
MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/], 0, 0);
break;
case -837690641:
MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -1029672338:
MONEY::NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -1921250821:
MONEY::NETWORK_SPEND_SUBMARINE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
break;
case -1370731547:
MONEY::NETWORK_SPEND_SUBMARINE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
break;
case 1683798242:
MONEY::NETWORK_SPEND_SUBMARINE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case -910968288:
MONEY::NETWORK_SPEND_CASINO_CLUB(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
break;
case -1503749970:
MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4535172[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -1843409092:
MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, MISC::GET_HASH_KEY(&(Global_4535172[iParam0 /*85*/].f_14.f_26)), -1, -1);
break;
case 1669058563:
MONEY::NETWORK_EARN_CARCLUB_MEMBERSHIP(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 2102747615:
MONEY::NETWORK_EARN_DAILY_VEHICLE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case 2030771998:
MONEY::NETWORK_EARN_DAILY_VEHICLE_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
break;
case 1708747007:
case 645293860:
case -818859193:
case 300796227:
case -1999832346:
case 1058055395:
case -321151125:
case 2078731875:
MONEY::NETWORK_EARN_TUNER_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_44));
break;
case 1051883823:
MONEY::NETWORK_SPEND_INTERACTION_MENU_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case 1280785534:
MONEY::NETWORK_EARN_AUTOSHOP_INCOME(Global_4535172[iParam0 /*85*/].f_66.f_1, 277);
break;
case -168319378:
MONEY::NETWORK_SPEND_BUSINESS_PROPERTY_FEES(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4540931);
break;
case -1878824774:
MONEY::NETWORK_EARN_AGENCY_CONTRACT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case 247992227:
MONEY::NETWORK_EARN_AGENCY_PHONE(Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -229237358:
MONEY::NETWORK_EARN_FIXER_PREP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -1123183389:
MONEY::NETWORK_EARN_FIXER_FINALE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case 1814197076:
MONEY::NETWORK_EARN_AWARD_CONTRACT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case 713955548:
MONEY::NETWORK_EARN_AWARD_PHONE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -2026544524:
MONEY::NETWORK_EARN_AWARD_FIXER_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -719580138:
MONEY::NETWORK_EARN_AWARD_SHORT_TRIP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -163417439:
MONEY::NETWORK_EARN_FIXER_RIVAL_DELIVERY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -1658225921:
MONEY::NETWORK_SPEND_SUPPLY(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case -551835600:
MONEY::NETWORK_SPEND_SOURCE_BIKE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case -1230687625:
MONEY::NETWORK_SPEND_HIDDEN(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case -550417574:
MONEY::NETWORK_EARN_FIXER_AGENCY_SHORT_TRIP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case 1637817605:
MONEY::NETWORK_SPEND_AGENCY(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case 830018386:
MONEY::NETWORK_SPEND_COMP_SUV(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case -1433071892:
MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, 1989714117);
break;
case -2013760296:
MONEY::NETWORK_SPEND_GUNRUNNING(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case 761999406:
MONEY::NETWORK_EARN_SIGHTSEEING_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -1033889004:
MONEY::NETWORK_SPEND_VEHICLE_REQUESTED(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case -754024203:
MONEY::NETWORK_SPENT_HELI_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case 1208553146:
MONEY::NETWORK_SPENT_BOAT_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
break;
case -1101941763:
case 1748245957:
case 1036772696:
case -1384648535:
case -800037808:
case -695852120:
case 77355315:
case 2097889166:
case 1707592130:
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
case 1900048468:
case 333526332:
case 1823444356:
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &uVar2);
break;
case 1628412596:
MONEY::NETWORK_YOHAN_SOURCE_GOODS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case -2081984382:
MONEY::NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
break;
case 1089562091:
MONEY::NETWORK_SPEND_VEHICLE_REQUESTED(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case 883337077:
Var5.f_0=Global_4535172[iParam0 /*85*/].f_13;
Var5.f_1=Global_4535172[iParam0 /*85*/];
Var5.f_2=Global_4535172[iParam0 /*85*/].f_66.f_15;
MONEY::_NETWORK_EARN_TAXI_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &Var5);
break;
case -1274418755:
MONEY::_NETWORK_EARN_DAILY_STASH_HOUSE_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -1853979468:
MONEY::_NETWORK_EARN_DAILY_STASH_HOUSE_COMPLETED(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 1633116913:
MONEY::_NETWORK_EARN_JUGGALO_STORY_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 668586600:
MONEY::_NETWORK_EARN_JUGGALO_STORY_MISSION_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 15168061:
MONEY::_NETWORK_EARN_FOOLIGAN_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 590289134:
MONEY::_NETWORK_EARN_FOOLIGAN_JOB_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 99792878:
MONEY::_NETWORK_EARN_AWARD_JUGGALO_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 1866258778:
MONEY::_NETWORK_EARN_AWARD_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -178394060:
MONEY::_NETWORK_EARN_AWARD_DAILY_STASH(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 409592287:
MONEY::_NETWORK_EARN_AWARD_DEAD_DROP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 593836803:
MONEY::_NETWORK_EARN_AWARD_RANDOM_EVENT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 1973036520:
MONEY::_NETWORK_EARN_AWARD_TAXI(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 2063456538:
MONEY::_NETWORK_EARN_SETUP_PARTICIPATION_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -728008329:
MONEY::_NETWORK_EARN_SOURCE_PARTICIPATION_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case 119239868:
MONEY::_NETWORK_EARN_SELL_PARTICIPATION_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -456458353:
unk_0xDEA273D5F8A9661A(Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16);
break;
case -2091351051:
unk_0xDCEF983C24191997(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
break;
case -373571001:
unk_0x55F006B9D4A46C1D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
break;
case -367430800:
unk_0x55F006B9D4A46C1D(Global_4535172[iParam0 /*85*/].f_66.f_1, -2);
break;
}
if(func_13()){
if(bParam1){
NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4535172[iParam0 /*85*/].f_66, &uVar6);
}}
func_7(iParam0);
}

int func_34(var uParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(uParam0)){
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


var func__35(var uParam0){
return uParam0;
}


bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


void func_37(var uParam0){
*uParam0=-1;
uParam0->f_1=-1;
uParam0->f_2=-1;
uParam0->f_3=-1;
uParam0->f_4=-1;
uParam0->f_5=-1;
uParam0->f_6=-1;
uParam0->f_7=-1;
uParam0->f_8=-1;
uParam0->f_9=-1;
}

int func_38(int iParam0, var uParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66==iParam0){
*uParam1={
Global_4535172[iVar0 /*85*/] 
};
return iVar0;
}
iVar0++;
}
return -1;
}


void func_39(int iParam0){
int iVar0;
var uVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
if(Global_4540738[iParam0 /*12*/].f_1==Global_4540738[iParam0 /*12*/].f_6){
if(Global_4540738[iParam0 /*12*/].f_1 !=1445302971 && Global_4540738[iParam0 /*12*/].f_1 !=-1316591359){
return;
}}
iVar0=0;
sVar2="Wardrobe";
iVar0=MISC::GET_HASH_KEY(sVar2);
iVar0=(iVar0 || func_41());
iVar0=(iVar0 + Global_4538687);
func_40(&uVar1);
iVar0=(iVar0 || uVar1);
MISC::CLEAR_BIT(&iVar0, 28);
MISC::CLEAR_BIT(&iVar0, 29);
MISC::CLEAR_BIT(&iVar0, 26);
iVar3=(Global_4540738[iParam0 /*12*/].f_9 && iVar0);
iVar4=(Global_4540738[iParam0 /*12*/].f_8 && iVar0);
iVar5=Global_4540738[iParam0 /*12*/].f_7;
if(iVar5==0){
iVar5=-2085313189;
}
if(((Global_4540738[iParam0 /*12*/] !=Global_4540738[iParam0 /*12*/].f_5 || Global_4540738[iParam0 /*12*/].f_1 !=Global_4540738[iParam0 /*12*/].f_6) || Global_4540738[iParam0 /*12*/].f_2 !=iVar5) || Global_4540738[iParam0 /*12*/].f_3 !=(iVar4 + iVar3)){
Global_110511=1;
}}

int func_40(var uParam0){
*uParam0=shift_left(1, 2);
return 5410420;
}

int func_41(){
return shift_left(1, 25);
}

int func_42(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_49()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_48()){
return 1;
}
if(func_47(159)){
if(!func_46()){
return 1;
}}
if(func_47(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_43() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_43())==0){
return 1;
}}
return 0;
}

int func_43(){
switch (func_45()){
case 0:
return func_44();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_44(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_45(){
return Global_32283;
}


bool func_46(){
return Global_2683883.f_698;
}

int func_47(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_48(){
return Global_2694576;
}


bool func_49(){
return Global_2683883.f_693;
}


void func_50(){
wait(0);
}


void func_51(){
func_52();
}


void func_52(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_53(struct<34> Param0){
if(Global_262145.f_24258){
func_51();
}
Local_20.f_66={
Param0 
};
Local_20={
Param0.f_19 
};
Local_20.f_14={
Global_4535172[Param0.f_33 /*85*/].f_14 
};
iLocal_19=Param0.f_33;
if(Param0.f_33 < 0){
func_51();
}
if(!func_54(Param0, Param0.f_33)){
func_7(Param0.f_33);
func_51();
}
if(Local_20.f_66.f_2 !=0){
Local_20.f_66.f_2=1;
}}

int func_54(struct<18> Param0, var uParam1, int iParam2){
if(Global_4535172[iParam2 /*85*/].f_66.f_1 !=Param0.f_1){
return 0;
}
if(Global_4535172[iParam2 /*85*/].f_66.f_3 !=Param0.f_3){
return 0;
}
if(Global_4535172[iParam2 /*85*/].f_66.f_4 !=Param0.f_4){
return 0;
}
if(Global_4535172[iParam2 /*85*/].f_66.f_5 !=Param0.f_5){
return 0;
}
if(Global_4535172[iParam2 /*85*/].f_66.f_6 !=Param0.f_6){
return 0;
}
if(Global_4535172[iParam2 /*85*/].f_66.f_7 !=Param0.f_7){
return 0;
}
if(Global_4535172[iParam2 /*85*/].f_66.f_14 !=Param0.f_14){
return 0;
}
if(Global_4535172[iParam2 /*85*/].f_66.f_17 !=Param0.f_17){
return 0;
}
return 1;
}