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
int iLocal_46=0;
int iLocal_47=0;
int iLocal_48=0;
int iLocal_49=0;
int iLocal_50=0;
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
iLocal_46=202;
iLocal_47=201;
iLocal_48=24;
iLocal_49=202;
iLocal_50=25;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
func_219();
func_84();
func_77();
func_62();
func_56();
if(Global_1){
if(!Global_78559 || Global_2){
func_43();
func_39();
func_36();
func_35();
}}
Global_2=0;
if(MISC::GET_INDEX_OF_CURRENT_LEVEL() !=5){
func_34();
}
func_32();
func_31();
func_7();
func_6();
func_2();
func_1();
PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_1(){
}


void func_2(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_5(86)){
func_4(4, 0, 0);
iVar0=0;
while (iVar0 < 5){
Global_113648.f_1.f_12[1 /*6*/][iVar0]=0;
Global_113648.f_1.f_12[2 /*6*/][iVar0]=0;
iVar0++;
}
func_4(5, 0, 0);
func_3(7, 0);
Global_113648.f_1.f_120[0]=0;
}
if(!func_5(71)){
func_4(4, 1, 0);
iVar1=0;
while (iVar1 < 5){
Global_113648.f_1.f_12[3 /*6*/][iVar1]=0;
Global_113648.f_1.f_12[4 /*6*/][iVar1]=0;
iVar1++;
}
func_4(5, 1, 0);
func_3(8, 0);
Global_113648.f_1.f_120[1]=0;
}
if(!func_5(91)){
func_4(4, 2, 0);
iVar2=0;
while (iVar2 < 5){
Global_113648.f_1.f_12[5 /*6*/][iVar2]=0;
iVar2++;
}
Global_113648.f_1.f_120[2]=0;
}
if(!func_5(67)){
func_4(4, 3, 0);
iVar3=0;
while (iVar3 < 5){
Global_113648.f_1.f_12[6 /*6*/][iVar3]=0;
Global_113648.f_1.f_12[7 /*6*/][iVar3]=0;
iVar3++;
}
func_4(5, 3, 0);
func_3(10, 0);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 2);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 3);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 4);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 5);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 6);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 7);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 8);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 9);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 10);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[3]), 11);
}
if(!func_5(77)){
func_4(4, 4, 0);
iVar4=0;
while (iVar4 < 5){
Global_113648.f_1.f_12[9 /*6*/][iVar4]=0;
Global_113648.f_1.f_12[8 /*6*/][iVar4]=0;
iVar4++;
}
func_4(5, 4, 0);
func_3(11, 0);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 2);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 3);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 4);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 5);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 6);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 7);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 8);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 9);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 10);
MISC::CLEAR_BIT(&(Global_113648.f_1.f_120[4]), 11);
}}


void func_3(int iParam0, int iParam1){
if(iParam0==13 || iParam0==-1){
return;
}
if(Global_113648.f_9087.f_99.f_205[iParam0]==iParam1){
return;
}
Global_113648.f_9087.f_99.f_205[iParam0]=iParam1;
}


void func_4(int iParam0, bool bParam1, bool bParam2){
int iVar0;
if(iParam0==11 || iParam0==-1){
return;
}
if(bParam1 < 0 || bParam1 >=32){
return;
}
iVar0=MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], bParam1);
if(iVar0==bParam2){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_9087.f_99.f_219[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_9087.f_99.f_219[iParam0]), bParam1);
}}

int func_5(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


void func_6(){
if(!HUD::HAS_ADDITIONAL_TEXT_LOADED(8)){
HUD::REQUEST_ADDITIONAL_TEXT("MISHSTA", 8);
}}


void func_7(){
func_30();
func_29();
func_24();
func_23();
func_22();
func_21();
func_20();
func_19();
func_15();
func_14();
func_12();
func_11(19, 65);
func_11(1, 67);
func_11(2, 68);
func_11(5, 76);
func_11(9, 94);
func_11(13, 96);
func_8();
func_11(13, 98);
func_11(13, 99);
func_11(13, 100);
func_11(13, 101);
func_11(13, 102);
func_11(13, 103);
func_11(18, 110);
func_11(18, 111);
Global_38596=1;
}


void func_8(){
if(func_5(21) && !func_5(22)){
func_10(97, 0, 0);
}else{
func_10(97, func_9(13), 0);
}}


bool func_9(int iParam0){
return MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[0], iParam0);
}


void func_10(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(!bParam2){
iVar1=MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 15);
if(iVar1==bParam1){
return;
}}
if(bParam1 !=MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 18);
if(Global_32540==1){
Global_32541=1;
}
Global_32540=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), false);
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), false);
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 15);
}
if(!MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32543[iVar0 /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Global_32543[iVar0 /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}}}


void func_11(int iParam0, int iParam1){
func_10(iParam1, func_9(iParam0), 0);
}


void func_12(){
bool bVar0;
func_10(107, func_9(17), 0);
func_10(108, Global_113648.f_20013.f_8 >=1, 0);
func_13(107, Global_113648.f_20013.f_8 > 0);
func_13(108, Global_113648.f_20013.f_8 > 1);
if(Global_113648.f_9087.f_99.f_58[130] && !Global_113648.f_9087.f_99.f_58[131]){
func_10(109, 0, 0);
}else{
func_10(109, Global_113648.f_20013.f_8 >=2, 0);
bVar0=(Global_113648.f_20013[2] <=3 && Global_113648.f_20013[2] !=0);
func_13(109, bVar0);
}}


void func_13(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 20)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 20);
}else{
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 20);
}
if(Global_32540==1){
Global_32541=1;
}
Global_32540=1;
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 20);
}


void func_14(){
func_10(105, func_9(15), 0);
func_10(106, func_9(16), 0);
}


void func_15(){
if((func_18() || func_17()) || func_16()){
func_11(10, 95);
}else{
func_10(95, 0, 0);
}}

int func_16(){
return 0;
}

int func_17(){
return 1;
}

int func_18(){
return 1;
}


void func_19(){
func_10(86, MISC::IS_BIT_SET(Global_113648.f_24981.f_1, 0), 0);
func_10(87, MISC::IS_BIT_SET(Global_113648.f_24981.f_1, 1), 0);
func_10(88, MISC::IS_BIT_SET(Global_113648.f_24981.f_1, 2), 0);
func_10(89, MISC::IS_BIT_SET(Global_113648.f_24981.f_1, 3), 0);
func_10(90, MISC::IS_BIT_SET(Global_113648.f_24981.f_1, 4), 0);
if(MISC::IS_BIT_SET(Global_113648.f_24981.f_2, 0)){
func_13(86, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_24981.f_2, 1)){
func_13(87, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_24981.f_2, 2)){
func_13(88, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_24981.f_2, 3)){
func_13(89, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_24981.f_2, 4)){
func_13(90, 1);
}}


void func_20(){
func_10(82, func_9(7), 0);
func_10(83, func_9(7), 0);
func_10(84, func_9(7), 0);
func_10(85, func_9(7), 0);
if(MISC::IS_BIT_SET(Global_113648.f_24978.f_1, 0)){
func_13(82, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_24978.f_1, 1)){
func_13(83, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_24978.f_1, 2)){
func_13(84, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_24978.f_1, 3)){
func_13(85, 1);
}}


void func_21(){
func_10(70, func_9(4), 0);
func_13(70, (Global_113648.f_19018.f_2[0] <=3 && Global_113648.f_19018.f_2[0] > 0));
func_10(71, Global_113648.f_19018.f_1 >=1, 0);
func_13(71, (Global_113648.f_19018.f_2[1] <=3 && Global_113648.f_19018.f_2[1] > 0));
func_10(72, Global_113648.f_19018.f_1 >=2, 0);
func_13(72, (Global_113648.f_19018.f_2[2] <=3 && Global_113648.f_19018.f_2[2] > 0));
func_10(73, Global_113648.f_19018.f_1 >=3, 0);
func_13(73, (Global_113648.f_19018.f_2[3] <=3 && Global_113648.f_19018.f_2[3] > 0));
func_10(74, Global_113648.f_19018.f_1 >=4, 0);
func_13(74, (Global_113648.f_19018.f_2[4] <=3 && Global_113648.f_19018.f_2[4] > 0));
func_10(75, Global_113648.f_19018.f_1 >=5, 0);
func_13(75, (Global_113648.f_19018.f_2[5] <=3 && Global_113648.f_19018.f_2[5] > 0));
}


void func_22(){
func_10(69, func_9(3), 0);
}


void func_23(){
int iVar0;
func_10(125, func_9(0), 0);
func_10(126, func_9(0), 0);
func_10(127, func_9(0), 0);
func_10(128, func_9(0), 0);
func_10(129, (func_9(0) && !Global_112735[19 /*10*/].f_1), 0);
func_10(130, func_9(0), 0);
func_10(131, func_9(0), 0);
func_10(132, (func_9(0) && (!func_5(16) || func_5(65))), 0);
func_10(133, func_9(0), 0);
func_10(134, func_9(0), 0);
func_10(135, func_9(0), 0);
func_10(136, func_9(0), 0);
func_10(137, func_9(0), 0);
iVar0=125;
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (125 - iVar0))){
func_13(125, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (126 - iVar0))){
func_13(126, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (127 - iVar0))){
func_13(127, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (128 - iVar0))){
func_13(128, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (129 - iVar0))){
func_13(129, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (130 - iVar0))){
func_13(130, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (131 - iVar0))){
func_13(131, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (132 - iVar0))){
func_13(132, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (133 - iVar0))){
func_13(133, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (134 - iVar0))){
func_13(134, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (135 - iVar0))){
func_13(135, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (136 - iVar0))){
func_13(136, 1);
}
if(MISC::IS_BIT_SET(Global_113648.f_18969.f_1, (137 - iVar0))){
func_13(137, 1);
}}


void func_24(){
if(func_5(0)==1){
func_10(160, 1, 0);
func_10(161, 1, 0);
func_10(156, 1, 0);
func_10(157, 1, 0);
func_10(158, 1, 0);
func_25(158);
func_10(159, 1, 0);
func_25(159);
}}


void func_25(int iParam0){
func_28(iParam0, 0, 0);
func_27(iParam0, 1);
func_26(iParam0, 1);
}


void func_26(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 4)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 4);
}else{
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 4);
}
if(Global_32540==1){
Global_32541=1;
}
Global_32540=1;
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 18);
}


void func_27(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 5)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 5);
}else{
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 5);
}
if(Global_32540==1){
Global_32541=1;
}
Global_32540=1;
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 18);
}


void func_28(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 6)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 6);
}else{
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 6);
}
if(bParam2){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 11);
}else{
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 11);
}
if(Global_32540==1){
Global_32541=1;
}
Global_32540=1;
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 18);
}


void func_29(){
if(func_5(0)==1){
func_10(112, 1, 0);
func_10(113, 1, 0);
func_10(114, 1, 0);
}}


void func_30(){
if(Global_113648.f_9087.f_99.f_58[63]){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop"))==0){
if(Global_113648.f_9087.f_99.f_58[126]){
func_10(139, 1, 0);
}else{
func_10(138, 1, 0);
}}}}


void func_31(){
int iVar0;
bool bVar1;
int iVar2;
bool bVar3;
if(34 > 60){}
iVar2=0;
while (iVar2 < 34){
if(iVar2 <=31){
iVar0=9;
bVar1=iVar2;
}else{
iVar0=10;
bVar1=(iVar2 - 32);
}
if(MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iVar0], bVar1)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_94860[iVar2 /*18*/]))){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_94860[iVar2 /*18*/].f_17) > 0){
}else{
SCRIPT::REQUEST_SCRIPT(&(Global_94860[iVar2 /*18*/]));
}}else{
MISC::CLEAR_BIT(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
}}
iVar2++;
}
bVar3=false;
while (!bVar3){
bVar3=true;
iVar2=0;
while (iVar2 < 34){
if(iVar2 <=31){
iVar0=9;
bVar1=iVar2;
}else{
iVar0=10;
bVar1=(iVar2 - 32);
}
if(MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iVar0], bVar1)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_94860[iVar2 /*18*/].f_17)==0){
if(!SCRIPT::HAS_SCRIPT_LOADED(&(Global_94860[iVar2 /*18*/]))){
bVar3=false;
}else{
start_new_script(&(Global_94860[iVar2 /*18*/]), Global_94860[iVar2 /*18*/].f_16);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_94860[iVar2 /*18*/]));
}}}
iVar2++;
}
wait(0);
}}


void func_32(){
func_33("heist_ctrl_agency", joaat("heist_ctrl_agency"), 2050, 0);
func_33("heist_ctrl_docks", joaat("heist_ctrl_docks"), 2050, 1);
func_33("heist_ctrl_finale", joaat("heist_ctrl_finale"), 2050, 2);
func_33("heist_ctrl_jewel", joaat("heist_ctrl_jewel"), 2050, 3);
func_33("heist_ctrl_rural", joaat("heist_ctrl_rural"), 2050, 5);
func_33("epsCars", joaat("epscars"), 1424, 6);
func_33("epsDesert", joaat("epsdesert"), 1424, 7);
func_33("epsRobes", joaat("epsrobes"), 1424, 8);
func_33("epsilonTract", joaat("epsilontract"), 1424, 9);
func_33("ambient_MrsPhilips", joaat("ambient_mrsphilips"), 1424, 10);
func_33("forSaleSigns", joaat("forsalesigns"), 1424, 11);
func_33("letterScraps", joaat("letterscraps"), 1424, 12);
func_33("ambient_Sonar", joaat("ambient_sonar"), 1424, 13);
func_33("spaceshipParts", joaat("spaceshipparts"), 1424, 14);
func_33("controller_towing", joaat("controller_towing"), 1424, 15);
func_33("controller_Taxi", joaat("controller_taxi"), 1424, 16);
func_33("controller_Trafficking", joaat("controller_trafficking"), 1424, 17);
func_33("exile_city_denial", joaat("exile_city_denial"), 1424, 18);
func_33("buildingSiteAmbience", joaat("buildingsiteambience"), 128, 19);
func_33("finale_choice", joaat("finale_choice"), 512, 20);
func_33("pickupVehicles", joaat("pickupvehicles"), 128, 21);
func_33("BailBond_Launcher", joaat("bailbond_launcher"), 1424, 22);
func_33("rampage_controller", joaat("rampage_controller"), 1424, 23);
func_33("SH_Intro_F_Hills", joaat("sh_intro_f_hills"), 1424, 24);
func_33("SH_Intro_M_Home", joaat("sh_intro_m_home"), 1424, 25);
func_33("FBI4_Prep3Amb", joaat("fbi4_prep3amb"), 2050, 26);
func_33("finale_heist_prepEamb", joaat("finale_heist_prepeamb"), 2050, 31);
func_33("agency_prep2Amb", joaat("agency_prep2amb"), 2050, 32);
func_33("ambient_Diving", joaat("ambient_diving"), 1424, 27);
func_33("ambient_Tonya", joaat("ambient_tonya"), 1424, 28);
func_33("AF_Intro_T_Sandy", joaat("af_intro_t_sandy"), 1424, 29);
func_33("ambient_Solomon", joaat("ambient_solomon"), 1424, 30);
}


void func_33(char* sParam0, int iParam1, int iParam2, int iParam3){
StringCopy(&(Global_94860[iParam3 /*18*/]), sParam0, 64);
Global_94860[iParam3 /*18*/].f_17=iParam1;
Global_94860[iParam3 /*18*/].f_16=iParam2;
}


void func_34(){
SCRIPT::REQUEST_SCRIPT("blip_controller");
SCRIPT::REQUEST_SCRIPT("bootycallhandler");
SCRIPT::REQUEST_SCRIPT("candidate_controller");
SCRIPT::REQUEST_SCRIPT("cheat_controller");
SCRIPT::REQUEST_SCRIPT("CompletionPercentage_controller");
SCRIPT::REQUEST_SCRIPT("controller_AmbientArea");
SCRIPT::REQUEST_SCRIPT("email_controller");
SCRIPT::REQUEST_SCRIPT("emergencycalllauncher");
SCRIPT::REQUEST_SCRIPT("event_controller");
SCRIPT::REQUEST_SCRIPT("taxiLauncher");
SCRIPT::REQUEST_SCRIPT("restrictedAreas");
SCRIPT::REQUEST_SCRIPT("flow_controller");
SCRIPT::REQUEST_SCRIPT("pickup_controller");
SCRIPT::REQUEST_SCRIPT("player_controller");
SCRIPT::REQUEST_SCRIPT("randomchar_controller");
SCRIPT::REQUEST_SCRIPT("vehicle_gen_controller");
SCRIPT::REQUEST_SCRIPT("mission_stat_alerter");
SCRIPT::REQUEST_SCRIPT("MPStatsInit");
SCRIPT::REQUEST_SCRIPT("stock_controller");
while ((((((((((((((((((!SCRIPT::HAS_SCRIPT_LOADED("blip_controller") || !SCRIPT::HAS_SCRIPT_LOADED("bootycallhandler")) || !SCRIPT::HAS_SCRIPT_LOADED("candidate_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("cheat_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("CompletionPercentage_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("controller_AmbientArea")) || !SCRIPT::HAS_SCRIPT_LOADED("email_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("emergencycalllauncher")) || !SCRIPT::HAS_SCRIPT_LOADED("event_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("taxiLauncher")) || !SCRIPT::HAS_SCRIPT_LOADED("restrictedAreas")) || !SCRIPT::HAS_SCRIPT_LOADED("flow_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("pickup_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("player_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("randomchar_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("vehicle_gen_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("mission_stat_alerter")) || !SCRIPT::HAS_SCRIPT_LOADED("MPStatsInit")) || !SCRIPT::HAS_SCRIPT_LOADED("stock_controller")){
wait(0);
SCRIPT::REQUEST_SCRIPT("blip_controller");
SCRIPT::REQUEST_SCRIPT("bootycallhandler");
SCRIPT::REQUEST_SCRIPT("candidate_controller");
SCRIPT::REQUEST_SCRIPT("cheat_controller");
SCRIPT::REQUEST_SCRIPT("CompletionPercentage_controller");
SCRIPT::REQUEST_SCRIPT("controller_AmbientArea");
SCRIPT::REQUEST_SCRIPT("email_controller");
SCRIPT::REQUEST_SCRIPT("emergencycalllauncher");
SCRIPT::REQUEST_SCRIPT("event_controller");
SCRIPT::REQUEST_SCRIPT("taxiLauncher");
SCRIPT::REQUEST_SCRIPT("restrictedAreas");
SCRIPT::REQUEST_SCRIPT("flow_controller");
SCRIPT::REQUEST_SCRIPT("pickup_controller");
SCRIPT::REQUEST_SCRIPT("player_controller");
SCRIPT::REQUEST_SCRIPT("randomchar_controller");
SCRIPT::REQUEST_SCRIPT("vehicle_gen_controller");
SCRIPT::REQUEST_SCRIPT("mission_stat_alerter");
SCRIPT::REQUEST_SCRIPT("MPStatsInit");
SCRIPT::REQUEST_SCRIPT("stock_controller");
}
start_new_script("blip_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("blip_controller");
start_new_script("bootycallhandler", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("bootycallhandler");
start_new_script("candidate_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("candidate_controller");
start_new_script("cheat_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cheat_controller");
start_new_script("CompletionPercentage_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("CompletionPercentage_controller");
start_new_script("controller_AmbientArea", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("controller_AmbientArea");
start_new_script("email_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("email_controller");
start_new_script("emergencycalllauncher", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("emergencycalllauncher");
start_new_script("event_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("event_controller");
start_new_script("taxiLauncher", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiLauncher");
start_new_script("restrictedAreas", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("restrictedAreas");
start_new_script("flow_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("flow_controller");
start_new_script("player_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_controller");
start_new_script("pickup_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("pickup_controller");
start_new_script("randomchar_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("randomchar_controller");
start_new_script("vehicle_gen_controller", 1828);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("vehicle_gen_controller");
start_new_script("mission_stat_alerter", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_alerter");
start_new_script("MPStatsInit", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("MPStatsInit");
start_new_script("stock_controller", 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stock_controller");
}


void func_35(){
Global_113648.f_7690.f_924=MISC::GET_GAME_TIMER();
}


void func_36(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 9){
if(func_38(&(Global_113648.f_18105.f_175[iVar0 /*19*/].f_5))){
func_37(&(Global_113648.f_18105.f_175[iVar0 /*19*/].f_5));
}
iVar0++;
}
iVar1=0;
while (iVar1 < 6){
if(func_38(&(Global_113648.f_18105.f_362[iVar1 /*3*/]))){
func_37(&(Global_113648.f_18105.f_362[iVar1 /*3*/]));
}
iVar1++;
}}


void func_37(var uParam0){
uParam0->f_1=(uParam0->f_1 - (to_float(Global_113648.f_7690.f_924) / 1000f));
uParam0->f_1=(uParam0->f_1 + (to_float(MISC::GET_GAME_TIMER()) / 1000f));
}


bool func_38(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}


void func_39(){
int iVar0;
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_136){
Global_113648.f_7690[iVar0 /*15*/].f_4=(Global_113648.f_7690[iVar0 /*15*/].f_4 - Global_113648.f_7690.f_924);
Global_113648.f_7690[iVar0 /*15*/].f_4=(Global_113648.f_7690[iVar0 /*15*/].f_4 + MISC::GET_GAME_TIMER());
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_650){
Global_113648.f_7690.f_199[iVar0 /*15*/].f_4=(Global_113648.f_7690.f_199[iVar0 /*15*/].f_4 - Global_113648.f_7690.f_924);
Global_113648.f_7690.f_199[iVar0 /*15*/].f_4=(Global_113648.f_7690.f_199[iVar0 /*15*/].f_4 + MISC::GET_GAME_TIMER());
func_42(&(Global_113648.f_7690.f_199[iVar0 /*15*/]));
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_198){
Global_113648.f_7690.f_137[iVar0 /*15*/].f_4=(Global_113648.f_7690.f_137[iVar0 /*15*/].f_4 - Global_113648.f_7690.f_924);
Global_113648.f_7690.f_137[iVar0 /*15*/].f_4=(Global_113648.f_7690.f_137[iVar0 /*15*/].f_4 + MISC::GET_GAME_TIMER());
func_42(&(Global_113648.f_7690.f_137[iVar0 /*15*/]));
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_764){
Global_113648.f_7690.f_651[iVar0 /*14*/].f_4=(Global_113648.f_7690.f_651[iVar0 /*14*/].f_4 - Global_113648.f_7690.f_924);
Global_113648.f_7690.f_651[iVar0 /*14*/].f_4=(Global_113648.f_7690.f_651[iVar0 /*14*/].f_4 + MISC::GET_GAME_TIMER());
func_41(&(Global_113648.f_7690.f_651[iVar0 /*14*/]));
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_866){
Global_113648.f_7690.f_765[iVar0 /*10*/].f_4=(Global_113648.f_7690.f_765[iVar0 /*10*/].f_4 - Global_113648.f_7690.f_924);
Global_113648.f_7690.f_765[iVar0 /*10*/].f_4=(Global_113648.f_7690.f_765[iVar0 /*10*/].f_4 + MISC::GET_GAME_TIMER());
func_40(&(Global_113648.f_7690.f_765[iVar0 /*10*/]));
iVar0++;
}}


void func_40(var uParam0){
if(uParam0->f_3==5){
if((uParam0->f_4 - MISC::GET_GAME_TIMER()) > 6000){
uParam0->f_4=MISC::GET_GAME_TIMER() + 6000;
}}}


void func_41(var uParam0){
if(uParam0->f_3==5){
if((uParam0->f_4 - MISC::GET_GAME_TIMER()) > 6000){
uParam0->f_4=MISC::GET_GAME_TIMER() + 6000;
}}}


void func_42(var uParam0){
if(uParam0->f_3==5){
if((uParam0->f_4 - MISC::GET_GAME_TIMER()) > 6000){
uParam0->f_4=MISC::GET_GAME_TIMER() + 6000;
}}}


void func_43(){
bool bVar0;
int iVar1;
bVar0=false;
iVar1=0;
while (iVar1 < 32){
if(!func_55(iVar1)){
if(!bVar0){
bVar0=true;
}
if(!func_44(iVar1)){
return;
}}
iVar1++;
}
if(bVar0){}}

int func_44(int iParam0){
int iVar0;
int iVar1;
iVar0=Global_113648.f_9087.f_2[iParam0 /*3*/].f_2;
iVar1=Global_78828.f_12526[iParam0 /*2*/];
while (iVar1 <=Global_78828.f_12526[iParam0 /*2*/].f_1){
if(iVar0==func_45(iVar1)){
Global_113648.f_9087.f_2[iParam0 /*3*/].f_1=iVar1;
return 1;
}
iVar1++;
}
return 0;
}

int func_45(int iParam0){
struct<8> Var0;
StringCopy(&Var0, "NULL", 64);
if(iParam0 !=-1){
switch (Global_78828.f_6825[iParam0 /*3*/].f_1){
case 12:
func_54(iParam0, &Var0);
break;
case 0:
func_53(iParam0, &Var0);
break;
case 1:
func_52(iParam0, &Var0);
break;
case 2:
func_51(iParam0, &Var0);
break;
case 3:
func_50(iParam0, &Var0);
break;
case 4:
func_49(iParam0, &Var0);
break;
case 7:
func_48(iParam0, &Var0);
break;
case 8:
func_46(iParam0, &Var0);
break;
}}
return MISC::GET_HASH_KEY(&Var0);
}


void func_46(int iParam0, char* sParam1){
char cVar0[64];
IntToString(sParam1, Global_78828.f_6825[iParam0 /*3*/], 64);
StringIntConCat(sParam1, func_47(iParam0), 64);
IntToString(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/], 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_1, 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_2, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
IntToString(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_3, 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_4, 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_5, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
IntToString(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_6, 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_7, 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_8, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
IntToString(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_9, 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_10, 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_11, 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_12, 64);
StringIntConCat(&cVar0, Global_78828.f_6684[Global_78828.f_6825[iParam0 /*3*/].f_2 /*14*/].f_13, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
}

int func_47(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 32){
if(iParam0 >=Global_78828.f_12526[iVar0 /*2*/] && iParam0 <=Global_78828.f_12526[iVar0 /*2*/].f_1){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_48(int iParam0, char* sParam1){
char cVar0[64];
IntToString(sParam1, Global_78828.f_6825[iParam0 /*3*/], 64);
StringIntConCat(sParam1, func_47(iParam0), 64);
IntToString(&cVar0, Global_78828.f_4824[Global_78828.f_6825[iParam0 /*3*/].f_2 /*11*/], 64);
StringIntConCat(&cVar0, Global_78828.f_4824[Global_78828.f_6825[iParam0 /*3*/].f_2 /*11*/].f_1, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
IntToString(&cVar0, Global_78828.f_4824[Global_78828.f_6825[iParam0 /*3*/].f_2 /*11*/].f_2, 64);
StringIntConCat(&cVar0, Global_78828.f_4824[Global_78828.f_6825[iParam0 /*3*/].f_2 /*11*/].f_3, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
IntToString(&cVar0, Global_78828.f_4824[Global_78828.f_6825[iParam0 /*3*/].f_2 /*11*/].f_4, 64);
StringIntConCat(&cVar0, Global_78828.f_4824[Global_78828.f_6825[iParam0 /*3*/].f_2 /*11*/].f_5, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
IntToString(&cVar0, Global_78828.f_4824[Global_78828.f_6825[iParam0 /*3*/].f_2 /*11*/].f_6, 64);
StringIntConCat(&cVar0, Global_78828.f_4824[Global_78828.f_6825[iParam0 /*3*/].f_2 /*11*/].f_7, 64);
StringIntConCat(&cVar0, Global_78828.f_4824[Global_78828.f_6825[iParam0 /*3*/].f_2 /*11*/].f_8, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
}


void func_49(int iParam0, char* sParam1){
char cVar0[64];
IntToString(sParam1, Global_78828.f_6825[iParam0 /*3*/], 64);
StringIntConCat(sParam1, func_47(iParam0), 64);
MemCopy(&cVar0,{
Global_78828.f_4160[Global_78828.f_6825[iParam0 /*3*/].f_2 /*12*/]
}
, 16);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
IntToString(&cVar0, Global_78828.f_4160[Global_78828.f_6825[iParam0 /*3*/].f_2 /*12*/].f_8, 64);
StringIntConCat(&cVar0, Global_78828.f_4160[Global_78828.f_6825[iParam0 /*3*/].f_2 /*12*/].f_9, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
IntToString(&cVar0, Global_78828.f_4160[Global_78828.f_6825[iParam0 /*3*/].f_2 /*12*/].f_10, 64);
StringIntConCat(&cVar0, Global_78828.f_4160[Global_78828.f_6825[iParam0 /*3*/].f_2 /*12*/].f_11, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
}


void func_50(int iParam0, char* sParam1){
IntToString(sParam1, Global_78828.f_6825[iParam0 /*3*/], 64);
StringIntConCat(sParam1, func_47(iParam0), 64);
StringConCat(sParam1, &(Global_78828.f_4151[Global_78828.f_6825[iParam0 /*3*/].f_2 /*8*/]), 64);
}


void func_51(int iParam0, char* sParam1){
IntToString(sParam1, Global_78828.f_6825[iParam0 /*3*/], 64);
StringIntConCat(sParam1, func_47(iParam0), 64);
StringIntConCat(sParam1, Global_78828.f_3590[Global_78828.f_6825[iParam0 /*3*/].f_2 /*2*/], 64);
StringIntConCat(sParam1, Global_78828.f_3590[Global_78828.f_6825[iParam0 /*3*/].f_2 /*2*/].f_1, 64);
}


void func_52(int iParam0, char* sParam1){
char cVar0[64];
IntToString(sParam1, Global_78828.f_6825[iParam0 /*3*/], 64);
StringIntConCat(sParam1, func_47(iParam0), 64);
IntToString(&cVar0, Global_78828.f_109[Global_78828.f_6825[iParam0 /*3*/].f_2 /*4*/], 64);
StringIntConCat(&cVar0, Global_78828.f_109[Global_78828.f_6825[iParam0 /*3*/].f_2 /*4*/].f_1, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
IntToString(&cVar0, Global_78828.f_109[Global_78828.f_6825[iParam0 /*3*/].f_2 /*4*/].f_2, 64);
StringIntConCat(&cVar0, Global_78828.f_109[Global_78828.f_6825[iParam0 /*3*/].f_2 /*4*/].f_3, 64);
StringIntConCat(sParam1, MISC::GET_HASH_KEY(&cVar0), 64);
}


void func_53(int iParam0, char* sParam1){
IntToString(sParam1, Global_78828.f_6825[iParam0 /*3*/], 64);
StringIntConCat(sParam1, func_47(iParam0), 64);
StringIntConCat(sParam1, Global_78828.f_6825[iParam0 /*3*/].f_2, 64);
}


void func_54(int iParam0, char* sParam1){
IntToString(sParam1, Global_78828.f_6825[iParam0 /*3*/], 64);
StringIntConCat(sParam1, func_47(iParam0), 64);
}

int func_55(int iParam0){
int iVar0;
int iVar1;
if(Global_113648.f_9087.f_2[iParam0 /*3*/].f_1 < 1900){
iVar0=Global_113648.f_9087.f_2[iParam0 /*3*/].f_2;
iVar1=func_45(Global_113648.f_9087.f_2[iParam0 /*3*/].f_1);
if(iVar0 !=iVar1){
return 0;
}
return 1;
}
return 0;
}


void func_56(){
int iVar0;
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(!MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_15, 0)){
func_57(&(Global_113648.f_20412[iVar0 /*16*/]), 1);
}
iVar0++;
}}


void func_57(char* sParam0, int iParam1){
int iVar0;
int iVar1;
if(Global_112288 && iParam1){
if(func_61(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT()){
HUD::CLEAR_HELP(0);
}}
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_113648.f_20412[iVar0 /*16*/]))){
iVar1=iVar0;
while (iVar1 <=(Global_113648.f_20412.f_145 - 2)){
func_60(iVar1, iVar1 + 1);
iVar1++;
}
func_59((Global_113648.f_20412.f_145 - 1));
Global_113648.f_20412.f_145=(Global_113648.f_20412.f_145 - 1);
func_58();
return;
}
iVar0++;
}}


void func_58(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113648.f_20412.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 0)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0]){
Global_113648.f_20412.f_146[0]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 1)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1]){
Global_113648.f_20412.f_146[1]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 2)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2]){
Global_113648.f_20412.f_146[2]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
iVar0++;
}}


void func_59(int iParam0){
StringCopy(&(Global_113648.f_20412[iParam0 /*16*/]), "", 16);
StringCopy(&(Global_113648.f_20412[iParam0 /*16*/].f_4), "", 16);
Global_113648.f_20412[iParam0 /*16*/].f_8=0;
Global_113648.f_20412[iParam0 /*16*/].f_9=0;
Global_113648.f_20412[iParam0 /*16*/].f_11=0;
Global_113648.f_20412[iParam0 /*16*/].f_10=-1;
Global_113648.f_20412[iParam0 /*16*/].f_12=0;
Global_113648.f_20412[iParam0 /*16*/].f_13=0;
Global_113648.f_20412[iParam0 /*16*/].f_14=0;
Global_113648.f_20412[iParam0 /*16*/].f_15=0;
}


void func_60(int iParam0, int iParam1){
Global_113648.f_20412[iParam0 /*16*/]={
Global_113648.f_20412[iParam1 /*16*/] 
};
Global_113648.f_20412[iParam0 /*16*/].f_4={
Global_113648.f_20412[iParam1 /*16*/].f_4 
};
Global_113648.f_20412[iParam0 /*16*/].f_8=Global_113648.f_20412[iParam1 /*16*/].f_8;
Global_113648.f_20412[iParam0 /*16*/].f_10=Global_113648.f_20412[iParam1 /*16*/].f_10;
Global_113648.f_20412[iParam0 /*16*/].f_9=Global_113648.f_20412[iParam1 /*16*/].f_9;
Global_113648.f_20412[iParam0 /*16*/].f_11=Global_113648.f_20412[iParam1 /*16*/].f_11;
Global_113648.f_20412[iParam0 /*16*/].f_12=Global_113648.f_20412[iParam1 /*16*/].f_12;
Global_113648.f_20412[iParam0 /*16*/].f_13=Global_113648.f_20412[iParam1 /*16*/].f_13;
Global_113648.f_20412[iParam0 /*16*/].f_14=Global_113648.f_20412[iParam1 /*16*/].f_14;
Global_113648.f_20412[iParam0 /*16*/].f_15=Global_113648.f_20412[iParam1 /*16*/].f_15;
}


var func__61(var uParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_62(){
int iVar0;
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_136){
if(MISC::IS_BIT_SET(Global_113648.f_7690[iVar0 /*15*/].f_1, 6)){
func_76(iVar0);
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_650){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_199[iVar0 /*15*/].f_1, 6)){
func_75(Global_113648.f_7690.f_199[iVar0 /*15*/]);
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_198){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_137[iVar0 /*15*/].f_1, 6)){
func_67(Global_113648.f_7690.f_137[iVar0 /*15*/]);
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_764){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_651[iVar0 /*14*/].f_1, 6)){
func_64(iVar0);
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_866){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_765[iVar0 /*10*/].f_1, 6)){
func_63(iVar0);
}
iVar0++;
}}


void func_63(int iParam0){
int iVar0;
struct<10> Var1;
if(iParam0 < 0 || iParam0 >=Global_113648.f_7690.f_866){
return;
}
if(Global_113648.f_7690.f_866 > 1){
iVar0=iParam0;
while (iVar0 <=(Global_113648.f_7690.f_866 - 2)){
Global_113648.f_7690.f_765[iVar0 /*10*/]={
Global_113648.f_7690.f_765[iVar0 + 1 /*10*/] 
};
iVar0++;
}}
if(Global_113648.f_7690.f_866 > 0){
Global_113648.f_7690.f_765[(Global_113648.f_7690.f_866 - 1) /*10*/]={
Var1 
};
Global_113648.f_7690.f_866=(Global_113648.f_7690.f_866 - 1);
}}


void func_64(int iParam0){
int iVar0;
struct<14> Var1;
if(iParam0 < 0 || iParam0 >=Global_113648.f_7690.f_764){
return;
}
if(Global_113648.f_7690.f_764 > 1){
iVar0=iParam0;
while (iVar0 <=(Global_113648.f_7690.f_764 - 2)){
Global_113648.f_7690.f_651[iVar0 /*14*/]={
Global_113648.f_7690.f_651[iVar0 + 1 /*14*/] 
};
iVar0++;
}}
if(Global_113648.f_7690.f_764 > 0){
Global_113648.f_7690.f_651[(Global_113648.f_7690.f_764 - 1) /*14*/]={
Var1 
};
Global_113648.f_7690.f_764=(Global_113648.f_7690.f_764 - 1);
}
func_65(0);
func_65(1);
func_65(2);
}


void func_65(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(!func_66(bParam0)){
return;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_136){
if(MISC::IS_BIT_SET(Global_113648.f_7690[iVar0 /*15*/].f_2, bParam0)){
if(Global_113648.f_7690[iVar0 /*15*/].f_3 > iVar1){
iVar1=Global_113648.f_7690[iVar0 /*15*/].f_3;
}}
iVar0++;
}
iVar2=0;
while (iVar2 < Global_113648.f_7690.f_764){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_651[iVar2 /*14*/].f_2, bParam0)){
if(Global_113648.f_7690.f_651[iVar2 /*14*/].f_3==5){
iVar1=5;
}}
iVar2++;
}
Global_113648.f_7690.f_919[bParam0]=iVar1;
}


bool func_66(int iParam0){
return iParam0 < 3;
}


void func_67(int iParam0){
struct<15> Var0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < Global_113648.f_7690.f_198){
if(Global_113648.f_7690.f_137[iVar1 /*15*/]==iParam0){
func_68(Global_113648.f_7690.f_137[iVar1 /*15*/].f_6);
iVar2=iVar1;
while (iVar2 <=(Global_113648.f_7690.f_198 - 2)){
Global_113648.f_7690.f_137[iVar2 /*15*/]={
Global_113648.f_7690.f_137[iVar2 + 1 /*15*/] 
};
iVar2++;
}
Global_113648.f_7690.f_137[(Global_113648.f_7690.f_198 - 1) /*15*/]={
Var0 
};
Global_113648.f_7690.f_198=(Global_113648.f_7690.f_198 - 1);
return;
}
iVar1++;
}}

int func_68(int iParam0){
int iVar0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
if(func_74(iParam0, Global_20383)==1){
func_73(iParam0, Global_20383, 0);
if(func_72(iParam0, Global_20383)==0){
iVar0=Global_20383;
func_69(iParam0, iVar0);
}
return 1;
}else{
return 0;
}}
return 0;
}


void func_69(int iParam0, int iParam1){
int iVar0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
if(iParam1 > 3){
}else{
iVar0=iParam1;
func_71(iParam0, iVar0, 0);
func_70(iParam0, iVar0, 0);
}}}


void func_70(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_71(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_72(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}


void func_73(int iParam0, int iParam1, int iParam2){
Global_2028[iParam0 /*29*/].f_19[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_19[iParam1]=iParam2;
}}

int func_74(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_19[iParam1];
}


void func_75(int iParam0){
struct<15> Var0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < Global_113648.f_7690.f_650){
if(Global_113648.f_7690.f_199[iVar1 /*15*/]==iParam0){
iVar2=iVar1;
while (iVar2 <=(Global_113648.f_7690.f_650 - 2)){
Global_113648.f_7690.f_199[iVar2 /*15*/]={
Global_113648.f_7690.f_199[iVar2 + 1 /*15*/] 
};
iVar2++;
}
Global_113648.f_7690.f_199[(Global_113648.f_7690.f_650 - 1) /*15*/]={
Var0 
};
Global_113648.f_7690.f_650=(Global_113648.f_7690.f_650 - 1);
return;
}
iVar1++;
}}


void func_76(int iParam0){
bool bVar0;
var uVar1;
struct<15> Var2;
if(iParam0 < 0 || iParam0 >=Global_113648.f_7690.f_136){
return;
}
uVar1=Global_113648.f_7690[iParam0 /*15*/].f_2;
if(Global_113648.f_7690.f_136 > 1){
bVar0=iParam0;
while (bVar0 <=(Global_113648.f_7690.f_136 - 2)){
Global_113648.f_7690[bVar0 /*15*/]={
Global_113648.f_7690[bVar0 + 1 /*15*/] 
};
bVar0++;
}}
if(Global_113648.f_7690.f_136 > 0){
Global_113648.f_7690[(Global_113648.f_7690.f_136 - 1) /*15*/]={
Var2 
};
Global_113648.f_7690.f_136=(Global_113648.f_7690.f_136 - 1);
}
bVar0=false;
while (bVar0 < 3){
if(MISC::IS_BIT_SET(uVar1, bVar0)){
func_65(bVar0);
}
bVar0++;
}}


void func_77(){
int iVar0;
struct<3> Var1;
int iVar2;
int iVar3;
iVar0=0;
while (iVar0 < 317){
if(func_78(iVar0, &Var1)){
Global_99120[iVar0 /*3*/]={
Var1 
};
}
iVar0++;
}
iVar2=0;
while (iVar2 < 3){
Global_4542590[iVar2]=-1;
iVar2++;
}
if(!Global_113648.f_18516.f_16){
iVar3=0;
while (iVar3 < 15){
Global_113648.f_18516[iVar3]=139;
iVar3++;
}
Global_113648.f_18516.f_16=1;
}
iVar3=0;
while (iVar3 < 15){
Global_95687[iVar3]=141;
iVar3++;
}}

int func_78(int iParam0, var uParam1){
float fVar0;
struct<8> Var1;
int iVar2;
struct<3> Var3;
var uVar4;
struct<3> Var5;
switch (iParam0){
case 0:
return 0;
break;
case 1:
func_82(&iVar2);
if(iVar2 < 5){
*uParam1={
Global_95884[iVar2 /*9*/].f_3 
};
return 1;
}else{
*uParam1={
Global_95884[0 /*9*/].f_3 
};
return 1;
}
break;
case 2:
*uParam1={
Global_98792[0 /*109*/].f_4 
};
fVar0=Global_98792[0 /*109*/].f_7;
StringCopy(&Var1, "", 32);
return 1;
break;
case 3:
*uParam1={
Global_98792[1 /*109*/].f_4 
};
fVar0=Global_98792[1 /*109*/].f_7;
StringCopy(&Var1, "", 32);
return 1;
break;
case 4:
*uParam1={
Global_98792[2 /*109*/].f_4 
};
fVar0=Global_98792[2 /*109*/].f_7;
StringCopy(&Var1, "", 32);
return 1;
break;
case 5:
*uParam1={
Global_113648.f_2365.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) 
};
fVar0=Global_113648.f_2365.f_539.f_2310[0];
StringCopy(&Var1, "", 32);
return 1;
break;
case 6:
*uParam1={
Global_113648.f_2365.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) 
};
fVar0=Global_113648.f_2365.f_539.f_2310[1];
StringCopy(&Var1, "", 32);
return 1;
break;
case 7:
*uParam1={
Global_113648.f_2365.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) 
};
fVar0=Global_113648.f_2365.f_539.f_2310[2];
StringCopy(&Var1, "", 32);
return 1;
break;
case 11:
if(func_81(iParam0, uParam1, &fVar0)){
StringCopy(&Var1, "v_strip3", 32);
return 1;
}
break;
case 8:
if(func_81(iParam0, uParam1, &fVar0)){
StringCopy(&Var1, "v_strip3", 32);
return 1;
}
break;
case 9:
return func_78(8, uParam1);
break;
case 10:
return func_78(8, uParam1);
break;
case 13:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 14:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 15:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 12:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 16:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 17:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 18:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 19:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 20:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 21:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 22:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 74:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 23:
return func_78(208, uParam1);
break;
case 24:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 67:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 25:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 26:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 27:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 28:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 29:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 30:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 31:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 32:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 33:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 34:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 35:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 36:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 37:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 58:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 59:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 60:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 38:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 39:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
case 40:
if(func_81(iParam0, uParam1, &fVar0)){
StringCopy(&Var1, "v_trailer", 32);
return 1;
}
break;
case 41:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 42:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 43:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 44:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 45:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 46:
*uParam1={
-803.734f, 168.148f, 76.3542f 
};
return 1;
break;
case 47:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 49:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 48:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 124:
*uParam1={
-803.734f, 168.148f, 76.3542f 
};
return 1;
break;
case 50:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 51:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 52:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 66:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
return 1;
break;
return 0;
break;
case 54:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 55:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 56:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 57:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 61:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 62:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 63:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 68:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 69:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 64:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 65:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 70:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 71:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 72:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 73:
if(func_81(iParam0, uParam1, &fVar0)){
return 1;
}
break;
case 234:
*uParam1={
1970.746f, 3818.998f, 33.42f 
};
return 1;
break;
case 316:
*uParam1={
1971.186f, 3818.968f, 33.4287f 
};
return 1;
break;
case 315:
*uParam1={
1975.312f, 3817.041f, 33.53f 
};
return 1;
break;
case 75:
*uParam1={
1424.304f, -1898.611f, 69.8678f 
};
return 1;
break;
case 76:
*uParam1={
1357.3f, -2267.1f, 61.1f 
};
return 1;
break;
case 77:
*uParam1={
-814.246f, 181.264f, 75.7407f 
};
return 1;
break;
case 78:
*uParam1={
-813.766f, 181.054f, 76.7504f 
};
return 1;
break;
case 79:
*uParam1={
-805.17f, 173.99f, 72.6949f 
};
StringCopy(&Var1, "v_michael", 32);
return 1;
break;
case 80:
*uParam1={
-774.9665f, 183.9946f, (71.835f + 0.5f) 
};
return 1;
break;
case 81:
*uParam1={
-1313.748f, 121.405f, 56.6578f 
};
return 1;
break;
case 82:
*uParam1={
-812.926f, 181.614f, (76.7408f - 0.0097f) 
};
return 1;
break;
case 83:
*uParam1={
-813.196f, 181.764f, 76.7407f 
};
return 1;
break;
case 84:
*uParam1={
1968.02f, 3816.76f, 32.4291f 
};
return 1;
break;
case 85:
*uParam1={
-802.3999f, 172.44f, 72.8447f 
};
return 1;
break;
case 86:
*uParam1={
-805.173f, 173.987f, 72.6876f 
};
return 1;
break;
case 87:
*uParam1={
-780.694f, 187.325f, ((72.812f - 1f) + 1f) 
};
return 1;
break;
case 88:
*uParam1={
-1353.311f, 355.9345f, 64.0704f 
};
return 1;
break;
case 89:
*uParam1={
-826.5596f, 155.8342f, 68.3283f 
};
return 1;
break;
case 90:
*uParam1={
-887.9781f, 133.6231f, 58.3423f 
};
return 1;
break;
case 91:
*uParam1={
-1210.317f, -955.7397f, 1.6553f 
};
return 1;
break;
case 92:
*uParam1={
-848.0614f, 855.916f, 202.5614f 
};
return 1;
break;
case 93:
*uParam1={
-1268.64f, -711.4f, 22.4619f 
};
return 1;
break;
case 94:
*uParam1={
-117.021f, 361.432f, 111.8857f 
};
return 1;
break;
case 95:
*uParam1={
394.68f, 176.81f, 103.8401f 
};
return 1;
break;
case 96:
*uParam1={
-1368.025f, 54.7852f, 52.7046f 
};
return 1;
break;
case 97:
*uParam1={
-1415.52f, -198.59f, 47.2507f 
};
return 1;
break;
case 98:
*uParam1={
Vector((36.1054f + 1f), -211.7579f, -613.756f) + Vector(-0.0069f, 0.026f, 0.0203f) 
};
*uParam1={
*uParam1 + Vector(-0.0009f, 0.0261f, 0.0164f) 
};
fVar0=(fVar0 + 0.0004f);
*uParam1={
*uParam1 + Vector(0.0011f, 0.0264f, 0.0168f) 
};
fVar0=(fVar0 + 0.0015f);
*uParam1={
*uParam1 + Vector(0.0011f, 0.0268f, 0.0173f) 
};
fVar0=(fVar0 + 0.0002f);
*uParam1={
*uParam1 + Vector(0.0011f, 0.0271f, 0.0179f) 
};
fVar0=(fVar0 + -0.0009f);
return 1;
break;
case 99:
*uParam1={
-1360.156f, -559.5457f, 29.0697f 
};
return 1;
break;
case 100:
*uParam1={
-590.0963f, 270.147f, 81.2426f 
};
return 1;
break;
case 101:
*uParam1={
166.4449f, -211.298f, 53.0941f 
};
return 1;
break;
case 102:
*uParam1={
401.7279f, 308.2417f, 102.5f 
};
return 1;
break;
case 103:
*uParam1={
-1731.94f, -1125.13f, (12.0176f + 1f) 
};
return 1;
break;
case 104:
*uParam1={
-1927.78f, -579.07f, 11.1705f 
};
return 1;
break;
case 105:
*uParam1={
-464.22f, -1592.98f, 38.1269f 
};
return 1;
break;
case 106:
*uParam1={
-1744.199f, -625.3162f, 9.8308f 
};
return 1;
break;
case 107:
*uParam1={
-1426.91f, -39f, 51.8742f 
};
return 1;
break;
case 108:
*uParam1={
260.98f, 1117.81f, 220.1383f 
};
return 1;
break;
case 109:
*uParam1={
-1819.58f, -677.59f, 10.4119f 
};
return 1;
break;
case 110:
*uParam1={
-95.55f, -415.1f, 35.6806f 
};
return 1;
break;
case 111:
*uParam1={
-1292.701f, -697.2287f, 24.2677f 
};
return 1;
break;
case 112:
*uParam1={
814.98f, 1270.01f, 360.4754f 
};
return 1;
break;
case 113:
*uParam1={
-1668.26f, 488.3f, 128.876f 
};
return 1;
break;
case 135:
*uParam1={
667.7f, 3503.7f, 33.9937f 
};
return 1;
break;
case 136:
*uParam1={
2405.11f, 4296.96f, 35.1743f 
};
return 1;
break;
case 137:
*uParam1={
100.9571f, 3363.993f, 34.4471f 
};
return 1;
break;
case 138:
*uParam1={
2445.206f, 3800.669f, 40.0793f 
};
return 1;
break;
case 139:
*uParam1={
1775.445f, 4584.743f, 37.6512f 
};
return 1;
break;
case 140:
*uParam1={
-760.5784f, 229.583f, 74.6747f 
};
StringCopy(&Var1, "", 32);
return 1;
break;
case 141:
*uParam1={
1316.415f, -1599.345f, 51.3924f 
};
StringCopy(&Var1, "", 32);
return 1;
break;
case 142:
*uParam1={
2365.105f, 3904.715f, 35.2f 
};
return 1;
break;
case 143:
*uParam1={
-483.2213f, 5876.392f, 33f 
};
return 1;
break;
case 144:
*uParam1={
-180.0459f, 6464.799f, 30.2f 
};
return 1;
break;
case 145:
*uParam1={
1663.859f, 4876.284f, 41.6f 
};
return 1;
break;
case 146:
*uParam1={
2156.064f, 3253.632f, 46.9f 
};
return 1;
break;
case 147:
*uParam1={
2782.836f, 3476.82f, 54.8f 
};
return 1;
break;
case 148:
*uParam1={
2543.831f, 2618.32f, 37.5f 
};
return 1;
break;
case 149:
*uParam1={
1295.529f, 1529.811f, 96.6f 
};
return 1;
break;
case 150:
*uParam1={
1978.07f, 3819.564f, 32.429f 
};
return 1;
break;
case 114:
*uParam1={
68.79f, -1561.27f, 29.4564f 
};
return 1;
break;
case 115:
*uParam1={
-511.73f, -21.87f, 45.5884f 
};
return 1;
break;
case 116:
*uParam1={
-628.8f, 242.463f, 81.8695f 
};
return 1;
break;
case 117:
*uParam1={
-834.53f, -350.71f, 38.6537f 
};
return 1;
break;
case 118:
*uParam1={
-1073.127f, -1538.832f, 4.11f 
};
return 1;
break;
case 119:
*uParam1={
123.0931f, 649.6752f, 207.7751f 
};
return 1;
break;
case 120:
*uParam1={
-820.9f, 85.3f, 51.9813f 
};
return 1;
break;
case 121:
*uParam1={
-831.353f, -1358.748f, 4.9732f 
};
return 1;
break;
case 122:
*uParam1={
-812.346f, 179.87f, 72.1592f 
};
return 1;
break;
case 123:
*uParam1={
-2015.68f, -495.4f, 11.7326f 
};
return 1;
break;
case 125:
*uParam1={
-1499.98f, -677.09f, 27.0668f 
};
return 1;
break;
case 126:
*uParam1={
1971.862f, 3813.91f, 32.9309f 
};
return 1;
break;
case 127:
*uParam1={
669.7389f, 3503.83f, 32.9168f 
};
return 1;
break;
case 128:
*uParam1={
1974.768f, 3821.242f, (32.4384f + 0.5f) 
};
return 1;
break;
case 129:
*uParam1={
1981.238f, 3821.543f, 31.9677f 
};
return 1;
break;
case 130:
*uParam1={
1976.75f, 3822.76f, 33.28f 
};
return 1;
break;
case 131:
*uParam1={
1981.332f, 3821.52f, 31.9535f 
};
return 1;
break;
case 132:
*uParam1={
1974.312f, 3821.1f, 32.8864f 
};
return 1;
break;
case 133:
*uParam1={
1940.052f, 4018.854f, 28.9009f 
};
return 1;
break;
case 134:
*uParam1={
1992.15f, 3056.42f, 47.0342f 
};
return 1;
break;
case 151:
*uParam1={
-115.92f, 363.5f, 112.8857f 
};
return 1;
break;
case 152:
*uParam1={
-1353.791f, 355.1845f, 64.08f 
};
return 1;
break;
case 153:
*uParam1={
-718.8135f, 256.7636f, 79.8384f 
};
return 1;
break;
case 154:
*uParam1={
-718.8735f, 256.4936f, 79.8259f 
};
return 1;
break;
case 155:
*uParam1={
-770.6851f, 157.8133f, 67.5042f 
};
return 1;
break;
case 156:
*uParam1={
-796.7593f, 180.4725f, 71.8266f 
};
return 1;
break;
case 157:
*uParam1={
-718.0311f, 254.9289f, 79.7959f 
};
return 1;
break;
case 158:
*uParam1={
533.1877f, 109.0133f, 96.4624f 
};
return 1;
break;
case 159:
*uParam1={
-823.2f, -187.083f, 37.7753f 
};
return 1;
break;
case 160:
*uParam1={
-715.6204f, -155.5691f, 37.4023f 
};
return 1;
break;
case 161:
*uParam1={
-790.3314f, 186.4809f, 71.835f 
};
return 1;
break;
case 162:
*uParam1={
-1367.35f, -208.84f, (((44.4134f + 44.416f) / 2f) - 0.01f) 
};
return 1;
break;
case 163:
*uParam1={
-812.896f, 181.114f, 76.7233f 
};
return 1;
break;
case 164:
*uParam1={
-781.264f, 187.115f, 72.8425f 
};
return 1;
break;
case 165:
*uParam1={
-1135.547f, -450.7346f, 35.4977f 
};
return 1;
break;
case 166:
*uParam1={
-1050.013f, -481.4982f, 36.7625f 
};
return 1;
break;
case 167:
*uParam1={
-1180.062f, -498.2454f, 35.567f 
};
return 1;
break;
case 168:
if(func_79(0, 25, &Var3, &uVar4)){
*uParam1={
Var3 + Vector(71.1531f, 179.5117f, -812.0607f) 
};
StringCopy(&Var1, "v_michael", 32);
return 1;
}
break;
case 169:
*uParam1={
-808.3299f, 170.7319f, 76.7408f 
};
return 1;
break;
case 170:
*uParam1={
-656.9569f, -276.9062f, 35.6524f 
};
return 1;
break;
case 171:
*uParam1={
-250.9305f, -80.8638f, 48.4993f 
};
return 1;
break;
case 173:
*uParam1={
-817.75f, 170.02f, 70.4911f 
};
return 1;
break;
case 172:
*uParam1={
-248.9653f, -81.0186f, 48.6174f 
};
*uParam1={
*uParam1 + Vector(0.0134f, 0.0273f, 0.0091f) 
};
fVar0=(fVar0 + 0.003f);
return 1;
break;
case 174:
*uParam1={
-803.27f, 183.78f, 71.61f 
};
return 1;
break;
}
switch (iParam0){
case 175:
*uParam1={
-17.2168f, -1441.224f, 30.1015f 
};
return 1;
break;
case 176:
*uParam1={
-0.45f, 525.49f, 169.64f 
};
return 1;
break;
case 177:
*uParam1={
-0.109f, 524.3119f, 170.3068f 
};
return 1;
break;
case 178:
*uParam1={
9.0865f, 528.0272f, 170.6172f 
};
return 1;
break;
case 179:
*uParam1={
-17.2672f, -1441.154f, 30.1015f 
};
return 1;
break;
case 180:
*uParam1={
1.76f, 525.92f, 173.63f 
};
return 1;
break;
case 181:
*uParam1={
-17.4073f, -1439.401f, 31.1023f 
};
return 1;
break;
case 182:
*uParam1={
-13.8167f, -1423.673f, 30.7231f 
};
return 1;
break;
case 183:
*uParam1={
15.3608f, 523.6475f, (169.2282f + 1f) 
};
return 1;
break;
case 184:
*uParam1={
-11.5281f, 512.304f, 174.5978f 
};
return 1;
break;
case 185:
*uParam1={
20.9569f, 521.8147f, 170.1977f 
};
return 1;
break;
case 186:
*uParam1={
-1.579f, 535.2489f, 175.3424f 
};
return 1;
break;
case 187:
*uParam1={
3.8524f, 525.7295f, 174.6234f 
};
return 1;
break;
case 188:
*uParam1={
-8.86f, 515.84f, 174.628f 
};
return 1;
break;
case 189:
*uParam1={
-6.9799f, 524.9367f, 174.9997f 
};
return 1;
break;
case 190:
*uParam1={
1.4483f, 527.5843f, 170.0596f 
};
return 1;
break;
case 191:
*uParam1={
1.8291f, 526.745f, 174.6267f 
};
return 1;
break;
case 196:
*uParam1={
-14.8689f, -1441.182f, 31.1932f 
};
return 1;
break;
case 197:
*uParam1={
3.641f, 530.1489f, 175.6695f 
};
return 1;
break;
case 192:
*uParam1={
-1174.458f, -1573.632f, 4.7619f 
};
return 1;
break;
case 193:
*uParam1={
-1175.298f, -1573.692f, 4.3599f 
};
return 1;
break;
case 194:
*uParam1={
-1153.511f, -1371.652f, 4.073f 
};
return 1;
break;
case 195:
*uParam1={
-1162.987f, -1427.264f, 3.637f 
};
return 1;
break;
case 198:
*uParam1={
-13.7603f, -1451.2f, 29.6322f 
};
return 1;
break;
case 199:
*uParam1={
14.379f, 544.128f, 175.0021f 
};
return 1;
break;
case 200:
*uParam1={
2.8895f, -1607.286f, 29.2949f 
};
return 1;
break;
case 201:
*uParam1={
2.8895f, -1607.286f, 29.2866f 
};
return 1;
break;
case 202:
*uParam1={
-1244.888f, -1613.656f, 4.1295f 
};
return 1;
break;
case 203:
*uParam1={
-16.4273f, -1452.266f, 30.5424f 
};
return 1;
break;
case 204:
*uParam1={
-15.0259f, -1422.936f, 30.6908f 
};
return 1;
break;
case 205:
*uParam1={
15.3678f, 523.712f, 170.2095f 
};
return 1;
break;
case 206:
*uParam1={
154.0731f, 765.5721f, 209.672f 
};
return 1;
break;
case 207:
*uParam1={
-268.139f, 415.2881f, 109.7258f 
};
return 1;
break;
case 208:
*uParam1={
-464.22f, -1592.98f, 38.73f 
};
return 1;
break;
case 209:
*uParam1={
31.9f, -1483.3f, 29.26f 
};
return 1;
break;
case 210:
*uParam1={
208.9683f, 222.0408f, 104.6f 
};
return 1;
break;
case 211:
*uParam1={
-24.5203f, -1436.2f, 30.1544f 
};
return 1;
break;
case 212:
*uParam1={
-23.8762f, -1444.595f, 30.6345f 
};
return 1;
break;
case 213:
*uParam1={
14f, 546.19f, 175.4851f 
};
return 1;
break;
case 214:
*uParam1={
8.8185f, 545.03f, 175.6051f 
};
return 1;
break;
case 215:
*uParam1={
10.9694f, 551.7596f, 176.1069f 
};
return 1;
break;
case 216:
*uParam1={
-1150.82f, 943.27f, 198.237f 
};
return 1;
break;
case 217:
*uParam1={
-1689f, -946.16f, 7.1768f 
};
return 1;
break;
case 221:
*uParam1={
-521.13f, -28.54f, 45.2617f 
};
return 1;
break;
case 222:
*uParam1={
480.9113f, -1316.355f, 29.1966f 
};
return 1;
break;
case 223:
*uParam1={
473.3613f, -1309.995f, 29.2326f 
};
return 1;
break;
case 224:
return func_78(222, uParam1);
break;
case 226:
*uParam1={
28.986f, -1351.412f, 29.3437f 
};
return 1;
break;
case 227:
*uParam1={
-379.1773f, 220.9259f, 84.144f 
};
return 1;
break;
case 228:
*uParam1={
131.5816f, -1303.558f, 29.1592f 
};
return 1;
break;
case 229:
*uParam1={
792.1553f, -735.5871f, 27.5721f 
};
return 1;
break;
case 230:
*uParam1={
-297.4081f, -1332.343f, 31.3057f 
};
return 1;
break;
case 218:
*uParam1={
-9.4f, -1415.3f, 28.32f 
};
return 1;
break;
case 219:
*uParam1={
-242.0927f, -1538.181f, 30.5334f 
};
return 1;
break;
case 220:
*uParam1={
-18.8892f, -1823.912f, 25.8711f 
};
return 1;
break;
case 225:
*uParam1={
192.751f, -1672.653f, 28.8033f 
};
return 1;
break;
case 231:
*uParam1={
-2654.634f, 2625.161f, 15.6744f 
};
return 1;
break;
case 232:
*uParam1={
-78.4023f, -1019.235f, 28.5449f 
};
return 1;
break;
case 233:
*uParam1={
-78.4023f, -1019.235f, 28.5449f 
};
return 1;
break;
case 235:
*uParam1={
116.9369f, -1287.704f, 28.2979f 
};
return 1;
break;
case 236:
*uParam1={
126.8211f, -1283.766f, 29.274f 
};
return 1;
break;
case 237:
*uParam1={
127.957f, -1298.513f, 29.427f 
};
return 1;
break;
case 238:
*uParam1={
130.2769f, -1300.874f, 29.1559f 
};
return 1;
break;
case 239:
*uParam1={
-55.8087f, 358.255f, 113.061f 
};
return 1;
break;
case 240:
*uParam1={
1534.043f, 3613.122f, 34.367f 
};
return 1;
break;
case 241:
*uParam1={
-175.4296f, 6428.75f, 29.6226f 
};
return 1;
break;
case 242:
*uParam1={
-1654.937f, -147.5126f, 57.461f 
};
return 1;
break;
case 245:
*uParam1={
1972.81f, 3818.273f, 32.005f 
};
return 1;
break;
case 243:
*uParam1={
433.885f, -1462.478f, 28.2735f 
};
return 1;
break;
case 244:
*uParam1={
433.885f, -1462.478f, 28.2804f 
};
return 1;
break;
case 246:
*uParam1={
-1199.55f, -1569.688f, 4.612f 
};
return 1;
break;
case 247:
*uParam1={
-1325.88f, -1667.49f, 1.5744f 
};
return 1;
break;
case 248:
*uParam1={
285.93f, 182.18f, 103.3496f 
};
return 1;
break;
case 249:
*uParam1={
292.17f, 191.09f, (103.3496f + 1f) 
};
return 1;
break;
case 250:
*uParam1={
288.0774f, -3201.881f, 5.808f 
};
return 1;
break;
case 251:
*uParam1={
-871.2493f, 67.3477f, 52.1137f 
};
return 1;
break;
case 252:
*uParam1={
-46.1798f, -1474.164f, 32.0083f 
};
return 1;
break;
case 253:
*uParam1={
1876.025f, 2620.827f, 45.6722f 
};
return 1;
break;
case 254:
*uParam1={
154.73f, -219.21f, 54.303f 
};
return 1;
break;
case 255:
*uParam1={
411.625f, -1488.989f, 30.1244f 
};
return 1;
break;
case 264:
*uParam1={
488.0162f, -1342.394f, 29.4108f 
};
return 1;
break;
case 265:
*uParam1={
-438.0249f, 1595.895f, 356.5938f 
};
return 1;
break;
case 266:
*uParam1={
-3067.868f, 130.6339f, 9.9056f 
};
return 1;
break;
case 267:
*uParam1={
2209.699f, 4914.914f, 39.676f 
};
return 1;
break;
case 268:
*uParam1={
1800.031f, 6293.462f, 48.6294f 
};
return 1;
break;
case 269:
*uParam1={
418.6078f, -788.4689f, 43.5311f 
};
return 1;
break;
case 270:
*uParam1={
2949.567f, 5755.339f, 317.8481f 
};
return 1;
break;
case 271:
*uParam1={
-1267.389f, -1098.899f, 6.8082f 
};
return 1;
break;
case 272:
*uParam1={
107.0137f, -1316.035f, 28.2084f 
};
return 1;
break;
case 273:
*uParam1={
-118.1968f, -442.9148f, 35.282f 
};
return 1;
break;
case 274:
*uParam1={
-1858.957f, 2071.23f, 140.3656f 
};
return 1;
break;
case 275:
*uParam1={
Vector(49.4f, -1195.9f, 937.3f) + Vector(48.8f, -1200.3f, 895.4f) / Vector(2f, 2f, 2f) 
};
return 1;
break;
case 276:
*uParam1={
Vector(54.5f, 2303.4f, 1893.4f) * Vector(1f, 1f, 1f) + Vector(54.5f, 2251.8f, 1885.6f) * Vector(2f, 2f, 2f) / FtoV((1f + 2f)) 
};
return 1;
break;
case 277:
*uParam1={
1076.988f, 2685.153f, 37.973f 
};
return 1;
break;
case 278:
*uParam1={
642.68f, -1001.27f, 36.8997f 
};
return 1;
break;
case 279:
*uParam1={
-145.8739f, 868.3813f, 231.6979f 
};
return 1;
break;
case 280:
*uParam1={
2789.845f, -1453.731f, 0.5519f 
};
return 1;
break;
case 281:
*uParam1={
612.6f, -932.6f, 10.6f 
};
return 1;
break;
case 282:
*uParam1={
-975.9f, 2891f, 15.7f 
};
return 1;
break;
case 283:
*uParam1={
Vector(1f, 1f, 1f) * Vector(15.66f, 303.17f, -3019.98f) + Vector(2f, 2f, 2f) * Vector(15.7f, 285.2f, -3031.2f) / FtoV((1f + 2f)) 
};
return 1;
break;
case 284:
*uParam1={
Vector(51.5964f, -1128.687f, 1356.032f) + Vector(51.5f, -1149f, 1316.7f) / Vector(2f, 2f, 2f) 
};
return 1;
break;
case 285:
*uParam1={
48.1743f, -2057.129f, 18.3524f 
};
return 1;
break;
case 256:
*uParam1={
-1242.68f, -1105.15f, 7.1f 
};
return 1;
break;
case 257:
*uParam1={
-1667.148f, -974.7168f, 6.479f 
};
return 1;
break;
case 258:
*uParam1={
-301.4778f, 6250.9f, 30.5054f 
};
return 1;
break;
case 259:
*uParam1={
-724.26f, -1307.05f, 5.0602f 
};
return 1;
break;
case 260:
*uParam1={
-1280.054f, 303.9235f, 63.9553f 
};
return 1;
break;
case 261:
*uParam1={
924.1288f, 48.0048f, 79.7644f 
};
return 1;
break;
case 286:
*uParam1={
-1273.69f, -1195.01f, 5.0372f 
};
return 1;
break;
case 287:
*uParam1={
-888.45f, -853.11f, 19.5602f 
};
return 1;
break;
case 288:
*uParam1={
-1696.14f, -1073.2f, 0.6898f 
};
return 1;
break;
case 262:
*uParam1={
-1155.957f, -1521.686f, 4.3519f 
};
return 1;
break;
case 263:
*uParam1={
-565.37f, -1258.02f, 13.8618f 
};
return 1;
break;
case 289:
*uParam1={
440.6737f, -228.7473f, 55.9725f 
};
return 1;
break;
case 290:
*uParam1={
118.4869f, -1286.414f, 28.261f 
};
return 1;
break;
case 291:
*uParam1={
-1159.273f, -1522.504f, 9.634f 
};
return 1;
break;
case 292:
*uParam1={
-1145.368f, -1515.59f, 9.5847f 
};
return 1;
break;
case 293:
*uParam1={
-1145.437f, -1515.649f, 9.5894f 
};
return 1;
break;
case 294:
return func_78(293, uParam1);
break;
case 295:
return func_78(292, uParam1);
break;
case 299:
*uParam1={
-1158.133f, -1521.394f, 9.6327f 
};
return 1;
break;
case 300:
return func_78(303, uParam1);
break;
case 301:
return func_78(303, uParam1);
break;
case 302:
return func_78(303, uParam1);
break;
case 303:
*uParam1={
-1157.803f, -1521.334f, 9.6327f 
};
return 1;
break;
case 296:
*uParam1={
-1146.127f, -1515.525f, 9.6346f 
};
return 1;
break;
case 297:
*uParam1={
-1153.515f, -1518.435f, 9.6346f 
};
return 1;
break;
case 298:
*uParam1={
-1156.422f, -1519.561f, 10.6327f 
};
return 1;
break;
case 304:
*uParam1={
1972.432f, 3814.38f, 32.932f 
};
return 1;
break;
case 305:
*uParam1={
1394.208f, 3602.284f, 37.9419f 
};
return 1;
break;
case 306:
Var5={
0.0055f, 7.499f, -1.2748f 
};
*uParam1={
Vector(42.2955f, 5619.934f, -557.5234f) + Var5 
};
return 1;
break;
case 307:
*uParam1={
-1574.465f, 4693.425f, 47.6226f 
};
return 1;
break;
case 308:
*uParam1={
-1557.394f, 4590.116f, 18.6076f 
};
return 1;
break;
case 309:
*uParam1={
2113.694f, 4792.353f, 40.2104f 
};
return 1;
break;
case 310:
*uParam1={
2020.252f, 3401.154f, 42.7215f 
};
return 1;
break;
case 311:
*uParam1={
1972.237f, 3817.86f, 33.4287f 
};
return 1;
break;
case 312:
*uParam1={
-275.7407f, 6629.969f, 6.4377f 
};
return 1;
break;
case 313:
*uParam1={
1838.1f, 4381.3f, (19.6f + 5f) 
};
return 1;
break;
case 314:
*uParam1={
1126.415f, 2035.135f, 243.9449f 
};
return 1;
break;
}
*uParam1={
0f, 0f, 0f 
};
fVar0=0f;
Var1={
Var1 
};
return 0;
}

int func_79(int iParam0, int iParam1, var uParam2, var uParam3){
switch (iParam1){
case 0:
switch (iParam0){
case 0:
*uParam2={
13.904f, 1.193f, 0.7f 
};
*uParam3=-144f;
return 1;
break;
case 1:
if(func_79(0, iParam1, uParam2, uParam3)){
*uParam2={
*uParam2 + Vector(0f, -1.1731f, 0.809f) 
};
*uParam3=(*uParam3 + (456.7661f - 360f));
return 1;
}
break;
case 2:
*uParam2={
Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) 
};
*uParam3=((16f - 222.8314f) + 360f);
return 1;
break;
}
return 0;
break;
case 1:
switch (iParam0){
case 0:
*uParam2={
10.9793f, -5.9f, 4.6f 
};
*uParam3=163.0716f;
return 1;
break;
case 1:
if(func_79(0, iParam1, uParam2, uParam3)){
*uParam2={
*uParam2 + Vector(0f, 0.25f, -0.6f) 
};
*uParam3=(*uParam3 + 0f);
return 1;
}
break;
case 2:
if(func_79(0, iParam1, uParam2, uParam3)){
*uParam2={
*uParam2 + Vector(0f, -0.5f, -1.2f) 
};
*uParam3=(*uParam3 + 0f);
return 1;
}
break;
}
break;
case 2:
case 3:
switch (iParam0){
case 0:
case 1:
case 2:
*uParam2={
Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) 
};
*uParam3=(((16f + 90f) - 222.8314f) + 360f);
return 1;
break;
}
break;
case 4:
switch (iParam0){
case 0:
case 1:
case 2:
*uParam2={
6.8878f, -5.5247f, 1.5228f 
};
*uParam3=160f;
return 1;
break;
}
break;
case 18:
switch (iParam0){
case 0:
*uParam2={
4.1937f, -9.0309f, 4.5877f 
};
*uParam3=255f;
return 1;
break;
}
break;
case 9:
switch (iParam0){
case 0:
*uParam2={
4.4577f, -9.6399f, 4.5876f 
};
*uParam3=252f;
return 1;
break;
}
break;
case 5:
switch (iParam0){
case 0:
*uParam2={
3.799f, -9.41f, 4.5877f 
};
*uParam3=273f;
return 1;
break;
}
break;
case 21:
switch (iParam0){
case 0:
if(func_79(0, 5, uParam2, uParam3)){
*uParam2={
*uParam2 + Vector(0f, 0f, 0f) 
};
*uParam3=(*uParam3 + 0f);
return 1;
}
break;
}
break;
case 6:
switch (iParam0){
case 0:
*uParam2={
12.552f, 4.373f, (4.6f + 1f) 
};
*uParam3=318f;
return 1;
break;
}
break;
case 7:
switch (iParam0){
case 0:
*uParam2={
-0.4395f, -11.0022f, 0.0747f 
};
*uParam3=306f;
return 1;
break;
}
break;
case 8:
switch (iParam0){
case 0:
*uParam2={
5.5001f, -12.4406f, 4.6f 
};
*uParam3=0f;
return 1;
break;
}
break;
case 10:
switch (iParam0){
case 0:
*uParam2={
3.5f, -9.1f, 4.6f 
};
*uParam3=330f;
return 1;
break;
}
break;
case 11:
switch (iParam0){
case 0:
*uParam2={
0.849f, 1.575f, 0f 
};
*uParam3=272.857f;
return 1;
break;
}
break;
case 12:
switch (iParam0){
case 0:
case 1:
*uParam2={
8.183f, -3.0467f, 5.5876f 
};
*uParam3=158f;
return 1;
break;
}
break;
case 13:
switch (iParam0){
case 0:
case 1:
*uParam2={
9.383f, -3.3887f, 5.73f 
};
*uParam3=339f;
return 1;
break;
}
break;
case 14:
switch (iParam0){
case 0:
case 1:
*uParam2={
Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) 
};
*uParam3=((-159.23f - 222.8314f) + 360f);
return 1;
break;
}
break;
case 15:
switch (iParam0){
case 0:
case 1:
*uParam2={
Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) 
};
*uParam3=((-159.23f - 222.8314f) + 360f);
return 1;
break;
}
break;
case 16:
switch (iParam0){
case 0:
*uParam2={
4.488f, -9.098f, 5.4864f 
};
*uParam3=147f;
return 1;
break;
}
break;
case 17:
switch (iParam0){
case 0:
*uParam2={
9.04f, 5.71f, 1.44f 
};
*uParam3=159.3182f;
return 1;
break;
}
break;
case 20:
switch (iParam0){
case 0:
*uParam2={
3.25f, -9.53f, 4.588f 
};
*uParam3=333f;
return 1;
break;
}
break;
case 22:
switch (iParam0){
case 0:
*uParam2={
Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) 
};
*uParam3=(306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
return 1;
break;
}
break;
case 23:
switch (iParam0){
case 0:
*uParam2={
Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) 
};
*uParam2={
*uParam2 * Vector(0.95f, 0.95f, 0.95f) 
};
*uParam3=MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
return 1;
break;
}
break;
case 24:
switch (iParam0){
case 0:
*uParam2={
Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) 
};
*uParam3=((26.087f - 222.8314f) + 360f);
return 1;
break;
}
break;
case 19:
switch (iParam0){
case 0:
*uParam2={
Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) 
};
*uParam3=((13f - 222.8314f) + 360f);
return 1;
break;
}
break;
case 25:
switch (iParam0){
case 0:
case 1:
*uParam2={
Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) 
};
*uParam3=((-28.7112f - 222.8314f) + 360f);
return 1;
break;
}
break;
case 26:
switch (iParam0){
case 1:
*uParam2={
27.9648f, 8.3766f, 0.7f 
};
*uParam3=319f;
return 1;
break;
}
break;
case 32:
switch (iParam0){
case 1:
*uParam2={
Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) 
};
*uParam3=78f;
return 1;
break;
}
break;
case 27:
switch (iParam0){
case 1:
*uParam2={
-0.3142f, -10.9926f, 0.0747f 
};
*uParam3=304.1026f;
return 1;
break;
}
break;
case 41:
switch (iParam0){
case 1:
*uParam2={
10.3f, -6.5f, 4.6f 
};
*uParam3=180f;
return 1;
break;
}
break;
case 33:
switch (iParam0){
case 1:
if(func_79(1, 32, uParam2, uParam3)){
*uParam2={
*uParam2 + Vector(0f, 0f, 0f) 
};
*uParam3=(*uParam3 + 0f);
return 1;
}
break;
}
break;
case 38:
switch (iParam0){
case 1:
*uParam2={
8.505f, -10.9717f, 4.6019f 
};
*uParam3=228f;
return 1;
break;
}
break;
case 31:
switch (iParam0){
case 1:
*uParam2={
12.7165f, 4.7109f, (4.6f + 1f) 
};
*uParam3=310.6696f;
return 1;
break;
}
break;
case 34:
switch (iParam0){
case 1:
*uParam2={
9.0529f, -8.9175f, 1.6907f 
};
*uParam3=102.156f;
return 1;
break;
}
break;
case 35:
switch (iParam0){
case 1:
*uParam2={
8.4799f, -7.5315f, 0.682f 
};
*uParam3=264f;
return 1;
break;
}
break;
case 37:
switch (iParam0){
case 1:
*uParam2={
9.352f, -3.356f, 5.7338f 
};
*uParam3=338f;
return 1;
break;
}
break;
case 39:
switch (iParam0){
case 1:
*uParam2={
8.3003f, -10.3127f, 4.5874f 
};
*uParam3=262.789f;
return 1;
break;
}
break;
case 40:
switch (iParam0){
case 1:
*uParam2={
10.76f, -5.95f, 4.59f 
};
*uParam3=177.6766f;
return 1;
break;
}
break;
case 36:
switch (iParam0){
case 1:
*uParam2={
9.6691f, -7.6405f, 0.6817f 
};
*uParam3=159.156f;
return 1;
break;
}
break;
case 28:
switch (iParam0){
case 1:
*uParam2={
1.228f, 4.044f, 0.7665f 
};
*uParam3=165f;
return 1;
break;
}
break;
case 42:
switch (iParam0){
case 1:
*uParam2={
10.2365f, -7.6073f, 6.2761f 
};
*uParam3=157.0716f;
return 1;
break;
}
break;
case 43:
switch (iParam0){
case 1:
*uParam2={
8.161f, -7.562f, 2.17f 
};
*uParam3=78f;
return 1;
break;
}
break;
case 29:
case 30:
case 44:
switch (iParam0){
case 1:
*uParam2={
10.7668f, -7.8757f, 5.5559f 
};
*uParam3=144.6939f;
return 1;
break;
}
break;
case 45:
switch (iParam0){
case 1:
*uParam2={
10.6257f, -9.4927f, 5.5876f 
};
*uParam3=257.4583f;
return 1;
break;
}
break;
case 46:
return func_79(iParam0, 26, uParam2, uParam3);
break;
case 47:
switch (iParam0){
case 2:
case 3:
*uParam2={
8.4451f, 3.1568f, 1.47f 
};
*uParam3=159f;
return 1;
break;
}
break;
case 48:
case 68:
switch (iParam0){
case 2:
*uParam2={
9.0477f, -7.9397f, 0.6817f 
};
*uParam3=88.5686f;
return 1;
break;
}
break;
case 49:
switch (iParam0){
case 2:
*uParam2={
0f, 0f, 0f 
};
*uParam3=0f;
return 0;
break;
}
break;
case 50:
case 69:
switch (iParam0){
case 2:
*uParam2={
21.7f, 9f, 1.7029f 
};
*uParam3=0f;
return 1;
break;
}
break;
case 51:
switch (iParam0){
case 2:
*uParam2={
1.3278f, 1.534f, 0f 
};
*uParam3=159.72f;
return 1;
break;
}
break;
case 52:
case 67:
switch (iParam0){
case 2:
*uParam2={
-3.0265f, 1.7627f, 0.1273f 
};
*uParam3=338.5f;
return 1;
break;
}
break;
case 53:
switch (iParam0){
case 2:
*uParam2={
15.2374f, 8.723f, 1.4495f 
};
*uParam3=205.677f;
return 1;
break;
}
break;
case 54:
case 70:
switch (iParam0){
case 2:
*uParam2={
28.7f, 8.8241f, 0.6f 
};
*uParam3=39f;
return 1;
break;
}
break;
case 55:
case 71:
switch (iParam0){
case 2:
*uParam2={
Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) 
};
*uParam3=94.2086f;
return 1;
break;
}
break;
case 64:
switch (iParam0){
case 2:
*uParam2={
Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) 
};
*uParam3=336f;
return 1;
break;
}
break;
case 56:
switch (iParam0){
case 2:
case 0:
*uParam2={
5.5782f, 5.7755f, 3.84f 
};
*uParam3=311.4f;
return 1;
break;
}
break;
case 57:
switch (iParam0){
case 2:
case 0:
*uParam2={
5.5782f, 5.7755f, 3.8418f 
};
*uParam3=306.6f;
return 1;
break;
}
break;
case 58:
switch (iParam0){
case 2:
case 1:
*uParam2={
5.8092f, 5.7965f, 3.85f 
};
*uParam3=337.4f;
return 1;
break;
}
break;
case 59:
case 72:
switch (iParam0){
case 2:
*uParam2={
13.3221f, 0.0684f, 0.6817f 
};
*uParam3=277.317f;
return 1;
break;
}
break;
case 60:
if(func_79(iParam0, 59, uParam2, uParam3)){
*uParam2={
*uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) 
};
*uParam3=(*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
return 1;
}
break;
case 61:
case 62:
case 63:
switch (iParam0){
case 2:
*uParam2={
-2.235f, 1.725f, 4.5877f 
};
*uParam3=172.714f;
return 1;
break;
}
break;
case 65:
switch (iParam0){
case 2:
*uParam2={
Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) 
};
*uParam3=((-158f - 222.8314f) + 360f);
return 1;
break;
}
break;
case 66:
switch (iParam0){
case 2:
*uParam2={
Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) 
};
*uParam3=((-164f - 222.8314f) + 360f);
return 1;
break;
}
break;
case 73:
switch (iParam0){
case 2:
*uParam2={
7.394f, 5.368f, 1.451f 
};
*uParam3=235.0656f;
return 1;
break;
}
break;
case 74:
switch (iParam0){
case 2:
case 1:
*uParam2={
1.0704f, -1.4624f, 0.999f 
};
*uParam3=157.44f;
return 1;
break;
}
break;
case 75:
case 84:
switch (iParam0){
case 3:
*uParam2={
14.8186f, 6.8253f, 0.5f 
};
*uParam3=87.3368f;
return 1;
break;
}
break;
case 76:
case 78:
case 85:
switch (iParam0){
case 3:
*uParam2={
13.6486f, 6.2253f, 0.45f 
};
*uParam3=262.32f;
return 1;
break;
}
break;
case 77:
if(func_79(iParam0, 47, uParam2, uParam3)){
*uParam2={
*uParam2 + Vector(0f, 0f, 0f) 
};
*uParam3=(*uParam3 + 0f);
return 1;
}
break;
case 79:
case 86:
switch (iParam0){
case 3:
*uParam2={
16.319f, -1.375f, 0.6817f 
};
*uParam3=334.126f;
return 1;
break;
}
break;
case 80:
switch (iParam0){
case 3:
*uParam2={
-0.39f, 3.27f, 0f 
};
*uParam3=154.126f;
return 1;
break;
}
break;
case 81:
switch (iParam0){
case 3:
*uParam2={
15.0213f, 6.9622f, 1.39f 
};
*uParam3=142.889f;
return 1;
break;
}
break;
case 82:
case 83:
switch (iParam0){
case 3:
*uParam2={
15.128f, 6.842f, 0.4524f 
};
*uParam3=54f;
return 1;
break;
}
break;
case 87:
switch (iParam0){
case 4:
*uParam2={
-10.9019f, -23.8349f, -2.1f 
};
*uParam3=339f;
return 1;
break;
}
break;
case 88:
switch (iParam0){
case 4:
*uParam2={
-10.9937f, -24.9005f, -2.18f 
};
*uParam3=314.2132f;
return 1;
break;
}
break;
case 89:
switch (iParam0){
case 4:
*uParam2={
31.7401f, -1.0943f, 0.6822f 
};
*uParam3=147f;
return 1;
break;
}
break;
case 90:
switch (iParam0){
case 4:
*uParam2={
-27.1728f, -3.75f, -1.626f 
};
*uParam3=(147f + 90f);
return 1;
break;
}
break;
case 91:
switch (iParam0){
case 4:
*uParam2={
14.7722f, -10.9336f, -0.537f 
};
*uParam3=110.8505f;
return 1;
break;
}
break;
case 92:
switch (iParam0){
case 4:
*uParam2={
-17.2536f, 2.451f, -0.6f 
};
*uParam3=0f;
return 1;
break;
}
break;
case 93:
switch (iParam0){
case 4:
*uParam2={
23.9716f, -20.3533f, -3.18f 
};
*uParam3=324f;
return 1;
break;
}
break;
case 94:
switch (iParam0){
case 5:
*uParam2={
3.1416f, -2.0799f, -0.0145f 
};
*uParam3=33f;
return 1;
break;
}
break;
case 95:
switch (iParam0){
case 5:
*uParam2={
3.2746f, -4.1995f, -0.0144f 
};
*uParam3=69f;
return 1;
break;
}
break;
case 96:
case 98:
switch (iParam0){
case 5:
*uParam2={
2.983f, -4.094f, 0.4629f 
};
*uParam3=33f;
return 1;
break;
}
break;
case 97:
switch (iParam0){
case 5:
*uParam2={
5.5235f, 2.9133f, 0.7288f 
};
*uParam3=71f;
return 1;
break;
}
break;
case 99:
switch (iParam0){
case 6:
*uParam2={
Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) 
};
*uParam3=(84.7009f - 188.5817f);
return 1;
break;
case 7:
*uParam2={
Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) 
};
*uParam3=(90.6417f - 188.5817f);
return 1;
break;
}
break;
case 100:
switch (iParam0){
case 10:
*uParam2={
2.0126f, 0.3422f, -0.0086f 
};
*uParam3=354f;
return 1;
break;
}
break;
case 101:
switch (iParam0){
case 10:
*uParam2={
1.2931f, 1.4476f, 1.0127f 
};
*uParam3=61.7525f;
return 1;
break;
}
break;
case 102:
case 103:
switch (iParam0){
case 10:
*uParam2={
0.0158f, 1.4182f, 0.9913f 
};
*uParam3=119.008f;
return 1;
break;
}
break;
case 104:
switch (iParam0){
case 10:
*uParam2={
-3.467f, 0.074f, 0f 
};
*uParam3=30f;
return 1;
break;
}
break;
case 105:
switch (iParam0){
case 10:
*uParam2={
-2.1014f, -5.4089f, -0.013f 
};
*uParam3=123.753f;
return 1;
break;
}
break;
case 106:
switch (iParam0){
case 10:
*uParam2={
-2.802f, -6.3295f, -0.01f 
};
*uParam3=42.757f;
return 1;
break;
}
break;
case 107:
switch (iParam0){
case 8:
*uParam2={
-2.156f, -4.9564f, 1.4886f 
};
*uParam3=136.309f;
return 1;
break;
}
break;
case 108:
switch (iParam0){
case 8:
*uParam2={
7.2656f, 3.022f, -0.9061f 
};
*uParam3=92.8891f;
return 1;
break;
}
break;
case 109:
switch (iParam0){
case 8:
*uParam2={
0.5066f, 1.6992f, 0.0168f 
};
*uParam3=115.77f;
return 1;
break;
}
break;
case 110:
case 111:
switch (iParam0){
case 8:
*uParam2={
-0.2121f, -6.2791f, -0.0089f 
};
*uParam3=114.3391f;
return 1;
break;
}
break;
case 116:
switch (iParam0){
case 9:
case 11:
*uParam2={
8.2458f, -0.7136f, -0.2503f 
};
*uParam3=252.2687f;
return 1;
break;
}
break;
case 117:
switch (iParam0){
case 9:
case 11:
*uParam2={
2.334f, 1.6889f, 0.586f 
};
*uParam3=109f;
return 1;
break;
}
break;
case 112:
switch (iParam0){
case 9:
*uParam2={
-0.6331f, 1.2093f, -0.0086f 
};
*uParam3=137.1861f;
return 1;
break;
}
break;
case 113:
switch (iParam0){
case 9:
*uParam2={
-3.887f, -0.166f, 0f 
};
*uParam3=30f;
return 1;
break;
}
break;
case 114:
switch (iParam0){
case 9:
*uParam2={
3.5179f, 9.1355f, -1f 
};
*uParam3=141.79f;
return 1;
break;
}
break;
case 115:
switch (iParam0){
case 9:
*uParam2={
Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) 
};
*uParam3=121.6591f;
return 1;
break;
}
break;
case 118:
switch (iParam0){
case 10:
*uParam2={
10.2823f, 2.2595f, -1.0742f 
};
*uParam3=(170.2796f - 180f);
return 1;
break;
}
break;
case 119:
switch (iParam0){
case 10:
*uParam2={
1.077f, -5.1446f, 0.9904f 
};
*uParam3=107.1399f;
return 1;
break;
}
break;
case 120:
switch (iParam0){
case 10:
*uParam2={
-12.903f, -6.623f, -0.0406f 
};
*uParam3=63.48f;
return 1;
break;
}
break;
case 121:
switch (iParam0){
case 10:
*uParam2={
10.5514f, 5.393f, -0.0998f 
};
*uParam3=327.483f;
return 1;
break;
}
break;
case 122:
switch (iParam0){
case 11:
*uParam2={
0.9794f, -0.3043f, 0f 
};
*uParam3=179.7612f;
return 1;
break;
}
break;
case 123:
switch (iParam0){
case 11:
*uParam2={
11.9759f, 1f, -1.0728f 
};
*uParam3=238.9422f;
return 1;
break;
}
break;
case 124:
switch (iParam0){
case 11:
case 8:
*uParam2={
-0.576f, 1.671f, 0.601f 
};
*uParam3=296f;
return 1;
break;
}
break;
case 125:
switch (iParam0){
case 12:
*uParam2={
-0.6532f, 0.9556f, -0.0087f 
};
*uParam3=121.0556f;
return 1;
break;
}
break;
case 126:
switch (iParam0){
case 13:
*uParam2={
-0.18f, -4.173f, 0.9981f 
};
*uParam3=216.61f;
return 1;
break;
}
break;
case 127:
switch (iParam0){
case 13:
*uParam2={
6.5937f, 0.3521f, 1f 
};
*uParam3=119.4f;
return 1;
break;
}
break;
case 128:
switch (iParam0){
case 13:
if(Global_113648.f_18535[2]==299){
*uParam2={
Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) 
};
*uParam3=(34.661f - 90.6729f);
return 1;
}elseif(((Global_113648.f_18535[2]==300 || Global_113648.f_18535[2]==301) || Global_113648.f_18535[2]==302) || Global_113648.f_18535[2]==303){
*uParam2={
Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) 
};
*uParam3=(32f - 90.6729f);
return 1;
}
if(func_80()){
*uParam2={
Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) 
};
*uParam3=(34.661f - 90.6729f);
return 1;
}else{
*uParam2={
Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) 
};
*uParam3=(32f - 90.6729f);
return 1;
}
break;
}
break;
case 129:
switch (iParam0){
case 13:
*uParam2={
Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) 
};
*uParam3=(102f - 90.6729f);
return 1;
break;
}
break;
case 130:
switch (iParam0){
case 13:
*uParam2={
-2.8352f, 0.0552f, 0f 
};
*uParam3=334.44f;
return 1;
break;
}
break;
case 131:
switch (iParam0){
case 13:
if(func_79(iParam0, 130, uParam2, uParam3)){
*uParam2={
*uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) 
};
*uParam3=(*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
return 1;
}
break;
}
break;
case 132:
switch (iParam0){
case 13:
*uParam2={
-7.213f, -1.4536f, 0.9981f 
};
*uParam3=42.6f;
return 1;
break;
}
break;
case 133:
switch (iParam0){
case 13:
*uParam2={
Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) 
};
*uParam3=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
return 1;
break;
}
break;
case 134:
switch (iParam0){
case 13:
*uParam2={
5.24f, 6.217f, 0.998f 
};
*uParam3=315.72f;
return 1;
break;
}
break;
case 135:
switch (iParam0){
case 13:
*uParam2={
6.6447f, 0.7635f, 1.0507f 
};
*uParam3=296.683f;
return 1;
break;
}
break;
case 136:
switch (iParam0){
case 13:
*uParam2={
3.968f, -1.04f, 0f 
};
*uParam3=214.92f;
return 1;
break;
case 14:
*uParam2={
4.617f, -1.1314f, 0f 
};
*uParam3=39.4085f;
return 1;
break;
}
break;
case 137:
case 138:
*uParam2={
0f, 0f, 0f 
};
*uParam3=0f;
return 0;
break;
case 140:
case 141:
*uParam2={
0f, 0f, 0f 
};
*uParam3=0f;
return 0;
break;
default:
*uParam2={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f 
};
*uParam3=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
return 0;
break;
}
*uParam2={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f 
};
*uParam3=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
return 0;
}

int func_80(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_81(int iParam0, var uParam1, var uParam2){
switch (iParam0){
case 11:
*uParam1={
115.1569f, -1286.684f, 28.2613f 
};
*uParam2=111f;
return 1;
break;
case 8:
*uParam1={
-90.0089f, -1324.195f, 28.3203f 
};
*uParam2=194.1887f;
return 1;
break;
case 9:
return func_81(8, uParam1, uParam2);
break;
case 10:
return func_81(8, uParam1, uParam2);
break;
case 13:
*uParam1={
-807.2979f, -48.4004f, 36.8173f 
};
*uParam2=201.6328f;
return 1;
break;
case 14:
*uParam1={
1432.34f, -1887.383f, 70.5768f 
};
*uParam2=350.0509f;
return 1;
break;
case 15:
*uParam1={
1666.204f, 1967.25f, 143.3213f 
};
*uParam2=0.7896f;
return 1;
break;
case 12:
*uParam1={
-1440.22f, -127.02f, 50f 
};
*uParam2=42f;
return 1;
break;
case 16:
*uParam1={
135.055f, -1759.64f, 27.8957f 
};
*uParam2=-129f;
return 1;
break;
case 17:
*uParam1={
687.6992f, -1744.03f, 28.3624f 
};
*uParam2=267.1409f;
return 1;
break;
case 18:
*uParam1={
56.5117f, -744.6122f, 43.1356f 
};
*uParam2=340.0526f;
return 1;
break;
case 19:
*uParam1={
506.485f, -1884.967f, 24.764f 
};
*uParam2=22.9566f;
return 1;
break;
case 20:
*uParam1={
1555.958f, 953.6136f, 77.2063f 
};
*uParam2=152.8118f;
return 1;
break;
case 21:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 22:
*uParam1={
220.72f, -64.4177f, 68.2922f 
};
*uParam2=(250.4535f - 360f);
return 1;
break;
case 74:
*uParam1={
2048.07f, 3840.84f, 34.2238f 
};
*uParam2=119.603f;
return 1;
break;
case 23:
*uParam1={
-464.22f, -1592.98f, 38.73f 
};
*uParam2=168f;
return 1;
break;
case 24:
*uParam1={
(744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f 
};
*uParam2=51.7279f;
return 1;
break;
case 67:
*uParam1={
-9f, 508.1f, 173.6278f 
};
*uParam2=151.2504f;
return 1;
break;
case 25:
*uParam1={
72.2278f, -1464.68f, 28.2915f 
};
*uParam2=156.8827f;
return 1;
break;
case 27:
*uParam1={
763f, -906f, 24.2312f 
};
*uParam2=7.2736f;
return 1;
break;
case 26:
*uParam1={
257.9167f, -1120.786f, 28.3684f 
};
*uParam2=97.2736f;
return 1;
break;
case 28:
*uParam1={
422.5858f, -978.6332f, 69.7073f 
};
*uParam2=4f;
return 1;
break;
case 29:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 30:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 31:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 32:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 33:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 34:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 35:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 36:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 37:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 58:
*uParam1={
294.8521f, 882.9366f, 197.8527f 
};
*uParam2=162.693f;
return 1;
break;
case 59:
*uParam1={
-1771.802f, 794.4316f, 138.4211f 
};
*uParam2=128.9946f;
return 1;
break;
case 60:
*uParam1={
1495.595f, -1848.821f, 70.2075f 
};
*uParam2=32.2721f;
return 1;
break;
case 38:
*uParam1={
2897.554f, 4032.241f, 50.1419f 
};
*uParam2=192.8091f;
return 1;
break;
case 39:
*uParam1={
1973.355f, 3818.204f, 32.005f 
};
*uParam2=32f;
return 1;
break;
case 40:
*uParam1={
1973.355f, 3818.204f, 32.005f 
};
*uParam2=32f;
return 1;
break;
case 41:
*uParam1={
1397f, 3725.8f, 33.0673f 
};
*uParam2=-3.7534f;
return 1;
break;
case 42:
*uParam1={
Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) 
};
*uParam2=90f;
return 1;
break;
case 43:
*uParam1={
709.0244f, -2916.479f, 5.0589f 
};
*uParam2=355.326f;
return 1;
break;
case 44:
*uParam1={
643.5248f, -2917.325f, 5.1337f 
};
*uParam2=334.1068f;
return 1;
break;
case 45:
*uParam1={
595.2742f, -2819.183f, 5.0559f 
};
*uParam2=46.8853f;
return 1;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 47:
*uParam1={
314.4171f, 965.207f, 208.4024f 
};
*uParam2=165.9421f;
return 1;
break;
case 49:
*uParam1={
3321.537f, 4975.455f, 25.9097f 
};
*uParam2=221.228f;
return 1;
break;
case 48:
*uParam1={
-111.1318f, 6316.479f, 30.4904f 
};
*uParam2=(42f + 180f);
return 1;
break;
case 50:
*uParam1={
-731.3261f, 106.68f, 54.7169f 
};
*uParam2=98.9764f;
return 1;
break;
case 51:
*uParam1={
-1257.5f, -526.9999f, 30.2361f 
};
*uParam2=220.9554f;
return 1;
break;
case 52:
*uParam1={
736.9869f, -2050.678f, 28.2718f 
};
*uParam2=83.9922f;
return 1;
break;
case 66:
*uParam1={
262.5499f, -2540.15f, 4.8433f 
};
*uParam2=-64.1366f;
return 1;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 55:
*uParam1={
-315.7789f, 6201.355f, 30.4322f 
};
*uParam2=127.7547f;
return 1;
break;
case 56:
*uParam1={
118.0988f, -1264.916f, 32.3637f 
};
*uParam2=-63f;
return 1;
break;
case 57:
*uParam1={
37.5988f, -1351.52f, 28.2954f 
};
*uParam2=90.0339f;
return 1;
break;
case 61:
*uParam1={
-558.2693f, 261.1167f, 82.07f 
};
*uParam2=84.6231f;
return 1;
break;
case 62:
*uParam1={
-196.9999f, 507.9999f, 132.477f 
};
*uParam2=99.6049f;
return 1;
break;
case 63:
*uParam1={
1312.01f, -1645.87f, 51.2f 
};
*uParam2=120f;
return 1;
break;
case 68:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 69:
*uParam1={
-818.7374f, 6.4824f, 41.2432f 
};
*uParam2=211.8223f;
return 1;
break;
case 64:
*uParam1={
2091.258f, 4714.852f, 40.1936f 
};
*uParam2=136.0867f;
return 1;
break;
case 54:
*uParam1={
1762.59f, 3247.212f, 40.735f 
};
*uParam2=27.0648f;
return 1;
break;
case 65:
*uParam1={
1764.013f, 3252.902f, 40.735f 
};
*uParam2=27.0648f;
return 1;
break;
case 70:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 71:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 72:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
case 73:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
return 1;
break;
default:
break;
}
return 0;
}


bool func_82(var uParam0){
int iVar0;
struct<3> Var1;
float fVar2;
int iVar3;
struct<3> Var4;
float fVar5;
iVar0=Global_113648.f_2365.f_539.f_4323;
Var1={
Global_113648.f_2365.f_539.f_2300[iVar0 /*3*/] 
};
if(func_83(Var1, 0f, 0f, 0f, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
}
*uParam0=5;
fVar2=9999999f;
iVar3=0;
while (iVar3 < 5){
if(MISC::IS_BIT_SET(Global_113648.f_7231.f_11[iVar3], 0)){
Var4={
Global_95884[iVar3 /*9*/].f_3 
};
fVar5=vdist(Var1, Var4);
if(fVar5 > 150f){
if(fVar5 < fVar2){
*uParam0=iVar3;
fVar2=fVar5;
}}}
iVar3++;
}
return *uParam0 !=5;
}


bool func_83(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_84(){
func_201();
func_85();
}


void func_85(){
int iVar0;
int iVar1;
iVar0=0;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
switch (iVar1){
case 0:
func_199();
break;
case 1:
func_195();
break;
case 2:
func_194();
break;
case 3:
func_192();
break;
case 4:
func_191();
break;
case 5:
func_190();
break;
case 6:
func_189();
break;
case 7:
func_188();
break;
case 8:
func_185();
break;
case 9:
func_183();
break;
case 10:
func_182();
break;
case 11:
func_181();
break;
case 12:
func_180();
break;
case 13:
func_179();
break;
case 14:
func_175();
break;
case 15:
func_174();
break;
case 16:
func_173();
break;
case 17:
func_172();
break;
case 18:
func_171();
break;
case 19:
func_170();
break;
case 20:
func_166();
break;
case 21:
func_164();
break;
case 22:
func_162();
break;
case 23:
func_161();
break;
case 24:
func_160();
break;
case 25:
func_157();
break;
case 26:
func_155();
break;
case 27:
func_150();
break;
case 28:
func_142();
break;
case 29:
func_136();
break;
case 30:
func_133();
break;
case 31:
func_86();
break;
default:
break;
}
wait(0);
iVar0++;
}}


void func_86(){
int iVar0;
iVar0=31;
func_132(iVar0);
func_131();
func_130(-1, 0);
func_129(0, 1, 0);
func_129(1, 1, 0);
func_129(2, 0, 0);
func_128(161, 1);
func_127(62, -2, 161, -1, -1);
func_126(0);
func_125(153, 0);
func_124(-1577577773);
func_123(24, 4, -643694497, -1);
func_123(24, 4, -278713375, -1);
func_122(58, 1, 0);
func_129(0, 0, 0);
func_129(1, 0, 0);
func_129(2, 1, 0);
func_122(117, 1, 0);
func_121(2, 1, 1);
func_120(192);
func_125(115, 0);
func_119(3, 1, 1, 0);
func_118(35, 1);
func_119(4, 1, 1, 0);
func_117(2, 1);
func_118(6, 1);
func_116(20, 1);
func_116(26, 1);
func_113(joaat("weapon_pumpshotgun"), 1);
func_112(105, 0, 0);
func_119(179, 1, 1, 0);
func_119(174, 0, 1, 0);
func_119(178, 0, 1, 0);
func_119(175, 0, 1, 0);
func_119(176, 0, 1, 0);
func_119(177, 0, 1, 0);
func_119(173, 1, 1, 0);
func_118(36, 0);
func_111(4, 99, 5, 2107010167, 37500, 10000, -1, 8, -1, 0);
func_120(173);
func_125(27, 0);
func_109(31, 1);
func_120(208);
func_120(229);
func_108(29, 1);
func_107(23, 0, 0);
func_120(167);
func_106(4);
func_105(1, -2, -1, -2);
func_104(54, 0);
func_120(223);
func_128(162, 1);
func_119(78, 1, 1, 0);
func_127(63, -2, 162, -1, -1);
func_125(87, 0);
func_125(99, 0);
func_103(4, 20, 1, -815326385, 20000, 10000, -1, 100, -1, 0, 0);
func_111(7, 96, 6, 2021846885, 220000, 10000, -1, 0, -1, 0);
func_125(161, 0);
func_125(28, 0);
func_120(224);
func_102("AF_Intro_T_Sandy", 1424);
func_113(joaat("weapon_sniperrifle"), 1);
func_113(joaat("weapon_molotov"), 1);
func_111(7, 97, 6, 1511064644, 120000, 10000, -1, 0, -1, 0);
func_101(4, 0);
func_109(25, 1);
func_107(214, 0, 0);
func_120(170);
func_102("controller_Trafficking", 1424);
func_104(55, 0);
func_128(163, 1);
func_127(64, -2, 163, -1, -1);
func_100(131, 2, 0);
func_122(81, 0, 0);
func_119(38, 1, 1, 0);
func_119(39, 1, 1, 0);
func_119(40, 1, 1, 0);
func_119(41, 1, 1, 0);
func_119(42, 1, 1, 0);
func_119(43, 1, 1, 0);
func_119(44, 1, 1, 0);
func_119(45, 1, 1, 0);
func_119(46, 1, 1, 0);
func_119(47, 1, 1, 0);
func_119(37, 1, 1, 0);
func_121(3, 1, 1);
func_121(2, 1, 0);
func_118(7, 1);
func_118(6, 0);
func_122(59, 1, 0);
func_129(0, 1, 1);
func_129(1, 1, 1);
func_98("AM_H_SWTCH6", 7500, 2, 7, 0, 0);
func_122(58, 0, 0);
func_109(54, 0);
func_113(joaat("weapon_stickybomb"), 1);
func_96(2, 45, 12);
func_111(7, 97, 6, 1217225025, 1100000, 10000, -1, 0, -1, 0);
func_125(59, 0);
func_125(60, 0);
func_125(61, 0);
func_95(-643694497);
func_95(-278713375);
func_123(20, 4, 1089542219, -1);
func_103(4, 20, 1, 152157591, 220000, 20000, 11, 0, -1, 0, 0);
func_103(4, 20, 5, 772720529, 70000, 10000, 38, 9, -1, 0, 0);
func_120(175);
func_119(192, 1, 1, 0);
func_119(193, 1, 1, 0);
func_119(191, 1, 1, 0);
func_120(174);
func_120(206);
func_107(216, 0, 0);
func_120(172);
func_120(217);
func_120(183);
func_100(31, 0, 0);
func_93(1, 12, 1, 15000, 5000, 1595158098, -1, -1, 75, -1, 64);
func_93(2, 12, 1, 15000, 5000, -420969532, -1, -1, 75, -1, 64);
func_125(29, 0);
func_120(225);
func_109(37, 1);
func_120(211);
func_116(42, 1);
func_101(12, 0);
func_104(56, 0);
func_128(164, 1);
func_119(135, 0, 1, 0);
func_119(136, 0, 1, 0);
func_119(137, 0, 1, 0);
func_119(138, 0, 1, 0);
func_119(141, 0, 1, 0);
func_119(142, 0, 1, 0);
func_119(144, 0, 1, 0);
func_119(139, 0, 1, 0);
func_119(140, 0, 1, 0);
func_119(143, 0, 1, 0);
func_119(147, 0, 1, 0);
func_119(148, 0, 0, 0);
func_127(65, -2, 164, -1, -1);
func_119(147, 1, 1, 0);
func_119(148, 1, 1, 0);
func_119(145, 2, 1, 0);
func_121(4, 1, 1);
func_121(3, 0, 0);
func_118(7, 0);
func_118(8, 1);
func_122(119, 1, 0);
func_95(-805704433);
func_123(19, 4, -835252192, -1);
func_91(32, 2);
func_119(65, 0, 1, 0);
func_119(66, 0, 1, 0);
func_119(78, 0, 1, 0);
func_109(27, 1);
func_120(207);
func_106(15);
func_88();
func_87(iVar0);
}


void func_87(int iParam0){
if(!iParam0 < 32){
return;
}
if(Global_78828.f_12526[iParam0 /*2*/]==-1){
return;
}
if(!Global_78828.f_12526[iParam0 /*2*/].f_1==-1){
return;
}
if(Global_78828.f_12526[iParam0 /*2*/]==Global_78828.f_12591){
Global_78828.f_12526[iParam0 /*2*/]=-1;
return;
}
Global_78828.f_12526[iParam0 /*2*/].f_1=(Global_78828.f_12591 - 1);
if(Global_113648.f_9087.f_2[iParam0 /*3*/].f_1==-1){
Global_113648.f_9087.f_2[iParam0 /*3*/].f_1=Global_78828.f_12526[iParam0 /*2*/];
}}


void func_88(){
int iVar0;
iVar0=12;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1909997983;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=-1;
func_89(iVar0);
}


void func_89(int iParam0){
Global_78828.f_12591++;
if(!iParam0==12){
Global_78828.f_12592[iParam0]++;
}}


void func_90(int iParam0){
if(Global_78828.f_12591 >=1900){
return;
}
switch (iParam0){
case 12:
case 0:
break;
case 1:
if(Global_78828.f_12592[iParam0] >=870){
return;
}
break;
case 2:
if(Global_78828.f_12592[iParam0] >=280){
return;
}
break;
case 7:
if(Global_78828.f_12592[iParam0] >=169){
return;
}
break;
case 8:
if(Global_78828.f_12592[iParam0] >=10){
return;
}
break;
case 3:
if(Global_78828.f_12592[iParam0] >=1){
return;
}
break;
case 4:
if(Global_78828.f_12592[iParam0] >=53){
return;
}
break;
case 5:
if(Global_78828.f_12592[iParam0] >=1){
return;
}
break;
case 6:
if(Global_78828.f_12592[iParam0] >=1){
return;
}
break;
default:
break;
}}


void func_91(int iParam0, int iParam1){
int iVar0;
iVar0=2;
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
return;
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=749713072;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_92(Global_78828.f_12592[iVar0], iParam1, iParam0);
func_89(iVar0);
}


void func_92(int iParam0, int iParam1, int iParam2){
Global_78828.f_3590[iParam0 /*2*/]=iParam1;
Global_78828.f_3590[iParam0 /*2*/].f_1=iParam2;
}


void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
int iVar0;
iVar0=7;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1289835772;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_94(Global_78828.f_12592[iVar0], iParam5, iParam6, iParam0, iParam1, iParam2, iParam3, iParam4, iParam10, iParam7, iParam8, iParam9);
func_89(iVar0);
}


void func_94(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11){
Global_78828.f_4824[iParam0 /*11*/]=iParam1;
Global_78828.f_4824[iParam0 /*11*/].f_1=iParam2;
Global_78828.f_4824[iParam0 /*11*/].f_2=uParam3;
Global_78828.f_4824[iParam0 /*11*/].f_3=uParam4;
Global_78828.f_4824[iParam0 /*11*/].f_4=uParam5;
Global_78828.f_4824[iParam0 /*11*/].f_5=iParam6;
Global_78828.f_4824[iParam0 /*11*/].f_6=iParam7;
Global_78828.f_4824[iParam0 /*11*/].f_7=iParam8;
Global_78828.f_4824[iParam0 /*11*/].f_8=iParam9;
Global_78828.f_4824[iParam0 /*11*/].f_9=iParam10;
Global_78828.f_4824[iParam0 /*11*/].f_10=iParam11;
}


void func_95(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-885022960;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_96(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0 > 2){}
if(iParam1 <=0){}
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1845155857;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, 0);
func_89(iVar0);
}


void func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_78828.f_109[iParam0 /*4*/]=iParam1;
Global_78828.f_109[iParam0 /*4*/].f_1=iParam2;
Global_78828.f_109[iParam0 /*4*/].f_2=iParam3;
Global_78828.f_109[iParam0 /*4*/].f_3=iParam4;
}


void func_98(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
struct<8> Var1;
int iVar2;
iVar0=4;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-2146402779;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
StringCopy(&Var1, sParam0, 32);
iVar2=iParam2;
iVar2=(iVar2 + (iParam5 * 1000000));
func_99(Global_78828.f_12592[iVar0], Var1, iVar2, iParam1, iParam3, iParam4);
func_89(iVar0);
}


void func_99(int iParam0, char[32] cParam1, int iParam2, int iParam3, int iParam4, int iParam5){
Global_78828.f_4160[iParam0 /*12*/]={
cParam1 
};
Global_78828.f_4160[iParam0 /*12*/].f_8=iParam2;
Global_78828.f_4160[iParam0 /*12*/].f_9=iParam3;
Global_78828.f_4160[iParam0 /*12*/].f_10=iParam4;
Global_78828.f_4160[iParam0 /*12*/].f_11=iParam5;
}


void func_100(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=1;
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
return;
}
iVar1=0;
if(bParam2){
iVar1=1;
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=744218195;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam1, iParam0, iVar1, 0);
func_89(iVar0);
}


void func_101(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
func_90(iVar0);
iVar1=iParam0;
iVar1=(iVar1 + (iParam1 * 1000000));
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-964850613;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iVar1;
func_89(iVar0);
}


void func_102(char* sParam0, int iParam1){
int iVar0;
struct<8> Var1;
iVar0=4;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=566451265;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
StringCopy(&Var1, sParam0, 32);
func_99(Global_78828.f_12592[iVar0], Var1, iParam1, 0, 0, 0);
func_89(iVar0);
}


void func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
int iVar0;
iVar0=7;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=322211806;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_94(Global_78828.f_12592[iVar0], iParam3, iParam0, iParam1, iParam2, iParam4, iParam5, iParam9, iParam10, iParam6, iParam7, iParam8);
func_89(iVar0);
}


void func_104(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
func_90(iVar0);
iVar1=iParam0;
iVar1=(iVar1 + (iParam1 * 1000000));
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1982716178;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iVar1;
func_89(iVar0);
}


void func_105(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1309218325;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
func_89(iVar0);
}


void func_106(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1677774865;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_107(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=485486536;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam2;
func_89(iVar0);
}


void func_108(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-69665631;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam1){
iVar1=1;
}
func_92(Global_78828.f_12592[iVar0], iParam0, iVar1);
func_89(iVar0);
}


void func_109(int iParam0, bool bParam1){
int iVar0;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=939785963;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, func_110(bParam1, 1, 0), -1, -1);
func_89(iVar0);
}

int func_110(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}


void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
int iVar0;
iVar0=7;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-656046692;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_94(Global_78828.f_12592[iVar0], iParam3, iParam0, iParam1, iParam2, iParam4, iParam5, iParam9, 0, iParam6, iParam7, iParam8);
func_89(iVar0);
}


void func_112(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-436729813;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(iParam1==0){
iVar1=1;
}
iVar1=(iVar1 + (iParam2 * 1000000));
func_92(Global_78828.f_12592[iVar0], iParam0, iVar1);
func_89(iVar0);
}


void func_113(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=2088328892;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam1){
iVar1=1;
}
func_92(Global_78828.f_12592[iVar0], func_114(iParam0), iVar1);
func_89(iVar0);
}

int func_114(int iParam0){
return func_115(iParam0);
}

int func_115(int iParam0){
switch (iParam0){
case joaat("weapon_unarmed"):
return 0;
break;
case joaat("weapon_pistol"):
return 1;
break;
case joaat("weapon_combatpistol"):
return 2;
break;
case joaat("weapon_appistol"):
return 3;
break;
case joaat("weapon_pistol50"):
return 4;
break;
case joaat("weapon_smg"):
return 5;
break;
case joaat("weapon_assaultsmg"):
return 6;
break;
case joaat("weapon_microsmg"):
return 7;
break;
case joaat("weapon_assaultrifle"):
return 8;
break;
case joaat("weapon_carbinerifle"):
return 9;
break;
case joaat("weapon_advancedrifle"):
return 11;
break;
case joaat("weapon_mg"):
return 12;
break;
case joaat("weapon_combatmg"):
return 13;
break;
case -572349828:
return 14;
break;
case joaat("weapon_stickybomb"):
return 15;
break;
case joaat("weapon_grenade"):
return 16;
break;
case joaat("weapon_smokegrenade"):
return 17;
break;
case joaat("weapon_remotesniper"):
return 18;
break;
case 392730790:
return 19;
break;
case joaat("weapon_sniperrifle"):
return 20;
break;
case joaat("weapon_heavysniper"):
return 21;
break;
case joaat("weapon_pumpshotgun"):
return 22;
break;
case joaat("weapon_bullpupshotgun"):
return 23;
break;
case joaat("weapon_assaultshotgun"):
return 24;
break;
case joaat("weapon_sawnoffshotgun"):
return 25;
break;
case joaat("weapon_grenadelauncher"):
return 26;
break;
case joaat("weapon_rpg"):
return 27;
break;
case joaat("weapon_minigun"):
return 28;
break;
case -344484024:
return 29;
break;
case -1887867191:
return 30;
break;
case joaat("weapon_stungun"):
return 31;
break;
case -837150131:
return 32;
break;
case joaat("gadget_parachute"):
return 33;
break;
case joaat("weapon_knife"):
return 34;
break;
case joaat("weapon_nightstick"):
return 35;
break;
case joaat("weapon_hammer"):
return 36;
break;
case joaat("weapon_bat"):
return 37;
break;
case joaat("weapon_crowbar"):
return 38;
break;
case joaat("weapon_golfclub"):
return 39;
break;
case joaat("weapon_grenadelauncher_smoke"):
return 40;
break;
case joaat("weapon_molotov"):
return 41;
break;
case joaat("weapon_fireextinguisher"):
return 42;
break;
case joaat("weapon_petrolcan"):
return 43;
break;
case joaat("weapon_digiscanner"):
return 44;
break;
case joaat("weapon_bottle"):
return 45;
break;
case joaat("weapon_specialcarbine"):
return 46;
break;
case joaat("weapon_snspistol"):
return 47;
break;
case joaat("weapon_heavypistol"):
return 49;
break;
case joaat("weapon_bullpuprifle"):
return 48;
break;
case joaat("weapon_gusenberg"):
return 50;
break;
case joaat("weapon_dagger"):
return 51;
break;
case joaat("weapon_vintagepistol"):
return 52;
break;
case joaat("weapon_flaregun"):
return 57;
break;
case joaat("weapon_musket"):
return 53;
break;
case joaat("weapon_firework"):
return 54;
break;
case joaat("weapon_marksmanrifle"):
return 56;
break;
case joaat("weapon_heavyshotgun"):
return 55;
break;
case joaat("weapon_proxmine"):
return 60;
break;
case joaat("weapon_hominglauncher"):
return 61;
break;
case joaat("weapon_hatchet"):
return 58;
break;
case joaat("weapon_railgun"):
return 59;
break;
case joaat("weapon_combatpdw"):
return 64;
break;
case joaat("weapon_knuckle"):
return 62;
break;
case joaat("weapon_marksmanpistol"):
return 63;
break;
case joaat("weapon_machete"):
return 65;
break;
case joaat("weapon_machinepistol"):
return 68;
break;
case joaat("weapon_dbshotgun"):
return 66;
break;
case joaat("weapon_compactrifle"):
return 67;
break;
case joaat("weapon_flashlight"):
return 69;
break;
case joaat("weapon_revolver"):
return 70;
break;
case joaat("weapon_switchblade"):
return 71;
break;
case joaat("weapon_autoshotgun"):
return 72;
break;
case joaat("weapon_minismg"):
return 73;
break;
case joaat("weapon_compactlauncher"):
return 74;
break;
case joaat("weapon_battleaxe"):
return 75;
break;
case joaat("weapon_pipebomb"):
return 76;
break;
case joaat("weapon_poolcue"):
return 77;
break;
case joaat("weapon_wrench"):
return 78;
break;
case joaat("weapon_assaultrifle_mk2"):
return 8;
break;
case joaat("weapon_carbinerifle_mk2"):
return 9;
break;
case joaat("weapon_combatmg_mk2"):
return 13;
break;
case joaat("weapon_heavysniper_mk2"):
return 21;
break;
case joaat("weapon_pistol_mk2"):
return 1;
break;
case joaat("weapon_smg_mk2"):
return 5;
break;
case joaat("weapon_pumpshotgun_mk2"):
return 22;
break;
case joaat("weapon_specialcarbine_mk2"):
return 46;
break;
case joaat("weapon_snspistol_mk2"):
return 47;
break;
case joaat("weapon_marksmanrifle_mk2"):
return 56;
break;
case joaat("weapon_revolver_mk2"):
return 70;
break;
case joaat("weapon_bullpuprifle_mk2"):
return 48;
break;
case joaat("weapon_doubleaction"):
return 79;
break;
case joaat("weapon_stone_hatchet"):
return 80;
break;
case joaat("weapon_raypistol"):
return 81;
break;
case joaat("weapon_raycarbine"):
return 82;
break;
case joaat("weapon_rayminigun"):
return 83;
break;
case joaat("weapon_navyrevolver"):
return 84;
break;
case joaat("weapon_ceramicpistol"):
return 85;
break;
case joaat("weapon_combatshotgun"):
return 86;
break;
case joaat("weapon_militaryrifle"):
return 88;
break;
case joaat("weapon_gadgetpistol"):
return 87;
break;
case joaat("weapon_heavyrifle"):
return 10;
break;
case joaat("weapon_emplauncher"):
return 89;
break;
case joaat("weapon_fertilizercan"):
return 90;
break;
case joaat("weapon_stungun_mp"):
return 91;
break;
case joaat("weapon_metaldetector"):
return 92;
break;
case joaat("weapon_tacticalrifle"):
return 93;
break;
case joaat("weapon_precisionrifle"):
return 94;
break;
case joaat("weapon_pistolxm3"):
return 95;
break;
case joaat("weapon_candycane"):
return 96;
break;
case joaat("weapon_railgunxm3"):
return 97;
break;
}
return 0;
}


void func_116(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-806419157;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
if(bParam1){
iVar1=1;
}else{
iVar1=0;
}
func_92(Global_78828.f_12592[iVar0], iParam0, iVar1);
func_89(iVar0);
}


void func_117(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=424223666;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
if(!func_66(iParam0)){}
iVar1=0;
if(bParam1){
iVar1=1;
}
func_92(Global_78828.f_12592[iVar0], iParam0, iVar1);
func_89(iVar0);
}


void func_118(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-319289499;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam1){
iVar1=1;
}
func_92(Global_78828.f_12592[iVar0], iParam0, iVar1);
func_89(iVar0);
}


void func_119(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
int iVar1;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1110793538;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam2){
iVar1=1;
}
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iVar1, iParam3);
func_89(iVar0);
}


void func_120(int iParam0){
int iVar0;
iVar0=12;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=485486536;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=-1;
func_89(iVar0);
}


void func_121(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1334818538;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
if(bParam1){
MISC::SET_BIT(&iVar1, false);
}
if(bParam2){
MISC::SET_BIT(&iVar1, true);
}
func_92(Global_78828.f_12592[iVar0], iParam0, iVar1);
func_89(iVar0);
}


void func_122(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1144707570;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam1){
iVar1=1;
}
func_97(Global_78828.f_12592[iVar0], iParam0, iVar1, iParam2, -1);
func_89(iVar0);
}


void func_123(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1030591046;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam2, iParam1, iParam0, iParam3);
func_89(iVar0);
}


void func_124(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-885022960;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_125(int iParam0, int iParam1){
int iVar0;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-115271859;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_92(Global_78828.f_12592[iVar0], iParam0, iParam1);
func_89(iVar0);
}


void func_126(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=918415331;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
if(iParam4==-1){
iParam4=iParam1;
}
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-2093459088;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
Global_91469[iParam0 /*34*/].f_7=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, iParam4);
func_89(iVar0);
}


void func_128(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar0=1;
iVar1=0;
while (iVar1 < Global_78828.f_12591){
if(Global_78828.f_6825[iVar1 /*3*/]==531432813){
iVar2=Global_78828.f_6825[iVar1 /*3*/].f_2;
iVar3=Global_78828.f_109[iVar2 /*4*/];
if(iVar3==iParam0){
return;
}}
iVar1++;
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=531432813;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar4=0;
if(bParam1){
iVar4=1;
}
func_97(Global_78828.f_12592[iVar0], iParam0, iVar4, -1, -1);
func_89(iVar0);
}


void func_129(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=2;
iVar1=0;
if(bParam1){
iVar1=1;
}
iVar1=(iVar1 + (iParam2 * 1000000));
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1597354430;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
if((iParam0 !=0 && iParam0 !=1) && iParam0 !=2){}
func_92(Global_78828.f_12592[iVar0], iParam0, iVar1);
func_89(iVar0);
}


void func_130(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=2048332261;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam1){
iVar1=1;
}
func_92(Global_78828.f_12592[iVar0], iParam0, iVar1);
func_89(iVar0);
}


void func_131(){
int iVar0;
iVar0=12;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1750917831;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=-1;
func_89(iVar0);
}


void func_132(int iParam0){
if(!iParam0 < 32){
return;
}
if(!Global_78828.f_12526[iParam0 /*2*/]==-1){
return;
}
Global_78828.f_12526[iParam0 /*2*/]=Global_78828.f_12591;
}


void func_133(){
int iVar0;
iVar0=30;
func_132(iVar0);
func_131();
func_102("ambient_Solomon", 1424);
func_128(158, 1);
func_127(59, -2, 158, -1, -1);
func_125(143, 0);
func_113(joaat("weapon_remotesniper"), 1);
func_100(26, 0, 1);
func_135(55);
func_106(24);
func_101(46, 0);
func_101(24, 0);
func_104(51, 0);
func_128(159, 1);
func_127(60, -2, 159, -1, -1);
func_122(66, 1, 0);
func_104(52, 0);
func_104(53, 0);
func_105(18, -2, -1, -2);
func_128(160, 1);
func_127(61, -2, 160, -1, -1);
func_122(57, 1, 0);
func_134(0, 26, 0, 6000, 6000, 643619115, -1, 0, -1, 32);
func_120(227);
func_120(232);
func_107(229, 0, 0);
func_120(233);
func_107(230, 0, 0);
func_120(234);
func_107(231, 0, 0);
func_120(235);
func_107(232, 0, 0);
func_120(236);
func_107(233, 0, 0);
func_120(237);
func_107(234, 0, 0);
func_120(238);
func_122(57, 0, 0);
func_113(joaat("weapon_smg"), 1);
func_119(103, 1, 1, 0);
func_119(102, 1, 1, 0);
func_119(104, 1, 1, 0);
func_119(111, 1, 1, 0);
func_119(112, 1, 1, 0);
func_101(49, 0);
func_101(39, 0);
func_95(-1949184344);
func_123(29, 1, 2065444157, -1);
func_123(29, 2, 624853379, -1);
func_88();
func_87(iVar0);
}


void func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
int iVar0;
iVar0=7;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1034402456;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_94(Global_78828.f_12592[iVar0], iParam5, iParam1, iParam0, iParam2, iParam3, iParam4, iParam9, 0, iParam6, iParam7, iParam8);
if(MISC::IS_BIT_SET(iParam9, 7)){}
func_89(iVar0);
}


void func_135(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=952363713;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_136(){
int iVar0;
iVar0=29;
func_132(iVar0);
func_131();
func_134(0, 36, 1, 30000, 30000, 1632742627, -1, 0, -1, 32);
func_141(0, 0);
func_98("AM_H_SHRINK", 7500, 2, 1, 0, 0);
func_128(149, 1);
func_141(0, 1);
func_127(54, -2, 149, -1, -1);
func_104(45, 0);
func_128(150, 1);
func_141(1, 0);
func_127(55, -2, 150, -1, -1);
func_140(360000);
func_104(46, 0);
func_140(30000);
func_120(151);
func_141(2, 0);
func_103(1, 36, 1, 1516526930, 10000, 10000, -1, 0, -1, 32, 0);
func_128(152, 1);
func_130(56, 0);
func_141(2, 1);
func_139(1, 36, -2, -1, -2, 0);
func_138(56, -2, 152, -1);
func_126(0);
func_104(47, 0);
func_120(153);
func_141(3, 0);
func_103(1, 36, 1, -685399607, 10000, 10000, -1, 0, -1, 32, 0);
func_128(154, 1);
func_130(57, 0);
func_141(3, 1);
func_139(1, 36, -2, -1, -2, 1);
func_138(57, -2, 154, -1);
func_128(155, 1);
func_126(1);
func_104(48, 0);
func_104(49, 0);
func_104(50, 0);
func_128(156, 1);
func_141(4, 0);
func_127(58, -2, 156, -1, -1);
func_137(80, 157, -2, -1, 0);
func_111(1, 36, 6, -1718545517, 300000, 10000, -1, 0, -1, 0);
func_128(157, 1);
func_88();
func_87(iVar0);
}


void func_137(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1532130030;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=iParam0;
iVar1=(iVar1 + (iParam4 * 1000000));
func_97(Global_78828.f_12592[iVar0], iVar1, iParam1, iParam2, iParam3);
func_89(iVar0);
}


void func_138(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam3==-1){
iParam3=iParam1;
}
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-868169264;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
Global_91469[iParam0 /*34*/].f_7=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
func_89(iVar0);
}


void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
iVar0=7;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1370985682;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_94(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, -1, 0, -1);
func_89(iVar0);
}


void func_140(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=427205337;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
if(iParam0 < 0){
return;
}
func_89(iVar0);
}


void func_141(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
func_90(iVar0);
iVar1=iParam0;
iVar1=(iVar1 + (iParam1 * 1000000));
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=553813353;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iVar1;
func_89(iVar0);
}


void func_142(){
int iVar0;
iVar0=28;
func_132(iVar0);
func_131();
func_112(67, 0, 0);
func_112(68, 0, 0);
func_112(69, 0, 0);
func_125(96, 0);
func_102("heist_ctrl_rural", 2050);
func_130(91, 0);
func_122(37, 0, 0);
func_122(38, 0, 0);
func_122(39, 0, 0);
func_128(67, 1);
func_127(91, -2, 67, -1, -1);
func_137(37, 66, -2, -2, 0);
func_122(38, 1, 0);
func_128(66, 0);
func_149(9, 5);
func_148(2, 0, 13, -2, -1, 1, 0);
func_140(500);
func_148(2, 1, 2, -2, -1, 1, 1);
func_122(37, 0, 1);
func_122(38, 0, 1);
func_122(39, 1, 0);
func_147(2, 1, 1, 0);
func_140(501);
func_146(2, 0, 1, 40);
func_137(40, -1, -2, -2, 0);
func_122(39, 0, 1);
func_122(40, 0, 0);
func_126(0);
func_107(224, 0, 0);
func_100(12, 2, 1);
func_124(610159002);
func_93(4, 1, 0, 6000, 6000, -1451910289, -1, -1, 0, -1, 104);
func_101(7, 0);
func_103(5, 12, 1, -831144864, 30000, 10000, -1, 0, -1, 1064, 0);
func_140(3000);
func_128(68, 1);
func_127(92, -2, 68, -1, -1);
func_118(42, 1);
func_147(2, 3, 1, 0);
func_119(168, 1, 1, 0);
func_112(67, 1, 0);
func_112(68, 1, 0);
func_112(69, 1, 0);
func_144(0, 12, 0, 6000, 6000, -2116452823, -1434698871, -1141220854, 19, -1, 89, 0);
func_144(2, 12, 0, 6000, 6000, 1880611494, -1434698871, -1276059507, 19, -1, 89, 0);
func_137(41, -2, -1, -2, 0);
func_112(67, 0, 1);
func_112(68, 0, 1);
func_112(69, 0, 1);
func_143(15, 69, -2, -2);
func_104(44, 0);
func_93(7, 12, 0, 6000, 6000, -1434698871, 902928934, 67, 0, -1, 168);
func_128(69, 1);
func_119(168, 1, 1, 1);
func_127(93, -2, 69, -1, -1);
func_101(8, 0);
func_119(5, 1, 1, 0);
func_118(42, 0);
func_122(5, 1, 0);
func_113(joaat("weapon_mg"), 1);
func_113(joaat("weapon_minigun"), 1);
func_96(2, 39, 12);
func_124(-1293573249);
func_105(7, 70, -2, 70);
func_93(1, 46, 6, 300000, 10000, 406771743, -1, -1, 72, -1, 1);
func_128(70, 1);
func_140(10000);
func_125(76, 0);
func_88();
func_87(iVar0);
}


void func_143(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam3==-1){
iParam3=iParam1;
}
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1785731347;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
func_89(iVar0);
}


void func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11){
int iVar0;
iVar0=8;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=246500489;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_145(Global_78828.f_12592[iVar0], iParam5, iParam6, iParam7, iParam1, iParam0, iParam2, iParam3, iParam4, iParam11, -1, -1, -1, iParam9, iParam10, iParam8);
func_89(iVar0);
}


void func_145(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, var uParam13, var uParam14, var uParam15){
Global_78828.f_6684[iParam0 /*14*/]=uParam1;
Global_78828.f_6684[iParam0 /*14*/].f_1=uParam2;
Global_78828.f_6684[iParam0 /*14*/].f_2=uParam3;
Global_78828.f_6684[iParam0 /*14*/].f_3=uParam4;
Global_78828.f_6684[iParam0 /*14*/].f_4=uParam5;
Global_78828.f_6684[iParam0 /*14*/].f_5=uParam6;
Global_78828.f_6684[iParam0 /*14*/].f_6=uParam7;
Global_78828.f_6684[iParam0 /*14*/].f_7=uParam8;
Global_78828.f_6684[iParam0 /*14*/].f_8=uParam9;
Global_78828.f_6684[iParam0 /*14*/].f_9=iParam10;
Global_78828.f_6684[iParam0 /*14*/].f_10=iParam11;
Global_78828.f_6684[iParam0 /*14*/].f_11=uParam13;
Global_78828.f_6684[iParam0 /*14*/].f_12=uParam14;
Global_78828.f_6684[iParam0 /*14*/].f_13=uParam15;
}


void func_146(int iParam0, bool bParam1, bool bParam2, int iParam3){
int iVar0;
int iVar1;
if(iParam0 < 0 || iParam0 >=5){}
iVar0=1;
iVar1=0;
if(bParam1){
MISC::SET_BIT(&iVar1, false);
}
if(bParam2){
MISC::SET_BIT(&iVar1, 2);
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=828625388;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam3, iVar1, 0);
func_89(iVar0);
}


void func_147(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
int iVar1;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1822409727;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam2){
MISC::SET_BIT(&iVar1, 3);
}
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iVar1, iParam3);
func_89(iVar0);
}


void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
if(iParam0 < 0 || iParam0 >=5){}
if(iParam1==3 || iParam1==4){}
iVar0=7;
iVar1=0;
if(bParam5){
MISC::SET_BIT(&iVar1, false);
}
if(bParam6){
MISC::SET_BIT(&iVar1, true);
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-635831521;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_94(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3, iParam4, iVar1, 0, 0, -1, 0, -1);
func_89(iVar0);
}


void func_149(int iParam0, int iParam1){
int iVar0;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1984622930;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, -1, -1);
func_89(iVar0);
}


void func_150(){
int iVar0;
iVar0=27;
func_132(iVar0);
func_131();
func_122(115, 1, 0);
func_122(117, 1, 0);
func_119(14, 1, 1, 0);
func_122(53, 1, 0);
func_122(54, 1, 0);
func_122(55, 1, 0);
func_154(1);
func_125(57, 0);
func_121(7, 1, 0);
func_121(8, 1, 0);
func_121(9, 1, 0);
func_102("flowStartAccept", 1424);
func_128(148, 1);
func_138(53, -2, 148, -1);
func_102("flowIntroTitle", 1424);
func_100(18, 1, 0);
func_100(19, 1, 0);
func_100(43, 1, 0);
func_100(44, 1, 0);
func_100(53, 1, 0);
func_100(130, 1, 0);
func_100(36, 0, 0);
func_100(30, 0, 0);
func_100(12, 0, 0);
func_100(130, 0, 0);
func_100(130, 2, 0);
func_153(0, 1);
func_153(2, 1);
func_125(36, 0);
func_125(38, 0);
func_125(140, 0);
func_125(40, 0);
func_122(124, 1, 0);
func_122(125, 1, 0);
func_125(90, 0);
func_125(91, 0);
func_122(66, 1, 0);
func_122(115, 0, 0);
func_122(117, 0, 0);
func_122(116, 1, 0);
func_129(0, 0, 0);
func_129(1, 1, 0);
func_129(2, 0, 0);
func_152(1);
func_151(1);
func_125(114, 0);
func_137(60, -2, -1, -1, 0);
func_106(1);
func_88();
func_87(iVar0);
}


void func_151(int iParam0){
int iVar0;
if(!func_66(iParam0)){}
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-49496173;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_152(int iParam0){
int iVar0;
iVar0=0;
if((iParam0 !=0 && iParam0 !=1) && iParam0 !=2){
return;
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=213552929;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_153(int iParam0, int iParam1){
int iVar0;
iVar0=2;
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
return;
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=139009950;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_92(Global_78828.f_12592[iVar0], iParam0, iParam1);
func_89(iVar0);
}


void func_154(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
func_90(iVar0);
iVar1=0;
if(bParam0){
iVar1=1;
}
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-2093560018;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iVar1;
func_89(iVar0);
}


void func_155(){
int iVar0;
iVar0=26;
func_132(iVar0);
func_131();
func_120(136);
func_130(50, 0);
func_156(1, 17, 6, 60000, 20000, 1635046052, 0, 1, -2, 138, -2, 68, 125, 2, 16400);
func_128(137, 0);
func_138(50, 139, 138, 139);
func_128(138, 1);
func_126(0);
func_137(79, 139, -2, -1, 0);
func_103(1, 17, 6, -1207693656, 720000, 20000, -1, 82, -1, 1024, 0);
func_128(139, 1);
func_126(1);
func_104(42, 0);
func_120(140);
func_130(52, 0);
func_156(1, 15, 6, 600000, 10000, 178720519, 4, 5, -2, 142, -2, 69, 127, 3, 16400);
func_128(141, 0);
func_138(52, 143, 142, 143);
func_128(142, 1);
func_126(2);
func_123(15, 1, -1130010274, -1);
func_103(1, 15, 6, 1245740196, 720000, 20000, -1, 84, -1, 1024, 0);
func_128(143, 1);
func_126(3);
func_95(-2062910056);
func_104(43, 0);
func_128(144, 1);
func_130(51, 0);
func_156(1, 14, 6, 650000, 20000, -464957327, 2, 3, -2, 146, -2, 70, 126, 4, 16400);
func_128(145, 0);
func_138(51, 147, 146, 147);
func_128(146, 1);
func_126(4);
func_103(1, 14, 6, -149728591, 720000, 20000, -1, 83, -1, 1024, 0);
func_128(147, 1);
func_126(5);
func_88();
func_87(iVar0);
}


void func_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14){
int iVar0;
var uVar1;
if(iParam10==-1){
iParam10=iParam8;
}
iVar0=8;
uVar1=iParam14;
MISC::SET_BIT(&uVar1, 5);
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-546916353;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_145(Global_78828.f_12592[iVar0], iParam5, iParam6, iParam7, iParam0, iParam1, iParam2, iParam3, iParam4, uVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
func_89(iVar0);
}


void func_157(){
int iVar0;
iVar0=25;
func_132(iVar0);
func_131();
func_104(37, 0);
func_124(1023767);
func_124(190444893);
func_128(132, 1);
func_127(46, -2, 132, -1, -1);
func_125(156, 0);
func_129(0, 0, 0);
func_122(129, 1, 0);
func_159(0, 1, 1, 0);
func_159(0, 2, 1, 0);
func_158(1, 2, 1);
func_100(35, 2, 1);
func_96(2, 23, 12);
func_119(124, 1, 1, 0);
func_95(469005563);
func_123(14, 4, -306898819, -1);
func_123(20, 4, 675079903, -1);
func_123(35, 4, 814649774, -1);
func_93(4, 40, 6, 120000, 80000, 1801771084, -1, -1, 0, 21, 1);
func_101(2, 0);
func_104(40, 0);
func_128(133, 1);
func_127(47, -2, 133, -1, -1);
func_129(0, 1, 0);
func_159(0, 1, 0, 0);
func_106(0);
func_95(814649774);
func_95(518202687);
func_123(35, 4, 1562602199, -1);
func_123(35, 4, 1113666899, -1);
func_101(51, 0);
func_104(41, 0);
func_119(81, 1, 1, 0);
func_119(82, 0, 1, 0);
func_128(134, 1);
func_127(48, -2, 134, -1, -1);
func_119(81, 0, 1, 0);
func_119(82, 1, 1, 0);
func_158(1, 2, 0);
func_95(1801771084);
func_134(0, 30, 1, 240000, 20000, -441095892, -1, 0, -1, 1);
func_95(-2082393141);
func_95(-835252192);
func_123(19, 4, -177054098, -1);
func_101(32, 0);
func_101(50, 0);
func_104(38, 0);
func_104(39, 0);
func_93(1, 14, 0, 6000, 5000, -375893868, -1589024007, 13, 56, -1, 136);
func_103(2, 14, 0, -658009473, 6000, 5000, 13, 56, -1, 1032, 0);
func_137(50, -2, -1, -2, 0);
func_128(135, 1);
func_127(49, -2, 135, -1, -1);
func_101(25, 0);
func_101(43, 0);
func_119(26, 0, 1, 0);
func_119(34, 0, 1, 0);
func_119(123, 1, 1, 0);
func_96(0, 16, 12);
func_96(1, 11, 12);
func_95(1890717037);
func_95(-177054098);
func_124(1234461962);
func_123(26, 1, 946886745, -1);
func_123(14, 2, -1497396589, -1);
func_123(29, 1, -1766792090, -1);
func_111(4, 40, 6, -666761274, 80000, 30000, -1, 0, -1, 0);
func_102("michael4LeadOut", 1424);
func_93(1, 15, 6, 160000, 25000, 153235461, -1, -1, 0, -1, 0);
func_93(1, 17, 6, 60000, 20000, -67922520, -1, 13, 0, -1, 0);
func_88();
func_87(iVar0);
}


void func_158(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=1;
if(((iParam1 !=0 && iParam1 !=1) && iParam1 !=2) && iParam1 !=19){
return;
}
iVar1=0;
if(bParam2){
iVar1=1;
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1641341968;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam1, iParam0, iVar1, 0);
func_89(iVar0);
}


void func_159(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
int iVar1;
iVar0=1;
if(((iParam1 !=0 && iParam1 !=1) && iParam1 !=2) && iParam1 !=19){
return;
}
iVar1=0;
if(bParam2){
iVar1=1;
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1389104680;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam1, iParam0, iVar1, iParam3);
func_89(iVar0);
}


void func_160(){
int iVar0;
iVar0=24;
func_132(iVar0);
func_131();
func_104(36, 0);
func_137(51, -2, -1, -1, 0);
func_103(4, 31, 1, 251204761, 1000, 1000, -1, 0, -1, 2048, 0);
func_128(131, 1);
func_127(45, -2, 131, -1, -1);
func_119(130, 1, 1, 0);
func_119(129, 1, 1, 0);
func_119(131, 1, 1, 0);
func_119(134, 1, 1, 0);
func_119(132, 1, 1, 0);
func_119(133, 1, 1, 0);
func_122(59, 0, 0);
func_129(0, 0, 0);
func_129(2, 0, 0);
func_121(0, 0, 0);
func_121(3, 0, 0);
func_121(4, 0, 0);
func_121(1, 1, 1);
func_121(2, 1, 1);
func_118(0, 0);
func_118(1, 1);
func_118(7, 0);
func_118(6, 1);
func_118(8, 0);
func_100(31, 0, 1);
func_100(31, 2, 1);
func_95(1089542219);
func_124(152157591);
func_123(29, 1, 1906711117, -1);
func_123(26, 1, -1613846760, -1);
func_123(19, 4, 556840426, -1);
func_103(4, 24, 1, 1328243545, 220000, 20000, 10, 0, -1, 0, 0);
func_109(32, 1);
func_101(3, 0);
func_140(110000);
func_106(7);
func_88();
func_87(iVar0);
}


void func_161(){
int iVar0;
iVar0=23;
func_132(iVar0);
func_131();
func_128(130, 1);
func_127(44, -2, 130, -1, -1);
func_100(12, 0, 0);
func_96(1, 43, 12);
func_96(1, 44, 12);
func_96(1, 45, 12);
func_96(1, 46, 12);
func_125(124, 0);
func_125(192, 0);
func_98("AM_H_WARDROB", 7500, 2, 7, 0, 0);
func_125(88, 0);
func_111(7, 96, 6, 2021846885, 130000, 10000, -1, 0, -1, 0);
func_125(160, 0);
func_106(26);
func_93(1, 46, 6, 500000, 30000, -1366489923, -1, -1, 72, -1, 0);
func_134(0, 12, 0, 6000, 6000, -78001721, -1, 0, -1, 33);
func_106(20);
func_120(189);
func_120(190);
func_120(191);
func_111(1, 12, 1, 338918687, 240000, 10000, -1, 0, -1, 0);
func_88();
func_87(iVar0);
}


void func_162(){
int iVar0;
iVar0=22;
func_132(iVar0);
func_131();
func_137(42, -2, -1, -1, 0);
func_104(35, 0);
func_128(128, 1);
func_137(81, -1, -2, -1, 0);
func_128(129, 1);
func_127(43, -2, 129, -1, -1);
func_113(joaat("weapon_sawnoffshotgun"), 1);
func_113(joaat("weapon_pumpshotgun"), 1);
func_100(37, 1, 1);
func_123(37, 2, 522335044, -1);
func_125(25, 0);
func_120(221);
func_163(0);
func_101(29, 0);
func_88();
func_87(iVar0);
}


void func_163(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
func_90(iVar0);
iVar1=0;
if(bParam0){
iVar1=1;
}
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-26112892;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iVar1;
func_89(iVar0);
}


void func_164(){
int iVar0;
iVar0=21;
func_132(iVar0);
func_131();
func_103(1, 12, 1, -270587643, 240000, 10000, -1, 118, -1, 1032, 0);
func_137(15, -2, -1, -2, 0);
func_140(3000);
func_98("AM_H_PREP2A", 10000, 2, 1, 0, 0);
func_98("AM_H_PREP2B", 10000, 2, 1, 0, 0);
func_128(59, 1);
func_127(88, -2, 59, -1, -1);
func_165("AM_H_PREP2A", 0);
func_165("AM_H_PREP2B", 0);
func_147(0, 10, 1, 0);
func_143(87, 60, -2, -1);
func_134(0, 12, 0, 6000, 6000, -1052097629, -1, 0, -1, 32);
func_128(60, 1);
func_101(34, 0);
func_88();
func_87(iVar0);
}


void func_165(char* sParam0, int iParam1){
int iVar0;
struct<8> Var1;
iVar0=4;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=2110689209;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
StringCopy(&Var1, sParam0, 32);
func_99(Global_78828.f_12592[iVar0], Var1, iParam1, 0, 0, 0);
func_89(iVar0);
}


void func_166(){
int iVar0;
iVar0=20;
func_132(iVar0);
func_131();
func_119(70, 1, 1, 0);
func_119(71, 1, 1, 0);
func_119(73, 1, 1, 0);
func_119(72, 0, 1, 0);
func_119(74, 0, 1, 0);
func_112(62, 0, 0);
func_112(63, 0, 0);
func_102("heist_ctrl_jewel", 2050);
func_123(14, 1, 279793409, -1);
func_130(86, 0);
func_122(16, 0, 0);
func_122(17, 0, 0);
func_128(52, 1);
func_127(86, -2, 52, -1, -1);
func_122(16, 1, 0);
func_128(53, 0);
func_148(0, 0, 13, -2, -1, 1, 0);
func_140(500);
func_128(54, 0);
func_148(0, 2, 5, -2, -1, 1, 0);
func_122(16, 0, 1);
func_122(17, 1, 0);
func_128(55, 0);
func_148(0, 1, 6, -2, 54, 1, 1);
func_140(501);
func_146(0, 0, 1, 18);
func_137(18, -1, -2, -2, 0);
func_122(17, 0, 1);
func_122(18, 0, 0);
func_107(222, 0, 0);
func_125(26, 0);
func_126(0);
func_134(0, 1, 0, 6000, 6000, 327673956, 23, 0, -1, 0);
func_123(19, 2, -1621970384, -1);
func_103(1, 12, 1, -1608680660, 80000, 30000, -1, 0, 8, 0, 0);
func_120(222);
func_140(20000);
func_104(33, 0);
func_124(-1608680660);
func_169(7, 1, -2, 61);
func_103(1, 12, 1, 689367973, 10000, 10000, -1, 0, -1, 1064, 0);
func_119(182, 1, 1, 0);
func_119(183, 1, 1, 0);
func_119(184, 1, 1, 0);
func_140(3000);
func_98("AM_H_PREP1A", 10000, 2, 1, 0, 0);
func_98("AM_H_PREP2", 10000, 2, 1, 0, 0);
func_106(21);
func_128(56, 1);
func_127(87, -2, 56, -1, -1);
func_165("AM_H_PREP1A", 0);
func_165("AM_H_PREP2", 0);
func_147(0, 9, 1, 0);
func_119(182, 0, 1, 0);
func_119(183, 0, 1, 0);
func_119(184, 0, 1, 0);
func_119(164, 1, 1, 0);
func_103(2, 0, 1, -666454256, 15000, 5000, -1, 0, -1, 1088, 0);
func_143(88, 58, -2, -1);
func_105(12, -2, 57, -2);
func_134(0, 12, 0, 6000, 6000, -1945164276, -1, 0, -1, 32);
func_168(58, 0);
func_128(57, 1);
func_134(0, 12, 0, 6000, 6000, -1746082591, -1, 0, -1, 32);
func_128(58, 1);
func_125(117, 0);
func_104(34, 0);
func_168(65, 0);
func_128(61, 1);
func_167(21);
func_103(1, 12, 1, -1641645609, 10000, 10000, -1, 0, -1, 1064, 0);
func_140(6000);
func_98("AM_H_PREP1B", 10000, 2, 1, 0, 1);
func_98("AM_H_PREP2", 10000, 2, 1, 0, 1);
func_103(2, 0, 1, -666454256, 15000, 5000, -1, 0, -1, 1088, 1);
func_128(62, 1);
func_127(89, -2, 62, -1, -1);
func_165("AM_H_PREP1B", 1);
func_165("AM_H_PREP2", 1);
func_147(0, 11, 1, 0);
func_128(65, 0);
func_138(90, -2, 65, -1);
func_119(88, 2, 1, 0);
func_119(89, 0, 1, 0);
func_119(164, 0, 1, 0);
func_119(70, 0, 1, 0);
func_119(71, 0, 1, 0);
func_119(73, 0, 1, 0);
func_119(72, 0, 1, 1);
func_119(74, 0, 1, 1);
func_125(101, 0);
func_122(4, 1, 0);
func_122(72, 0, 0);
func_124(486824538);
func_124(-666454256);
func_95(1502097668);
func_95(279793409);
func_95(2111803439);
func_95(-1690219790);
func_95(1438498239);
func_95(-1565848713);
func_95(-1351801605);
func_95(1311040108);
func_135(54);
func_100(12, 1, 1);
func_103(2, 0, 0, -1879623490, 5000, 20000, -1, 0, -1, 40, 0);
func_100(20, 2, 0);
func_100(24, 2, 0);
func_100(39, 2, 0);
func_100(34, 2, 0);
func_100(47, 2, 0);
func_100(131, 2, 0);
func_106(31);
func_113(joaat("weapon_carbinerifle"), 1);
func_113(joaat("weapon_smokegrenade"), 1);
func_111(7, 97, 6, 1818503402, 90000, 10000, -1, 0, -1, 0);
func_88();
func_87(iVar0);
}


void func_167(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=2058194871;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_168(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
func_90(iVar0);
iVar1=iParam0;
iVar1=(iVar1 + (iParam1 * 1000000));
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1878191811;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iVar1;
func_89(iVar0);
}


void func_169(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1174602905;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
func_89(iVar0);
}


void func_170(){
int iVar0;
iVar0=19;
func_132(iVar0);
func_131();
func_109(58, 1);
func_120(219);
func_107(212, 0, 0);
func_120(220);
func_120(184);
func_137(74, -2, -1, -2, 0);
func_122(57, 1, 0);
func_101(9, 0);
func_109(24, 1);
func_120(205);
func_120(180);
func_109(46, 1);
func_120(213);
func_107(227, 0, 0);
func_120(231);
func_122(57, 0, 0);
func_128(124, 1);
func_127(40, -2, 124, -1, -1);
func_119(154, 1, 1, 0);
func_101(10, 0);
func_101(35, 0);
func_137(62, 125, -2, 125, 0);
func_111(2, 19, 6, -132533604, 80000, 30000, -1, 0, -1, 0);
func_103(2, 19, 1, -1501908698, 30000, 10000, -1, 41, -1, 0, 0);
func_128(125, 1);
func_93(2, 19, 1, 180000, 30000, 546458037, 1674644829, 9, 55, -1, 129);
func_128(239, 1);
func_104(29, 0);
func_104(30, 0);
func_128(126, 1);
func_127(41, -2, 126, -1, -1);
func_119(155, 1, 1, 0);
func_103(4, 19, 1, 943848816, 300000, 10000, -1, 66, 22, 262144, 0);
func_125(121, 0);
func_95(522335044);
func_95(-1621970384);
func_95(1031237239);
func_123(37, 2, 2097475336, -1);
func_123(19, 2, -755689100, -1);
func_119(3, 0, 1, 0);
func_118(35, 0);
func_119(4, 0, 1, 0);
func_111(1, 99, 1, 1440910066, 30000, 10000, -1, 11, -1, 0);
func_111(2, 99, 1, 2063740346, 30000, 10000, -1, 11, -1, 0);
func_111(4, 99, 1, 957098437, 30000, 10000, -1, 11, -1, 0);
func_102("controller_Races", 128);
func_120(179);
func_101(16, 0);
func_104(31, 0);
func_104(32, 0);
func_159(1, 19, 1, 0);
func_95(-108894207);
func_123(37, 2, -950205513, -1);
func_128(127, 1);
func_127(42, -2, 127, -1, -1);
func_119(161, 1, 1, 0);
func_159(1, 19, 0, 0);
func_101(38, 0);
func_95(-950205513);
func_95(-755689100);
func_95(1801771084);
func_123(19, 4, 616513703, -1);
func_123(37, 2, -703684326, -1);
func_123(19, 2, 1509435260, -1);
func_93(4, 40, 6, 80000, 80000, -1716308760, -1, -1, 0, 21, 1);
func_88();
func_87(iVar0);
}


void func_171(){
int iVar0;
iVar0=18;
func_132(iVar0);
func_131();
func_128(44, 1);
func_127(82, -2, 44, -1, -1);
func_125(106, 0);
func_101(28, 0);
func_88();
func_87(iVar0);
}


void func_172(){
int iVar0;
iVar0=17;
func_132(iVar0);
func_131();
func_128(43, 1);
func_127(81, -2, 43, -1, -1);
func_125(106, 0);
func_101(27, 0);
func_88();
func_87(iVar0);
}


void func_173(){
int iVar0;
iVar0=16;
func_132(iVar0);
func_131();
func_169(11, 8, 41, 45);
func_128(41, 1);
func_122(30, 0, 0);
func_125(102, 0);
func_137(30, -2, -1, -2, 0);
func_140(3000);
func_98("AM_H_GAUNT_R", 10000, 2, 7, 0, 0);
func_106(17);
func_106(18);
func_128(42, 1);
func_127(80, -2, 42, -1, -1);
func_125(106, 0);
func_101(26, 0);
func_168(47, 0);
func_128(45, 1);
func_103(7, 12, 1, 2073240496, 240000, 10000, -1, 0, -1, 1064, 0);
func_140(3001);
func_128(46, 1);
func_127(83, -2, 46, -1, -1);
func_125(107, 0);
func_101(26, 1);
func_128(47, 1);
func_88();
func_87(iVar0);
}


void func_174(){
int iVar0;
iVar0=15;
func_132(iVar0);
func_131();
func_104(24, 0);
func_128(29, 1);
func_127(76, -2, 29, -1, -1);
func_119(172, 1, 1, 0);
func_147(4, 1, 1, 0);
func_103(2, 45, 1, 1023767, 15000, 10000, -1, 155, -1, 0, 0);
func_103(5, 45, 1, 190444893, 15000, 10000, -1, 155, -1, 0, 0);
func_106(25);
func_104(25, 0);
func_125(98, 0);
func_102("heist_ctrl_finale", 2050);
func_95(675079903);
func_130(77, 0);
func_122(24, 0, 0);
func_122(25, 0, 0);
func_128(30, 1);
func_127(77, -2, -2, -1, -1);
func_122(24, 1, 0);
func_128(31, 0);
func_148(4, 0, 13, -2, -1, 1, 0);
func_140(500);
func_128(32, 0);
func_148(4, 2, 2, -2, -1, 1, 0);
func_122(25, 1, 0);
func_122(24, 0, 1);
func_128(33, 0);
func_148(4, 1, 10, -2, 32, 1, 1);
func_140(501);
func_146(4, 0, 1, 26);
func_137(26, -1, -2, -2, 0);
func_122(25, 0, 1);
func_122(26, 0, 0);
func_107(226, 0, 0);
func_126(0);
func_95(1509435260);
func_95(616513703);
func_106(16);
func_169(11, 8, 35, 38);
func_128(35, 1);
func_103(7, 12, 1, -1942568571, 30000, 10000, -1, 0, -1, 1064, 0);
func_140(3000);
func_128(36, 1);
func_127(78, -2, 36, -1, -1);
func_147(4, 5, 1, 0);
func_125(104, 0);
func_137(28, -2, -1, -2, 0);
func_104(26, 0);
func_104(27, 0);
func_104(28, 0);
func_107(221, 0, 0);
func_147(4, 6, 1, 0);
func_137(36, -2, -1, -2, 0);
func_128(48, 1);
func_127(84, -2, 48, -1, -1);
func_113(joaat("weapon_appistol"), 1);
func_113(joaat("weapon_pumpshotgun"), 1);
func_168(50, 0);
func_128(38, 1);
func_103(7, 12, 1, -408163515, 30000, 10000, -1, 0, -1, 1064, 0);
func_167(17);
func_167(18);
func_140(3001);
func_103(7, 12, 1, -1216150262, 600000, 30000, -1, 0, 9, 0, 0);
func_128(39, 1);
func_102("finale_heist_prepEamb", 2050);
func_127(79, -2, 39, -1, -1);
func_147(4, 7, 1, 0);
func_125(120, 0);
func_125(105, 0);
func_107(220, 0, 0);
func_137(29, -2, -1, -2, 0);
func_137(34, -2, -1, -2, 0);
func_104(26, 1);
func_137(36, -2, -1, -2, 1);
func_128(49, 1);
func_127(85, 50, 49, -1, -1);
func_124(-1216150262);
func_128(50, 1);
func_122(3, 1, 0);
func_95(-441095892);
func_95(2065444157);
func_95(624853379);
func_95(-1766792090);
func_113(joaat("weapon_advancedrifle"), 1);
func_111(7, 97, 6, -709067855, 100000, 10000, -1, 0, -1, 0);
func_106(14);
func_88();
func_87(iVar0);
}


void func_175(){
int iVar0;
iVar0=14;
func_132(iVar0);
func_131();
func_122(134, 0, 0);
func_149(12, -1);
func_128(114, 1);
func_127(23, -2, 114, -1, -1);
func_102("Finale_Choice", 1424);
func_137(134, -2, -1, 115, 0);
func_169(12, 0, 115, -2);
func_169(12, 1, 116, 117);
func_128(115, 1);
func_122(134, 1, 0);
func_127(24, -2, 115, -1, 116);
func_122(136, 1, 0);
func_159(0, 2, 1, 0);
func_159(1, 2, 1, 0);
func_159(19, 2, 1, 0);
func_159(14, 2, 1, 0);
func_129(2, 0, 0);
func_159(0, 1, 1, 0);
func_119(56, 1, 1, 0);
func_119(57, 0, 1, 0);
func_119(58, 0, 1, 0);
func_119(59, 0, 1, 0);
func_178(1, 70);
func_168(119, 0);
func_128(116, 1);
func_122(134, 1, 1);
func_127(25, -2, 116, -1, 117);
func_122(135, 1, 0);
func_177(26, 147);
func_95(178720519);
func_95(-464957327);
func_159(1, 0, 1, 0);
func_159(2, 0, 1, 0);
func_159(14, 0, 1, 0);
func_159(17, 0, 1, 0);
func_129(0, 0, 0);
func_119(11, 1, 1, 0);
func_159(1, 2, 1, 1);
func_159(19, 2, 1, 1);
func_159(14, 1, 1, 0);
func_159(14, 2, 1, 1);
func_178(1, 71);
func_168(119, 1);
func_128(117, 1);
func_130(26, 1);
func_176(26);
func_122(134, 1, 2);
func_127(26, -2, 117, -1, -1);
func_128(118, 1);
func_138(27, -2, 117, -1);
func_126(0);
func_122(129, 0, 0);
func_159(0, 2, 0, 0);
func_178(0, 72);
func_178(1, 73);
func_95(1562602199);
func_95(1113666899);
func_128(119, 1);
func_138(28, -2, -2, -1);
func_137(135, 120, -2, 120, 0);
func_137(136, 120, -2, 120, 0);
func_111(7, 12, 0, 801347631, 3000, 3000, -1, 80, -1, 0);
func_111(2, 19, 6, -2135625223, 120000, 60000, -1, 0, -1, 0);
func_111(2, 0, 6, -1430864197, 200000, 60000, -1, 0, -1, 0);
func_111(1, 30, 6, -789275824, 60000, 20000, -1, 0, -1, 0);
func_111(1, 144, 6, 859937019, 400000, 60000, -1, 0, -1, 0);
func_93(1, 30, 1, 700000, 180000, -1468151569, -1, -1, 0, -1, 64);
func_123(19, 2, 82970585, -1);
func_123(19, 4, 2064117051, -1);
func_123(26, 1, 1229388294, -1);
func_128(120, 1);
func_102("Finale_Endgame", 2050);
func_137(137, -2, -1, -1, 0);
func_125(130, 0);
func_95(-1130010274);
func_95(946886745);
func_95(-703684326);
func_95(-1497396589);
func_93(2, 43, 1, 3600000, 180000, 1080702705, -1, -1, 0, -1, 0);
func_120(218);
func_137(135, -2, 121, 123, 0);
func_95(-306898819);
func_111(2, 17, 6, 632406285, 450000, 120000, -1, 0, -1, 0);
func_111(2, 19, 6, -1523625340, 850000, 120000, -1, 0, -1, 0);
func_111(2, 2, 6, -2076002026, 120000, 60000, -1, 0, -1, 0);
func_103(6, 12, 1, 704657460, 3000, 1000, -1, 79, -1, 0, 0);
func_134(1, 29, 1, 30000, 60000, -121056641, -1, 0, -1, 0);
func_93(2, 14, 1, 250000, 180000, -1398697867, -1, -1, 129, -1, 0);
func_125(190, 0);
func_137(49, 122, -2, 122, 0);
func_103(2, 12, 1, -799417230, 200000, 1000, -1, 0, -1, 0, 0);
func_168(122, 0);
func_128(121, 1);
func_137(136, -2, 123, -1, 0);
func_111(2, 0, 6, -1897604564, 300000, 60000, -1, 0, -1, 0);
func_111(2, 19, 6, 711875844, 800000, 60000, -1, 0, -1, 0);
func_111(1, 20, 6, 430981897, 600000, 120000, -1, 0, -1, 0);
func_103(3, 12, 1, -1198893762, 3000, 1000, -1, 79, -1, 0, 0);
func_93(1, 14, 1, 250000, 180000, -288258721, -1, -1, 0, -1, 0);
func_93(2, 14, 1, 480000, 180000, -47439340, -1, -1, 0, -1, 0);
func_93(2, 23, 1, 120000, 180000, 1972824823, -1, -1, 0, -1, 0);
func_125(191, 0);
func_137(49, 122, -2, 122, 1);
func_103(2, 12, 1, -2135245515, 200000, 1000, -1, 0, -1, 0, 0);
func_128(122, 1);
func_93(2, 19, 1, 600000, 180000, -579786137, -1, -1, 0, -1, 0);
func_128(123, 1);
func_137(136, 255, -2, -2, 0);
func_111(4, 30, 6, 183426861, 30000, 20000, -1, 0, -1, 0);
func_103(4, 20, 6, 65881433, 60000, 10000, 10, 207, -1, 0, 0);
func_109(35, 1);
func_120(209);
func_128(255, 1);
func_88();
func_87(iVar0);
}


void func_176(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1572323470;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_177(int iParam0, int iParam1){
int iVar0;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-217347738;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_92(Global_78828.f_12592[iVar0], iParam0, iParam1);
func_89(iVar0);
}


void func_178(int iParam0, int iParam1){
int iVar0;
iVar0=2;
if((iParam0 !=0 && iParam0 !=1) && iParam0 !=2){
return;
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=215526917;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_92(Global_78828.f_12592[iVar0], iParam1, iParam0);
func_89(iVar0);
}


void func_179(){
int iVar0;
iVar0=13;
func_132(iVar0);
func_131();
func_128(109, 1);
func_119(167, 0, 1, 0);
func_127(37, -2, 109, -1, -1);
func_108(28, 1);
func_107(217, 0, 0);
func_101(20, 0);
func_88();
func_87(iVar0);
}


void func_180(){
int iVar0;
iVar0=12;
func_132(iVar0);
func_131();
func_128(108, 1);
func_125(33, 0);
func_127(36, -2, 108, -1, -1);
func_125(33, 1);
func_119(167, 1, 1, 0);
func_101(19, 0);
func_88();
func_87(iVar0);
}


void func_181(){
int iVar0;
iVar0=11;
func_132(iVar0);
func_131();
func_128(107, 1);
func_127(35, -2, 107, -1, -1);
func_101(18, 0);
func_88();
func_87(iVar0);
}


void func_182(){
int iVar0;
iVar0=10;
func_132(iVar0);
func_131();
func_128(106, 1);
func_127(34, -2, 106, -1, -1);
func_118(41, 1);
func_101(17, 0);
func_88();
func_87(iVar0);
}


void func_183(){
int iVar0;
iVar0=9;
func_132(iVar0);
func_131();
func_128(100, 1);
func_127(29, -2, 100, -1, -1);
func_113(joaat("weapon_combatpistol"), 1);
func_125(145, 0);
func_111(1, 30, 6, -1069372983, 30000, 10000, -1, 0, -1, 0);
func_111(4, 144, 6, 546388833, 120000, 10000, -1, 0, -1, 512);
func_101(11, 0);
func_128(101, 1);
func_127(30, -2, 101, -1, -1);
func_119(67, 2, 1, 0);
func_103(2, 2, 1, 839361606, 30000, 20000, -1, 0, 17, 0, 0);
func_113(joaat("weapon_appistol"), 1);
func_113(joaat("weapon_heavysniper"), 1);
func_111(7, 97, 6, -929373866, 130000, 10000, -1, 0, -1, 0);
func_100(23, 0, 1);
func_100(1, 2, 1);
func_100(2, 1, 1);
func_158(0, 1, 1);
func_158(1, 2, 1);
func_158(2, 0, 1);
func_101(30, 0);
func_109(48, 0);
func_120(214);
func_109(51, 0);
func_120(215);
func_109(3, 1);
func_120(197);
func_109(4, 1);
func_120(198);
func_140(300000);
func_184(15, 2, 1);
func_128(102, 0);
func_130(31, 0);
func_122(44, 0, 0);
func_93(1, 23, 1, 60000, 27500, -444489072, -1, 6, 48, -1, 85);
func_93(4, 23, 1, 60000, 27500, 154402960, -1, 6, 48, -1, 85);
func_137(44, -2, -1, -2, 0);
func_128(103, 0);
func_138(31, -2, 102, -1);
func_126(0);
func_119(142, 1, 1, 0);
func_158(0, 1, 0);
func_158(1, 2, 0);
func_158(2, 0, 0);
func_101(5, 0);
func_104(21, 0);
func_103(7, 23, 1, 6861963, 10000, 10000, -1, 0, -1, 40, 0);
func_100(23, 1, 1);
func_128(104, 1);
func_127(32, -2, 104, -1, -1);
func_100(30, 1, 1);
func_100(30, 2, 1);
func_113(joaat("weapon_rpg"), 1);
func_93(4, 8, 0, 6000, 6000, 795730787, -1, -1, 0, -1, 96);
func_98("AM_H_PREP5", 10000, 2, 7, 0, 0);
func_106(10);
func_102("FBI4_Prep3Amb", 2050);
func_167(11);
func_106(12);
func_106(13);
func_103(1, 1, 1, -655205392, 600000, 30000, -1, 154, 6, 0, 0);
func_103(6, 0, 1, 1266526796, 600000, 30000, -1, 154, 6, 0, 0);
func_128(105, 1);
func_127(33, -2, 105, -1, -1);
func_118(40, 1);
func_104(17, 0);
func_104(19, 0);
func_104(20, 0);
func_104(23, 0);
func_104(14, 0);
func_104(15, 0);
func_104(16, 0);
func_107(218, 0, 0);
func_137(45, -2, -1, -2, 0);
func_124(-655205392);
func_124(1266526796);
func_137(46, 111, -2, 111, 0);
func_122(47, 0, 0);
func_93(1, 23, 1, 20000, 10000, -2014002000, -1652588035, 73, 49, 5, 136);
func_93(2, 0, 1, 20000, 10000, -314546970, -125167689, 73, 49, 5, 136);
func_93(4, 0, 1, 20000, 10000, -1306479777, -125167689, 73, 49, 5, 136);
func_137(47, 112, -1, 112, 0);
func_128(111, 1);
func_125(49, 0);
func_128(112, 1);
func_119(167, 0, 1, 0);
func_118(41, 0);
func_118(40, 0);
func_127(38, -2, 112, -2, -1);
func_134(0, 1, 0, 6000, 6000, 687625470, -1, 146, -1, 0);
func_100(29, 0, 1);
func_119(1, 1, 1, 0);
func_119(137, 1, 1, 0);
func_119(156, 0, 1, 0);
func_119(157, 1, 1, 0);
func_113(joaat("weapon_assaultrifle"), 1);
func_113(joaat("weapon_assaultshotgun"), 1);
func_113(joaat("weapon_stickybomb"), 1);
func_113(joaat("weapon_combatmg"), 1);
func_111(7, 97, 6, -1252410668, 120000, 10000, -1, 0, -1, 0);
func_103(4, 47, 1, 736324744, 120000, 10000, -1, 73, -1, 1024, 0);
func_109(0, 1);
func_120(195);
func_106(3);
func_106(30);
func_104(22, 0);
func_128(113, 1);
func_178(1, 49);
func_127(39, -2, 113, -1, -1);
func_113(joaat("weapon_carbinerifle"), 1);
func_113(joaat("weapon_stungun"), 1);
func_96(2, 15, 12);
func_119(158, 1, 1, 0);
func_119(78, 0, 1, 0);
func_119(171, 1, 1, 0);
func_119(105, 1, 1, 0);
func_119(106, 1, 1, 0);
func_119(107, 1, 1, 0);
func_119(108, 1, 1, 0);
func_119(109, 1, 1, 0);
func_119(110, 1, 1, 0);
func_93(4, 40, 6, 480000, 60000, 2033185762, -1, -1, 147, -1, 0);
func_101(56, 0);
func_122(131, 1, 0);
func_122(120, 0, 0);
func_159(1, 0, 0, 0);
func_159(1, 2, 0, 0);
func_159(14, 1, 0, 0);
func_159(19, 2, 0, 0);
func_124(1328243545);
func_124(1400447159);
func_95(1645231);
func_95(-1141042322);
func_95(520422857);
func_95(-1982920067);
func_95(1319343143);
func_95(-1118768768);
func_95(-705125709);
func_95(-782984853);
func_95(-92968020);
func_95(-406305198);
func_95(-330856906);
func_95(-690594988);
func_95(-349863294);
func_95(424926942);
func_95(1410028576);
func_95(1766909710);
func_95(1906711117);
func_95(1031237239);
func_95(194808514);
func_95(71040001);
func_95(556840426);
func_95(-1613846760);
func_95(-1565848713);
func_95(-1351801605);
func_95(1311040108);
func_123(26, 1, 518202687, -1);
func_125(136, 0);
func_121(1, 0, 0);
func_121(0, 1, 1);
func_118(0, 1);
func_118(1, 0);
func_119(134, 0, 1, 0);
func_119(132, 0, 1, 0);
func_119(133, 0, 1, 0);
func_111(7, 97, 6, -1853951201, 110000, 10000, -1, 0, -1, 0);
func_120(166);
func_88();
func_87(iVar0);
}


void func_184(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1730578455;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam2){
iVar1=1;
}
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iVar1, 0);
func_89(iVar0);
}


void func_185(){
int iVar0;
iVar0=8;
func_132(iVar0);
func_131();
func_128(91, 1);
func_127(17, -2, 91, -1, -1);
func_153(14, 1);
func_100(1, 0, 1);
func_100(0, 1, 1);
func_100(14, 1, 1);
func_125(62, 0);
func_119(179, 1, 1, 0);
func_119(174, 2, 1, 0);
func_119(178, 2, 1, 0);
func_119(175, 2, 1, 0);
func_119(176, 2, 1, 0);
func_119(177, 2, 1, 0);
func_118(36, 0);
func_103(2, 14, 0, -1428654185, 6000, 10000, -1, 0, -1, 0, 0);
func_123(14, 2, -1893250473, -1);
func_117(0, 1);
func_178(1, 9);
func_106(22);
func_125(124, 0);
func_187(12, 1);
func_125(122, 0);
func_104(9, 0);
func_128(94, 1);
func_127(19, -2, 94, -1, -1);
func_178(1, 10);
func_119(2, 1, 1, 0);
func_122(58, 1, 0);
func_124(-1900821691);
func_103(1, 17, 1, -1845612607, 35000, 10000, -1, 22, -1, 262144, 0);
func_106(29);
func_106(23);
func_122(57, 1, 0);
func_122(127, 1, 0);
func_100(12, 0, 1);
func_103(1, 31, 1, -1577577773, 300000, 10000, -1, 67, -1, 2048, 0);
func_123(17, 1, 1290939985, -1);
func_123(17, 1, -1690219790, -1);
func_123(14, 1, -1878340166, -1);
func_123(14, 2, -1160994395, -1);
func_137(82, 93, -2, -2, 0);
func_103(2, 0, 1, 486824538, 30000, 10000, -1, 35, -1, 1024, 0);
func_128(93, 1);
func_120(177);
func_120(193);
func_104(10, 0);
func_105(8, -2, -1, -2);
func_122(57, 0, 0);
func_128(92, 1);
func_127(18, -2, 92, -1, -1);
func_119(14, 1, 1, 0);
func_122(123, 1, 0);
func_101(33, 0);
func_95(1290939985);
func_95(-1878340166);
func_95(1502097668);
func_123(31, 1, -1565848713, -1);
func_123(31, 1, -1351801605, -1);
func_123(31, 1, 1311040108, -1);
func_123(17, 1, 2111803439, -1);
func_123(15, 1, 684213521, -1);
func_118(9, 1);
func_118(10, 1);
func_125(20, 0);
func_120(185);
func_104(12, 0);
func_128(95, 1);
func_127(20, -2, 95, -1, -1);
func_100(14, 2, 0);
func_153(14, 2);
func_95(684213521);
func_95(-1893250473);
func_95(-1160994395);
func_111(4, 14, 6, 1424059178, 120000, 30000, -1, 0, 23, 512);
func_103(1, 31, 1, -1235391473, 180000, 10000, -1, 0, -1, 0, 0);
func_111(4, 20, 6, -771149390, 500000, 60000, -1, 0, -1, 512);
func_123(15, 1, 1388615949, -1);
func_123(14, 1, 460547213, -1);
func_123(14, 2, 963157723, -1);
func_123(14, 4, -1196085634, -1);
func_123(19, 2, 1031237239, 14);
func_123(19, 2, 194808514, 13);
func_123(19, 4, 71040001, 15);
func_119(2, 2, 1, 0);
func_119(135, 1, 1, 0);
func_119(138, 1, 1, 0);
func_119(144, 1, 1, 0);
func_119(122, 1, 1, 0);
func_100(0, 2, 1);
func_100(2, 0, 1);
func_153(0, 2);
func_93(1, 15, 1, 500000, 60000, 1995383583, -1, -1, 0, -1, 69);
func_119(116, 1, 1, 0);
func_129(1, 1, 0);
func_152(1);
func_106(9);
func_106(5);
func_101(45, 0);
func_106(2);
func_109(44, 1);
func_120(212);
func_104(11, 0);
func_128(96, 1);
func_127(21, -2, 96, -1, -1);
func_119(118, 1, 1, 0);
func_119(117, 1, 1, 0);
func_119(119, 1, 1, 0);
func_119(125, 1, 1, 0);
func_119(120, 1, 1, 0);
func_122(128, 1, 0);
func_159(17, 0, 1, 0);
func_159(14, 0, 1, 0);
func_125(81, 0);
func_125(133, 0);
func_95(1995383583);
func_95(1388615949);
func_95(460547213);
func_95(963157723);
func_95(-1196085634);
func_123(15, 1, -2062910056, -1);
func_123(14, 2, 1730771548, -1);
func_123(14, 4, 170512742, -1);
func_103(1, 14, 1, 25048086, 30000, 10000, -1, 0, -1, 0, 0);
func_93(1, 15, 1, 100000, 120000, -881570909, -1, -1, 0, -1, 69);
func_98("AM_H_YOGA", 10000, 2, 1, 0, 0);
func_125(21, 0);
func_120(186);
func_101(23, 0);
func_104(13, 0);
func_128(97, 1);
func_127(22, -2, 97, -1, -1);
func_101(53, 0);
func_125(134, 0);
func_95(-881570909);
func_95(1645231);
func_123(14, 1, 1890717037, -1);
func_123(14, 2, -2082393141, -1);
func_111(1, 17, 6, -1303362934, 80000, 30000, -1, 0, -1, 0);
func_186(2);
func_135(56);
func_137(10, 99, -2, -1, 0);
func_124(2114893093);
func_103(1, 1, 0, 2114893093, 6000, 2000, -1, 148, -1, 2048, 0);
func_128(99, 1);
func_143(57, 98, -2, -1);
func_135(57);
func_177(29, 155);
func_128(98, 1);
func_101(31, 0);
func_101(42, 0);
func_101(48, 0);
func_159(17, 0, 0, 0);
func_159(14, 0, 0, 0);
func_119(116, 0, 1, 0);
func_119(118, 0, 1, 0);
func_119(117, 0, 1, 0);
func_119(119, 0, 1, 0);
func_119(125, 0, 1, 0);
func_119(120, 0, 1, 0);
func_109(22, 1);
func_120(203);
func_88();
func_87(iVar0);
}


void func_186(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1883604486;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_187(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=2;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=1542529269;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam1){
iVar1=1;
}
func_92(Global_78828.f_12592[iVar0], iParam0, iVar1);
func_89(iVar0);
}


void func_188(){
int iVar0;
iVar0=7;
func_132(iVar0);
func_131();
func_122(130, 1, 0);
func_122(120, 1, 0);
func_119(78, 0, 1, 0);
func_102("exile_city_denial", 1424);
func_95(1730771548);
func_95(170512742);
func_95(460547213);
func_123(15, 1, -1982920067, -1);
func_123(15, 1, 1319343143, -1);
func_123(15, 1, -1118768768, -1);
func_123(15, 1, -705125709, -1);
func_123(15, 1, -782984853, -1);
func_123(15, 1, -92968020, -1);
func_123(15, 1, -406305198, -1);
func_123(14, 1, -330856906, -1);
func_123(14, 1, -690594988, -1);
func_123(14, 1, -349863294, -1);
func_123(14, 1, 424926942, -1);
func_123(14, 2, 1410028576, -1);
func_123(14, 4, 469005563, -1);
func_123(24, 4, -1105442476, -1);
func_125(135, 0);
func_159(1, 0, 1, 0);
func_159(1, 2, 1, 0);
func_159(14, 1, 1, 0);
func_159(19, 2, 1, 0);
func_128(88, 1);
func_127(14, -2, 88, -1, -1);
func_129(0, 1, 0);
func_129(2, 1, 0);
func_152(0);
func_152(2);
func_119(78, 2, 1, 0);
func_119(6, 1, 1, 0);
func_113(joaat("gadget_parachute"), 1);
func_125(70, 0);
func_125(123, 0);
func_111(7, 97, 6, -1023257027, 125000, 10000, -1, 0, -1, 0);
func_134(2, 20, 0, 6000, 6000, -1478217267, -1, 0, -1, 16488);
func_101(47, 0);
func_101(1, 0);
func_106(28);
func_120(210);
func_93(2, 17, 6, 200000, 100000, 1645231, -1, -1, 0, -1, 0);
func_93(4, 31, 6, 240000, 60000, 520422857, -1, -1, 0, -1, 0);
func_93(1, 31, 6, 480000, 60000, -1141042322, -1, -1, 0, -1, 0);
func_103(4, 54, 6, 1400447159, 60000, 60000, 10, 0, 20, 512, 0);
func_103(1, 2, 6, -1293573249, 30000, 10000, -1, 0, -1, 0, 0);
func_111(1, 15, 6, 2022687760, 30000, 10000, -1, 0, -1, 0);
func_109(17, 1);
func_120(201);
func_107(213, 0, 0);
func_104(7, 0);
func_128(89, 1);
func_127(15, -2, 89, -1, -1);
func_95(-1451910289);
func_95(-1151582404);
func_95(-1105442476);
func_124(610159002);
func_123(24, 4, -805704433, -1);
func_109(23, 1);
func_120(204);
func_125(159, 0);
func_113(joaat("weapon_heavysniper"), 1);
func_101(44, 0);
func_104(8, 0);
func_128(90, 1);
func_127(16, -2, 90, -1, -1);
func_119(65, 1, 1, 0);
func_119(66, 1, 1, 0);
func_119(0, 0, 1, 0);
func_118(0, 1);
func_103(1, 14, 1, 981904836, 30000, 10000, 12, 0, -1, 0, 0);
func_93(4, 10, 0, 6000, 5000, -769656371, -1, -1, 0, -1, 106);
func_101(22, 0);
func_88();
func_87(iVar0);
}


void func_189(){
int iVar0;
iVar0=6;
func_132(iVar0);
func_131();
func_103(4, 24, 1, -631719301, 240000, 10000, -1, 0, -1, 1064, 0);
func_140(3000);
func_98("AM_H_PREP3B", 7500, 2, 4, 0, 0);
func_103(4, 24, 1, -549935988, 600000, 10000, -1, 0, -1, 0, 0);
func_128(22, 1);
func_127(73, -2, 22, -1, -1);
func_124(-549935988);
func_118(38, 1);
func_147(1, 6, 1, 0);
func_101(6, 0);
func_88();
func_87(iVar0);
}


void func_190(){
int iVar0;
iVar0=5;
func_132(iVar0);
func_131();
func_102("heist_ctrl_docks", 2050);
func_130(71, 0);
func_122(20, 0, 0);
func_122(21, 0, 0);
func_128(15, 1);
func_127(71, -2, 15, -1, -1);
func_122(20, 1, 0);
func_119(139, 1, 1, 0);
func_119(140, 1, 1, 0);
func_119(145, 1, 1, 0);
func_119(146, 0, 1, 0);
func_128(16, 0);
func_148(1, 0, 13, -2, -1, 1, 0);
func_140(500);
func_148(1, 2, 2, -2, -1, 1, 1);
func_122(20, 0, 1);
func_122(21, 1, 0);
func_140(501);
func_146(1, 0, 1, 22);
func_137(22, -1, -2, -2, 0);
func_122(21, 0, 1);
func_122(22, 0, 0);
func_126(0);
func_119(141, 1, 1, 0);
func_119(139, 0, 1, 0);
func_119(140, 0, 1, 0);
func_119(143, 1, 1, 0);
func_107(223, 0, 0);
func_102("pickupVehicles", 128);
func_143(30, 20, -2, 20);
func_144(2, 0, 0, 6000, 6000, -1108940541, 1372476011, -1, 16, -1, 0, 32);
func_168(19, 0);
func_128(20, 0);
func_144(2, 0, 0, 6000, 6000, -951496, 1372476011, -1, 16, -1, 0, 32);
func_128(19, 1);
func_123(12, 4, 225734768, -1);
func_169(8, 3, 17, 21);
func_128(21, 1);
func_98("AM_H_FLYM", 10000, 2, 7, 0, 0);
func_103(1, 2, 1, 1759805585, 40000, 10000, -1, 0, -1, 1024, 0);
func_106(6);
func_128(17, 1);
func_103(4, 24, 1, 411396589, 20000, 10000, -1, 0, -1, 1064, 0);
func_140(3000);
func_98("AM_H_PREP3A", 7500, 2, 4, 0, 0);
func_128(18, 1);
func_127(72, -2, 18, -1, -1);
func_125(119, 0);
func_147(1, 5, 1, 0);
func_147(1, 7, 1, 0);
func_119(136, 1, 1, 0);
func_169(8, 3, 23, -2);
func_104(6, 0);
func_128(23, 1);
func_167(6);
func_104(5, 0);
func_101(21, 0);
func_103(3, 2, 1, 1269300253, 40000, 10000, 24, 54, -1, 1032, 0);
func_93(4, 24, 2, 60000, 10000, -749738207, -1, 24, 54, -1, 72);
func_137(23, -2, -1, -1, 0);
func_128(25, 1);
func_169(8, 3, 26, 27);
func_128(26, 1);
func_127(74, -2, 26, -1, -1);
func_119(12, 1, 1, 0);
func_119(13, 1, 1, 0);
func_113(joaat("weapon_assaultshotgun"), 1);
func_168(28, 0);
func_128(27, 1);
func_127(75, -2, 27, -1, -1);
func_118(39, 1);
func_128(28, 1);
func_118(38, 0);
func_119(2, 0, 1, 0);
func_124(1759805585);
func_95(225734768);
func_122(1, 1, 0);
func_101(15, 0);
func_93(4, 39, 1, 60000, 60000, -1151582404, -1, -1, 0, -1, 1);
func_88();
func_87(iVar0);
}


void func_191(){
func_132(4);
func_131();
func_93(4, 20, 0, 6000, 30000, -1155501333, -1, -1, 0, -1, 105);
func_123(20, 4, -1758542647, -1);
func_101(54, 0);
func_128(86, 1);
func_112(67, 0, 0);
func_112(68, 0, 0);
func_112(69, 0, 0);
func_127(12, -2, 86, -1, -1);
func_113(joaat("weapon_grenadelauncher"), 1);
func_100(21, 2, 1);
func_109(52, 1);
func_120(216);
func_104(4, 0);
func_128(87, 1);
func_127(13, -2, 87, -1, -1);
func_119(50, 1, 1, 0);
func_119(51, 1, 1, 0);
func_119(52, 1, 1, 0);
func_119(53, 1, 1, 0);
func_119(54, 2, 1, 0);
func_119(55, 2, 1, 0);
func_125(141, 0);
func_113(joaat("weapon_sawnoffshotgun"), 1);
func_113(joaat("weapon_petrolcan"), 1);
func_95(-1758542647);
func_101(55, 0);
func_125(5, 0);
func_120(169);
func_88();
func_87(4);
}


void func_192(){
int iVar0;
iVar0=3;
func_132(iVar0);
func_131();
func_119(77, 1, 1, 0);
func_112(79, 0, 0);
func_112(80, 0, 0);
func_193(0, 1, 10);
func_193(1, 2, 10);
func_193(2, 0, 10);
func_128(82, 1);
func_127(8, -2, 82, -2, -1);
func_119(8, 1, 1, 0);
func_119(9, 1, 1, 0);
func_119(127, 1, 1, 0);
func_119(128, 1, 1, 0);
func_119(126, 1, 1, 0);
func_113(joaat("weapon_nightstick"), 1);
func_111(7, 97, 6, -1548445814, 120000, 10000, -1, 0, -1, 0);
func_111(7, 96, 6, 2021846885, 140000, 10000, -1, 0, -1, 0);
func_125(162, 1);
func_100(29, 1, 1);
func_100(45, 1, 1);
func_100(29, 2, 0);
func_95(2097475336);
func_124(341684477);
func_123(37, 2, -108894207, -1);
func_123(29, 2, -2139605007, -1);
func_101(0, 0);
func_128(83, 1);
func_127(9, -2, 83, -1, -1);
func_125(144, 0);
func_119(10, 1, 1, 0);
func_101(36, 0);
func_104(3, 0);
func_128(84, 1);
func_127(10, -2, 84, -1, -1);
func_119(7, 1, 1, 0);
func_119(162, 1, 1, 0);
func_101(37, 0);
func_104(2, 0);
func_125(46, 0);
func_193(1, 19, 11);
func_193(1, 2, 11);
func_128(85, 1);
func_127(11, -2, 85, -1, -1);
func_119(8, 0, 1, 0);
func_119(9, 0, 1, 0);
func_119(10, 0, 1, 0);
func_119(7, 0, 1, 0);
func_134(1, 12, 0, 6000, 6000, -1134988206, -1, 0, -1, 40);
func_125(47, 0);
func_101(40, 0);
func_119(77, 2, 1, 0);
func_95(-2139605007);
func_123(29, 2, -1949184344, -1);
func_88();
func_87(iVar0);
}


void func_193(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=1;
if(((iParam1 !=0 && iParam1 !=1) && iParam1 !=2) && iParam1 !=19){
return;
}
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1575504933;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam1, iParam0, iParam2, 0);
func_89(iVar0);
}


void func_194(){
int iVar0;
iVar0=2;
func_132(iVar0);
func_131();
func_120(165);
func_103(2, 12, 1, 1635608802, 50000, 30000, 71, 52, -1, 1096, 0);
func_137(48, -2, -1, -2, 0);
func_128(77, 1);
func_127(3, -2, 77, -1, -1);
func_124(1323596299);
func_124(-1205448796);
func_124(1635608802);
func_134(1, 12, 0, 6000, 6000, 343235192, 2, 45, -1, 96);
func_102("SH_Intro_F_Hills", 1424);
func_128(240, 1);
func_125(193, 0);
func_111(2, 44, 6, -1821325152, 800000, 120000, -1, 0, -1, 0);
func_101(14, 0);
func_128(78, 1);
func_127(4, -2, 78, -1, -1);
func_125(194, 0);
func_104(0, 0);
func_128(79, 1);
func_127(5, -2, 79, -1, -1);
func_125(195, 0);
func_128(80, 1);
func_127(6, -2, 80, -1, -1);
func_125(196, 0);
func_104(1, 0);
func_128(81, 1);
func_127(7, -2, 81, -1, -1);
func_125(197, 0);
func_122(49, 1, 0);
func_124(-799417230);
func_124(-2135245515);
func_120(241);
func_88();
func_87(iVar0);
}


void func_195(){
int iVar0;
iVar0=1;
func_132(iVar0);
func_131();
func_198(0);
func_128(71, 0);
func_138(0, -2, 71, -1);
func_121(5, 1, 1);
func_121(7, 0, 0);
func_121(8, 0, 0);
func_121(9, 0, 0);
func_197(1, 1, 31, 250);
func_122(66, 0, 0);
func_98("AM_H_REPEAT", 10000, 2, 7, 0, 0);
func_100(131, 0, 0);
func_100(131, 1, 0);
func_123(19, 2, 1867406480, -1);
func_125(58, 0);
func_125(71, 0);
func_118(2, 1);
func_118(59, 1);
func_117(1, 1);
func_196(6, 0, 1);
func_102("ambientBlimp", 1424);
func_102("controller_taxi", 1424);
func_120(194);
func_125(17, 0);
func_125(92, 0);
func_125(93, 0);
func_125(1, 0);
func_125(94, 0);
func_125(31, 0);
func_125(32, 0);
func_125(34, 0);
func_125(15, 0);
func_112(81, 0, 0);
func_112(82, 0, 0);
func_187(0, 1);
func_125(152, 0);
func_137(61, -2, 72, 72, 0);
func_93(2, 18, 1, 4000, 15000, 742578279, -1, 74, 0, -1, 524392);
func_168(73, 0);
func_128(72, 1);
func_93(2, 18, 1, 4000, 15000, 1611093726, -1, 74, 0, -1, 524392);
func_128(73, 1);
func_120(182);
func_120(230);
func_120(188);
func_120(187);
func_120(181);
func_120(228);
func_98("AM_H_BLIP", 10000, 2, 7, 0, 0);
func_128(74, 1);
func_127(1, -2, 74, -1, -1);
func_119(79, 1, 1, 0);
func_163(1);
func_154(0);
func_113(joaat("weapon_pistol"), 1);
func_113(joaat("weapon_microsmg"), 1);
func_113(joaat("weapon_knife"), 1);
func_113(joaat("weapon_pumpshotgun"), 1);
func_119(179, 1, 1, 0);
func_102("letterScraps", 1424);
func_120(199);
func_137(62, 75, -2, -2, 0);
func_103(2, 19, 1, -1982006572, 35000, 10000, -1, 41, -1, 0, 0);
func_128(75, 1);
func_100(17, 0, 0);
func_100(14, 0, 0);
func_100(15, 0, 0);
func_153(19, 1);
func_153(14, 0);
func_153(17, 0);
func_106(19);
func_128(76, 1);
func_127(2, -2, 76, -1, -1);
func_121(0, 1, 1);
func_118(0, 1);
func_197(1, 1, 96, 300);
func_118(36, 1);
func_119(179, 1, 1, 1);
func_119(174, 1, 1, 0);
func_119(178, 1, 1, 0);
func_119(175, 1, 1, 0);
func_119(176, 1, 1, 0);
func_119(177, 1, 1, 0);
func_98("AM_H_SWTCH0", 15000, 2, 7, 0, 0);
func_102("SH_Intro_M_Home", 1424);
func_93(2, 18, 1, 200000, 60000, -1753640864, 410510653, 72, 42, -1, 128);
func_95(1867406480);
func_123(30, 1, 1438498239, -1);
func_103(1, 17, 1, -1900821691, 35000, 10000, -1, 22, -1, 262144, 0);
func_120(168);
func_120(171);
func_178(1, 8);
func_122(72, 1, 0);
func_106(8);
func_129(0, 1, 0);
func_152(0);
func_122(115, 1, 0);
func_109(2, 1);
func_120(196);
func_109(21, 1);
func_120(202);
func_120(226);
func_109(9, 1);
func_120(200);
func_88();
func_87(iVar0);
}


void func_196(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-661286798;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
iVar1=0;
if(bParam2){
iVar1=1;
}
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iVar1, -1);
func_89(iVar0);
}


void func_197(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam0 > 2){}
if(iParam3 <=0){}
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-1283556585;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
func_89(iVar0);
}


void func_198(int iParam0){
int iVar0;
iVar0=0;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=-159886710;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=iParam0;
func_89(iVar0);
}


void func_199(){
int iVar0;
iVar0=0;
func_132(iVar0);
func_131();
func_119(70, 1, 1, 0);
func_119(71, 1, 1, 0);
func_119(73, 1, 1, 0);
func_119(72, 0, 1, 0);
func_119(74, 0, 1, 0);
func_103(1, 12, 1, 1834414893, 25000, 10000, 22, 0, -1, 40, 0);
func_102("heist_ctrl_agency", 2050);
func_128(0, 1);
func_127(66, -2, 0, -1, -1);
func_193(0, 1, 67);
func_147(3, 0, 1, 0);
func_147(3, 1, 1, 0);
func_101(13, 0);
func_102("buildingSiteAmbience", 128);
func_103(1, 1, 1, 2114893093, 240000, 10000, -1, 148, -1, 1024, 0);
func_137(10, -2, -1, -2, 0);
func_122(11, 0, 0);
func_122(70, 1, 0);
func_125(97, 0);
func_119(87, 1, 1, 0);
func_128(2, 0);
func_93(1, 1, 1, 300000, 60000, -1323332922, -1, -1, 86, -1, 72);
func_130(67, 0);
func_122(6, 0, 0);
func_122(7, 0, 0);
func_128(3, 0);
func_200(67, -2, 2, -2);
func_119(87, 0, 1, 0);
func_165("AM_H_ARM2", 0);
func_124(2114893093);
func_95(-1323332922);
func_147(3, 2, 1, 0);
func_122(70, 0, 0);
func_122(6, 1, 0);
func_119(166, 1, 1, 0);
func_128(4, 0);
func_148(3, 0, 13, -2, -1, 1, 0);
func_140(500);
func_128(5, 0);
func_148(3, 2, 4, -2, -1, 1, 0);
func_122(6, 0, 1);
func_122(7, 1, 0);
func_128(6, 0);
func_148(3, 1, 5, -2, 5, 1, 1);
func_140(501);
func_146(3, 0, 1, 8);
func_137(8, -1, -2, -2, 0);
func_122(7, 0, 1);
func_122(8, 0, 0);
func_107(225, 0, 0);
func_125(116, 0);
func_101(52, 0);
func_126(0);
func_169(10, 6, -2, 9);
func_102("agency_prep2Amb", 2050);
func_103(3, 12, 1, 230961098, 10000, 10000, -1, 0, -1, 1064, 0);
func_147(3, 6, 1, 0);
func_140(3000);
func_98("AM_H_PREP6", 10000, 2, 3, 0, 0);
func_103(3, 12, 1, 639116137, 600000, 30000, -1, 0, 11, 0, 0);
func_128(7, 1);
func_127(68, -2, 7, -1, -1);
func_119(169, 1, 0, 0);
func_118(43, 1);
func_112(62, 1, 0);
func_112(63, 1, 0);
func_147(3, 7, 1, 0);
func_144(0, 12, 0, 6000, 6000, -651018670, -518176220, -1889998615, 10, -1, 53, 0);
func_144(1, 12, 0, 6000, 6000, -236506853, 777679877, -1547927413, 10, -1, 53, 0);
func_137(14, -2, -1, -1, 0);
func_128(9, 1);
func_169(10, 6, -2, 11);
func_107(219, 0, 0);
func_137(12, -2, -1, -2, 0);
func_112(62, 1, 1);
func_112(63, 1, 1);
func_119(70, 1, 0, 1);
func_119(71, 2, 0, 0);
func_119(73, 1, 0, 1);
func_119(72, 0, 0, 1);
func_119(74, 0, 0, 1);
func_112(62, 0, 0);
func_112(63, 0, 0);
func_128(10, 1);
func_127(69, -2, 10, -1, -1);
func_134(0, 30, 0, 6000, 6000, 1770589463, -1, 0, -1, 104);
func_124(639116137);
func_168(13, 0);
func_128(11, 1);
func_112(62, 1, 2);
func_112(63, 1, 2);
func_103(3, 12, 1, 1943637475, 30000, 60000, 21, 43, -1, 72, 0);
func_137(9, -2, -1, -2, 0);
func_147(3, 6, 1, 1);
func_119(70, 1, 0, 2);
func_119(71, 2, 0, 1);
func_119(73, 1, 0, 2);
func_119(72, 0, 0, 2);
func_119(74, 0, 0, 2);
func_112(62, 0, 1);
func_112(63, 0, 1);
func_128(12, 1);
func_127(70, -2, 12, -1, -1);
func_134(0, 30, 0, 6000, 6000, -1358914512, -1, 0, -1, 104);
func_128(13, 1);
func_125(77, 300000);
func_112(62, 1, 3);
func_112(63, 1, 3);
func_119(166, 0, 1, 0);
func_119(169, 0, 1, 0);
func_119(165, 0, 1, 0);
func_119(70, 0, 1, 0);
func_119(71, 0, 1, 0);
func_119(73, 0, 1, 0);
func_119(72, 2, 1, 0);
func_119(74, 1, 1, 0);
func_101(41, 0);
func_122(2, 1, 0);
func_118(43, 0);
func_119(28, 1, 1, 0);
func_119(26, 0, 1, 0);
func_119(36, 0, 1, 0);
func_119(27, 0, 1, 0);
func_119(34, 0, 1, 0);
func_119(29, 0, 1, 0);
func_119(30, 0, 1, 0);
func_119(31, 0, 1, 0);
func_105(7, 14, -2, 14);
func_95(406771743);
func_93(1, 46, 6, 300000, 120000, -837794877, -1, -1, 72, -1, 1);
func_128(14, 1);
func_88();
func_87(iVar0);
}


void func_200(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam3==-1){
iParam3=iParam1;
}
iVar0=1;
func_90(iVar0);
Global_78828.f_6825[Global_78828.f_12591 /*3*/]=889972124;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_1=iVar0;
Global_78828.f_6825[Global_78828.f_12591 /*3*/].f_2=Global_78828.f_12592[iVar0];
Global_91469[iParam0 /*34*/].f_7=Global_78828.f_12592[iVar0];
func_97(Global_78828.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
func_89(iVar0);
}


void func_201(){
func_218();
func_217();
func_216();
func_215();
func_214();
func_213();
func_212();
func_211();
func_210();
func_202();
}


void func_202(){
func_209();
func_208();
func_206();
func_203();
}


void func_203(){
int iVar0;
Global_43257=15;
Global_97611=0;
Global_97601=0;
Global_97613=0;
Global_97602=-1;
Global_97603=-1;
Global_97604=-1;
Global_97605=-1;
Global_97607=0;
Global_97608=0;
Global_97609=0;
Global_97539=0;
Global_97540=0;
Global_97542=-15;
Global_23130=0;
iVar0=0;
while (iVar0 < 8){
func_204(iVar0);
iVar0++;
}}


void func_204(int iParam0){
if(MISC::IS_BIT_SET(Global_97614[iParam0 /*17*/].f_10.f_1, 6)){
if(Global_96527 !=4 && Global_96527 !=5){
func_205(Global_97614[iParam0 /*17*/].f_5);
}}
if(MISC::IS_BIT_SET(Global_97614[iParam0 /*17*/].f_10.f_1, 7)){
if(Global_96527 !=4 && Global_96527 !=5){
func_205(Global_97614[iParam0 /*17*/].f_5);
}}
Global_97614[iParam0 /*17*/].f_1=0;
Global_97614[iParam0 /*17*/].f_3=-1;
Global_97614[iParam0 /*17*/].f_4=6;
Global_97614[iParam0 /*17*/].f_5=-1;
Global_97614[iParam0 /*17*/].f_6=-1;
Global_97614[iParam0 /*17*/].f_7=-1;
if(Global_97614[iParam0 /*17*/]){
if(Global_97614[iParam0 /*17*/].f_9 !=263){
if(Global_97614[iParam0 /*17*/].f_9 < 0 || Global_97614[iParam0 /*17*/].f_9 >=263){
}
func_10(Global_97614[iParam0 /*17*/].f_9, 0, 0);
}
Global_97614[iParam0 /*17*/].f_9=263;
}
Global_97614[iParam0 /*17*/]=0;
Global_97614[iParam0 /*17*/].f_8=-1;
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), false);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), true);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 2);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 3);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 6);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 7);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 8);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 9);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 10);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 11);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 12);
}


void func_205(int iParam0){
if(iParam0 >=94){
return;
}
if(Global_96528 !=-1){
if(Global_96528 !=iParam0){
return;
}
Global_96528=-1;
Global_96527=0;
Global_96529=0;
}}


void func_206(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 7){
func_207(iVar0);
iVar0++;
}}


void func_207(int iParam0){
Global_91433[iParam0 /*5*/]=-1;
Global_91433[iParam0 /*5*/].f_1=0;
Global_91433[iParam0 /*5*/].f_2=-1;
Global_91433[iParam0 /*5*/].f_3=-1;
Global_91433[iParam0 /*5*/].f_4=0;
}


void func_208(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 10){
Global_78828.f_6684[iVar0 /*14*/]=0;
Global_78828.f_6684[iVar0 /*14*/].f_1=0;
Global_78828.f_6684[iVar0 /*14*/].f_2=0;
Global_78828.f_6684[iVar0 /*14*/].f_3=0;
Global_78828.f_6684[iVar0 /*14*/].f_4=0;
Global_78828.f_6684[iVar0 /*14*/].f_5=0;
Global_78828.f_6684[iVar0 /*14*/].f_6=0;
Global_78828.f_6684[iVar0 /*14*/].f_7=0;
Global_78828.f_6684[iVar0 /*14*/].f_8=0;
Global_78828.f_6684[iVar0 /*14*/].f_9=-1;
Global_78828.f_6684[iVar0 /*14*/].f_10=-1;
Global_78828.f_6684[iVar0 /*14*/].f_11=-1;
Global_78828.f_6684[iVar0 /*14*/].f_12=0;
Global_78828.f_6684[iVar0 /*14*/].f_13=-1;
iVar0++;
}}


void func_209(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 169){
Global_78828.f_4824[iVar0 /*11*/]=0;
Global_78828.f_4824[iVar0 /*11*/].f_1=0;
Global_78828.f_4824[iVar0 /*11*/].f_2=0;
Global_78828.f_4824[iVar0 /*11*/].f_3=0;
Global_78828.f_4824[iVar0 /*11*/].f_4=0;
Global_78828.f_4824[iVar0 /*11*/].f_5=0;
Global_78828.f_4824[iVar0 /*11*/].f_6=0;
Global_78828.f_4824[iVar0 /*11*/].f_7=0;
Global_78828.f_4824[iVar0 /*11*/].f_8=-1;
Global_78828.f_4824[iVar0 /*11*/].f_9=0;
Global_78828.f_4824[iVar0 /*11*/].f_10=-1;
iVar0++;
}}


void func_210(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 32){
Global_78828.f_12526[iVar0 /*2*/]=-1;
Global_78828.f_12526[iVar0 /*2*/].f_1=-1;
iVar0++;
}}


void func_211(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 1900){
Global_78828.f_6825[iVar0 /*3*/]=-1;
Global_78828.f_6825[iVar0 /*3*/].f_1=12;
Global_78828.f_6825[iVar0 /*3*/].f_2=-1;
iVar0++;
}
Global_78828.f_12591=0;
}


void func_212(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 1){
Global_78828.f_4797[iVar0 /*13*/]=0;
StringCopy(&(Global_78828.f_4797[iVar0 /*13*/].f_1), "", 32);
Global_78828.f_4797[iVar0 /*13*/].f_9=0;
Global_78828.f_4797[iVar0 /*13*/].f_10=-1;
Global_78828.f_4797[iVar0 /*13*/].f_11=-1;
Global_78828.f_4797[iVar0 /*13*/].f_12=0;
iVar0++;
}}


void func_213(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 1){
Global_78828.f_4811[iVar0 /*12*/]=-1;
Global_78828.f_4811[iVar0 /*12*/].f_1=-1;
Global_78828.f_4811[iVar0 /*12*/].f_2=-1;
Global_78828.f_4811[iVar0 /*12*/].f_3=-1;
Global_78828.f_4811[iVar0 /*12*/].f_4=-1;
Global_78828.f_4811[iVar0 /*12*/].f_6=-1;
Global_78828.f_4811[iVar0 /*12*/].f_7=-1;
Global_78828.f_4811[iVar0 /*12*/].f_10=0;
Global_78828.f_4811[iVar0 /*12*/].f_11=0;
iVar0++;
}}


void func_214(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 53){
StringCopy(&(Global_78828.f_4160[iVar0 /*12*/]), "NOT_SETUP", 32);
Global_78828.f_4160[iVar0 /*12*/].f_8=0;
Global_78828.f_4160[iVar0 /*12*/].f_9=0;
Global_78828.f_4160[iVar0 /*12*/].f_10=0;
Global_78828.f_4160[iVar0 /*12*/].f_11=0;
iVar0++;
}}


void func_215(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 1){
StringCopy(&(Global_78828.f_4151[iVar0 /*8*/]), "NOT_SETUP", 32);
iVar0++;
}}


void func_216(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 280){
Global_78828.f_3590[iVar0 /*2*/]=0;
Global_78828.f_3590[iVar0 /*2*/].f_1=1;
iVar0++;
}}


void func_217(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 870){
Global_78828.f_109[iVar0 /*4*/]=0;
Global_78828.f_109[iVar0 /*4*/].f_1=1;
Global_78828.f_109[iVar0 /*4*/].f_2=2;
Global_78828.f_109[iVar0 /*4*/].f_3=3;
iVar0++;
}}


void func_218(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 11){
Global_78828.f_12592[iVar0]=0;
iVar0++;
}}


void func_219(){
bool bVar0;
int iVar1;
int iVar2;
int iVar3[6];
int iVar4;
int iVar5;
int iVar6;
if(Global_78559){
if((func_5(53) && !MISC::IS_BIT_SET(Global_113648.f_10018.f_25, 1)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("flowintrotitle"))==0){
MISC::SET_BIT(&(Global_113648.f_10018.f_25), true);
}
bVar0=false;
if(!bVar0){
if(!MISC::IS_BIT_SET(Global_113648.f_9087.f_2[27 /*3*/], 1) || !func_5(53)){
MISC::SET_BIT(&(Global_113648.f_9087.f_2[27 /*3*/]), true);
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(800);
}}
bVar0=true;
}}
iVar1=0;
while (iVar1 < 32){
if(!bVar0){
iVar2=Global_113648.f_9087.f_2[iVar1 /*3*/].f_1;
if(iVar2 !=-1){
if(Global_78828.f_6825[iVar2 /*3*/]==-868169264){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(800);
}
}
bVar0=true;
}}}
iVar1++;
}}else{
func_551(1);
}
if(!Global_78559){
MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("SMOG", 25f);
MISC::CLEAR_WEATHER_TYPE_PERSIST();
MISC::UNLOAD_ALL_CLOUD_HATS();
}
if(!func_550()){
iVar3[0]=-1750463879;
iVar3[1]=joaat("clear");
iVar3[2]=joaat("clouds");
iVar3[3]=282916021;
iVar3[4]=joaat("OVERCAST");
iVar3[5]=joaat("rain");
iVar4=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
MISC::SET_CURR_WEATHER_STATE(iVar3[iVar4], iVar3[iVar5], 0f);
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailOut")){
GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
}
CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
MISC::SET_TIME_SCALE(1f);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::GET_PROFILE_SETTING(903)==0){
if(func_5(53)){
STATS::SET_PROFILE_SETTING_PROLOGUE_COMPLETE();
}}
if(MISC::GET_PROFILE_SETTING(939)==0){
if(func_5(40)){
STATS::SET_PROFILE_SETTING_SP_CHOP_MISSION_COMPLETE();
}}}
MISC::ENABLE_STUNT_JUMP_SET(0);
NETWORK::NETWORK_BLOCK_INVITES(0);
func_206();
func_548();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), func_547(67));
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), func_547(68));
}
iVar6=func_545();
if(func_66(iVar6)){
if(func_544()){
func_527(PLAYER::PLAYER_PED_ID(), 1, 0);
func_526(PLAYER::PLAYER_PED_ID());
func_523(PLAYER::PLAYER_PED_ID());
func_220(PLAYER::PLAYER_PED_ID());
}}
Global_113639=(MISC::GET_GAME_TIMER() - 90000);
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
Global_78828.f_7=1;
}


void func_220(int iParam0){
int iVar0;
int iVar1;
bool bVar2;
iVar0=func_522(iParam0);
if(func_66(iVar0)){
if(!Global_100602[iVar0]){
if(Global_113648.f_2365.f_539.f_2391[iVar0] !=0){
if(func_521(iParam0) !=Global_113648.f_2365.f_539.f_2391[iVar0]){
func_520(iVar0);
Global_113648.f_2365.f_539.f_2391[iVar0]=func_521(iParam0);
}}}
func_325(iParam0, &(Global_113648.f_2365.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
if(!Global_100602[iVar0]){
bVar2=false;
if(iVar0==0){
if(!func_324(49)){
iVar1=func_310(iParam0, 12, -1);
if(iVar1==16){
bVar2=true;
}
func_221(func_308(0), 12, 16, 0, 0, 0, 0);
}
if(!func_324(44)){
iVar1=func_310(iParam0, 3, -1);
if(((((iVar1==70 || iVar1==71) || iVar1==72) || iVar1==73) || iVar1==74) || iVar1==75){
bVar2=true;
}
iVar1=func_310(iParam0, 4, -1);
if((((iVar1==41 || iVar1==42) || iVar1==43) || iVar1==44) || iVar1==45){
bVar2=true;
}
func_221(func_308(0), 3, 70, 1, 0, 0, 0);
func_221(func_308(0), 3, 71, 1, 0, 0, 0);
func_221(func_308(0), 3, 72, 1, 0, 0, 0);
func_221(func_308(0), 3, 73, 1, 0, 0, 0);
func_221(func_308(0), 3, 74, 1, 0, 0, 0);
func_221(func_308(0), 3, 75, 1, 0, 0, 0);
func_221(func_308(0), 4, 41, 1, 0, 0, 0);
func_221(func_308(0), 4, 42, 1, 0, 0, 0);
func_221(func_308(0), 4, 43, 1, 0, 0, 0);
func_221(func_308(0), 4, 44, 1, 0, 0, 0);
func_221(func_308(0), 4, 45, 1, 0, 0, 0);
}}elseif(iVar0==2){
iVar1=func_310(iParam0, 4, -1);
if(iVar1==93){
bVar2=true;
}}
if(bVar2){
func_520(iVar0);
func_325(iParam0, &(Global_113648.f_2365.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
}}
Global_100602[iVar0]=1;
}}


void func_221(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6){
func_307(iParam0, iParam1, iParam2, bParam3);
func_295(iParam0, iParam1, iParam2, bParam4, 1);
if(bParam5){
func_294(iParam0, iParam1, iParam2, 0);
}
if(iParam6==1){
func_222(iParam0, iParam1, iParam2, 0);
}}

int func_222(int iParam0, int iParam1, int iParam2, bool bParam3){
Global_78341[1 /*14*/]={
func_224(iParam0, iParam1, iParam2, -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(bParam3){
func_223(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 0, 1);
}else{
func_223(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 1, 0);
}
return 1;
}
return 0;
}

int func_223(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], bParam4);
}elseif(iParam0==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], bParam4);
}elseif(iParam0==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], bParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], bParam4);
}elseif(iParam2==6){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], bParam4);
}elseif(iParam2==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], bParam4);
}elseif(iParam2==8){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], bParam4);
}elseif(iParam2==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], bParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], bParam4);
}}elseif(iParam0==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], bParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], bParam4);
}}elseif(iParam0==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], bParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], bParam4);
}}elseif(iParam0==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], bParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], bParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], bParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], bParam4);
}}elseif(iParam0==13){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], bParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], bParam4);
}}
return 0;
}
struct<14> func_224(int iParam0, int iParam1, int iParam2, int iParam3){
func_293();
if(iParam0==joaat("player_zero")){
func_275(iParam1, iParam2);
}elseif(iParam0==joaat("player_one")){
func_256(iParam1, iParam2);
}elseif(iParam0==joaat("player_two")){
func_225(iParam1, iParam2);
}
return Global_78341[0 /*14*/];
}


void func_225(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_255(iParam1);
break;
case 2:
func_254(iParam1);
break;
case 3:
func_251(iParam1);
break;
case 4:
func_250(iParam1);
break;
case 6:
func_249(iParam1);
break;
case 5:
func_248(iParam1);
break;
case 8:
func_247(iParam1);
break;
case 9:
func_246(iParam1);
break;
case 10:
func_245(iParam1);
break;
case 1:
func_244(iParam1);
break;
case 7:
func_243(iParam1);
break;
case 11:
func_242(iParam1);
break;
case 12:
func_241(iParam1);
break;
case 13:
func_240(iParam1);
break;
case 14:
func_226(iParam1);
break;
}}


void func_226(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 154:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=2;
break;
case 88:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P2_E1", 16);
iVar3=1;
iVar4=0;
iVar1=45;
iVar5=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P2_E2", 16);
iVar3=2;
iVar4=0;
iVar5=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P2_E2_1", 16);
iVar3=2;
iVar4=1;
iVar1=50;
iVar5=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P2_E2_2", 16);
iVar3=2;
iVar4=2;
iVar1=55;
iVar5=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P2_E2_3", 16);
iVar3=2;
iVar4=3;
iVar1=52;
iVar5=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P2_E2_4", 16);
iVar3=2;
iVar4=4;
iVar1=54;
iVar5=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P2_E2_5", 16);
iVar3=2;
iVar4=5;
iVar1=54;
iVar5=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P2_E2_6", 16);
iVar3=2;
iVar4=6;
iVar1=55;
iVar5=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P2_E2_7", 16);
iVar3=2;
iVar4=7;
iVar1=55;
iVar5=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P2_E2_8", 16);
iVar3=2;
iVar4=8;
iVar1=58;
iVar5=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P2_E2_9", 16);
iVar3=2;
iVar4=9;
iVar1=58;
iVar5=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P2_E3", 16);
iVar3=3;
iVar4=0;
iVar1=75;
iVar5=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P2_E3_1", 16);
iVar3=3;
iVar4=1;
iVar1=75;
iVar5=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P2_E3_2", 16);
iVar3=3;
iVar4=2;
iVar1=75;
iVar5=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P2_E3_3", 16);
iVar3=3;
iVar4=3;
iVar1=75;
iVar5=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P2_E3_4", 16);
iVar3=3;
iVar4=4;
iVar1=75;
iVar5=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P2_E3_5", 16);
iVar3=3;
iVar4=5;
iVar1=75;
iVar5=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P2_E3_6", 16);
iVar3=3;
iVar4=6;
iVar1=75;
iVar5=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P2_E3_7", 16);
iVar3=3;
iVar4=7;
iVar1=75;
iVar5=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P2_E3_8", 16);
iVar3=3;
iVar4=8;
iVar1=75;
iVar5=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P2_E3_9", 16);
iVar3=3;
iVar4=9;
iVar1=75;
iVar5=10;
break;
case 110:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
iVar5=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
iVar5=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
iVar5=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P2_E7_0", 16);
iVar3=7;
iVar4=0;
iVar1=60;
iVar5=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P2_E7_1", 16);
iVar3=7;
iVar4=1;
iVar1=50;
iVar5=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P2_E7_2", 16);
iVar3=7;
iVar4=2;
iVar1=50;
iVar5=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P2_E7_3", 16);
iVar3=7;
iVar4=3;
iVar1=59;
iVar5=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P2_E7_4", 16);
iVar3=7;
iVar4=4;
iVar1=55;
iVar5=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P2_E7_5", 16);
iVar3=7;
iVar4=5;
iVar1=55;
iVar5=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P2_E7_6", 16);
iVar3=7;
iVar4=6;
iVar1=65;
iVar5=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P2_E7_7", 16);
iVar3=7;
iVar4=7;
iVar1=59;
iVar5=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P2_E7_8", 16);
iVar3=7;
iVar4=8;
iVar1=79;
iVar5=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P2_E7_9", 16);
iVar3=7;
iVar4=9;
iVar1=79;
iVar5=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P2_E8_0", 16);
iVar3=8;
iVar4=0;
iVar1=150;
iVar5=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P2_E8_1", 16);
iVar3=8;
iVar4=1;
iVar1=150;
iVar5=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P2_E8_2", 16);
iVar3=8;
iVar4=2;
iVar1=170;
iVar5=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P2_E8_3", 16);
iVar3=8;
iVar4=3;
iVar1=175;
iVar5=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P2_E8_4", 16);
iVar3=8;
iVar4=4;
iVar1=180;
iVar5=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P2_E8_5", 16);
iVar3=8;
iVar4=5;
iVar1=185;
iVar5=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P2_E8_6", 16);
iVar3=8;
iVar4=6;
iVar1=189;
iVar5=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P2_E8_7", 16);
iVar3=8;
iVar4=7;
iVar1=195;
iVar5=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P2_E8_8", 16);
iVar3=8;
iVar4=8;
iVar1=210;
iVar5=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P2_E8_9", 16);
iVar3=8;
iVar4=9;
iVar1=215;
iVar5=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P2_E9_0", 16);
iVar3=9;
iVar4=0;
iVar1=165;
iVar5=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P2_E9_1", 16);
iVar3=9;
iVar4=1;
iVar1=165;
iVar5=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P2_E9_2", 16);
iVar3=9;
iVar4=2;
iVar1=169;
iVar5=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P2_E9_3", 16);
iVar3=9;
iVar4=3;
iVar1=169;
iVar5=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P2_E9_4", 16);
iVar3=9;
iVar4=4;
iVar1=175;
iVar5=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P2_E9_5", 16);
iVar3=9;
iVar4=5;
iVar1=175;
iVar5=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P2_E9_6", 16);
iVar3=9;
iVar4=6;
iVar1=175;
iVar5=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P2_E9_7", 16);
iVar3=9;
iVar4=7;
iVar1=189;
iVar5=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P2_E9_8", 16);
iVar3=9;
iVar4=8;
iVar1=195;
iVar5=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P2_E9_9", 16);
iVar3=9;
iVar4=9;
iVar1=195;
iVar5=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P2_E10_0", 16);
iVar3=10;
iVar4=0;
iVar1=49;
iVar5=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P2_E10_1", 16);
iVar3=10;
iVar4=1;
iVar1=50;
iVar5=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P2_E10_2", 16);
iVar3=10;
iVar4=2;
iVar1=52;
iVar5=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P2_E10_3", 16);
iVar3=10;
iVar4=3;
iVar1=55;
iVar5=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P2_E10_4", 16);
iVar3=10;
iVar4=4;
iVar1=60;
iVar5=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P2_E10_5", 16);
iVar3=10;
iVar4=5;
iVar1=58;
iVar5=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P2_E10_6", 16);
iVar3=10;
iVar4=6;
iVar1=60;
iVar5=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P2_E10_7", 16);
iVar3=10;
iVar4=7;
iVar1=63;
iVar5=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P2_E10_8", 16);
iVar3=10;
iVar4=8;
iVar1=65;
iVar5=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P2_E10_9", 16);
iVar3=10;
iVar4=9;
iVar1=68;
iVar5=10;
break;
case 153:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar1=100;
iVar5=10;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P2_H2_0", 16);
iVar3=2;
iVar4=0;
iVar1=320;
iVar5=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 17:
StringCopy(&Var2, "PROPS_P2_H7_0", 16);
iVar3=7;
iVar4=0;
iVar5=0;
break;
case 18:
StringCopy(&Var2, "PROPS_P2_H7_1", 16);
iVar3=7;
iVar4=1;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
iVar5=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=1;
iVar5=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=2;
iVar5=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=3;
iVar5=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=4;
iVar5=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=5;
iVar5=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=6;
iVar5=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=7;
iVar5=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=8;
iVar5=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=9;
iVar5=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=10;
iVar5=0;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=11;
iVar5=0;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=12;
iVar5=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=13;
iVar5=0;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=14;
iVar5=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=15;
iVar5=0;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar5=0;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
iVar5=0;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
iVar5=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
iVar5=0;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=4;
iVar5=0;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=5;
iVar5=0;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=6;
iVar5=0;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=7;
iVar5=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
iVar5=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
iVar5=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=14;
iVar4=0;
iVar1=270;
iVar5=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=14;
iVar4=1;
iVar1=270;
iVar5=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar3=15;
iVar4=0;
iVar1=200;
iVar5=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar3=15;
iVar4=1;
iVar1=200;
iVar5=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar3=16;
iVar4=0;
iVar1=350;
iVar5=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar3=16;
iVar4=1;
iVar1=350;
iVar5=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar3=17;
iVar4=0;
iVar1=450;
iVar5=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar3=18;
iVar4=0;
iVar1=500;
iVar5=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar3=18;
iVar4=1;
iVar1=500;
iVar5=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar3=19;
iVar4=0;
iVar1=50;
iVar5=0;
break;
case 57:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar3=19;
iVar4=1;
iVar1=50;
iVar5=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar3=20;
iVar4=0;
iVar1=99;
iVar5=0;
break;
case 59:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar3=20;
iVar4=1;
iVar1=99;
iVar5=0;
break;
case 60:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar3=20;
iVar4=2;
iVar1=99;
iVar5=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
iVar5=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=22;
iVar4=0;
iVar5=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=0;
iVar5=0;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=1;
iVar5=0;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=2;
iVar5=0;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=3;
iVar5=0;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=4;
iVar5=0;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=5;
iVar5=0;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=24;
iVar4=0;
iVar5=0;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
iVar5=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H26_0", 16);
iVar3=26;
iVar4=0;
iVar1=20;
iVar5=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H26_1", 16);
iVar3=26;
iVar4=1;
iVar1=25;
iVar5=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H26_2", 16);
iVar3=26;
iVar4=2;
iVar1=25;
iVar5=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H26_3", 16);
iVar3=26;
iVar4=3;
iVar1=22;
iVar5=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H26_4", 16);
iVar3=26;
iVar4=4;
iVar1=20;
iVar5=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H26_5", 16);
iVar3=26;
iVar4=5;
iVar1=25;
iVar5=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H26_6", 16);
iVar3=26;
iVar4=6;
iVar1=28;
iVar5=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H26_7", 16);
iVar3=26;
iVar4=7;
iVar1=24;
iVar5=0;
break;
case 79:
StringCopy(&Var2, "PROPS_P1_H26_8", 16);
iVar3=26;
iVar4=8;
iVar1=25;
iVar5=0;
break;
case 80:
StringCopy(&Var2, "PROPS_P1_H26_9", 16);
iVar3=26;
iVar4=9;
iVar1=22;
iVar5=0;
break;
case 81:
StringCopy(&Var2, "PROPS_P1_H26_10", 16);
iVar3=26;
iVar4=10;
iVar1=18;
iVar5=0;
break;
case 82:
StringCopy(&Var2, "PROPS_P1_H26_11", 16);
iVar3=26;
iVar4=11;
iVar1=20;
iVar5=0;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_H26_12", 16);
iVar3=26;
iVar4=12;
iVar1=24;
iVar5=0;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_H26_13", 16);
iVar3=26;
iVar4=13;
iVar1=22;
iVar5=0;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_H26_14", 16);
iVar3=26;
iVar4=14;
iVar1=25;
iVar5=0;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_H26_15", 16);
iVar3=26;
iVar4=15;
iVar1=25;
iVar5=0;
break;
case 87:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=27;
iVar4=0;
iVar5=0;
break;
default:
func_238(iVar7, iParam0, 155, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_227(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
var uVar0;
int iVar1;
uParam0->f_6=0;
*uParam0=iParam9;
uParam0->f_1=(iParam2 % 32);
uParam0->f_2=(iParam2 / 32);
uParam0->f_3=iParam4;
uParam0->f_4=iParam5;
uParam0->f_7=iParam6;
StringCopy(&(uParam0->f_8), sParam3, 16);
uParam0->f_13=iParam8;
uParam0->f_12=func_237(iParam8);
if((uParam0->f_2 >=10 && uParam0->f_5 >=0) && uParam0->f_5 < 3){
if(!bParam10){
}
uParam0->f_2=0;
}
if(MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL")){}
if(bParam7){
MISC::SET_BIT(&(uParam0->f_6), 3);
}
if(bParam10){
MISC::SET_BIT(&(uParam0->f_6), false);
if(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), 5);
}
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
MISC::SET_BIT(&(uParam0->f_6), 6);
if(func_236(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_234(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_234(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_234(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_234(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_234(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_234(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_223(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_223(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_223(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_236(14)){
return;
}
uVar0=func_230(func_233(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
uVar0=func_230(func_229(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_228(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_230(iVar1, Global_78338, 0);
if(!MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}}else{
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}}


bool func_228(int iParam0, int iParam1, var uParam2){
*uParam2=979;
switch (iParam1){
case 0:
switch (iParam0){
case 2:
*uParam2=980;
break;
case 3:
*uParam2=1430;
break;
case 4:
*uParam2=996;
break;
case 6:
*uParam2=1004;
break;
case 8:
*uParam2=1431;
break;
case 9:
*uParam2=1439;
break;
case 10:
*uParam2=1441;
break;
case 1:
*uParam2=1012;
break;
case 7:
*uParam2=1442;
break;
case 11:
*uParam2=988;
break;
case 14:
*uParam2=1020;
break;
case 12:
*uParam2=1031;
break;
}
break;
case 1:
switch (iParam0){
case 2:
*uParam2=981;
break;
case 4:
*uParam2=997;
break;
case 6:
*uParam2=1005;
break;
case 8:
*uParam2=1432;
break;
case 9:
*uParam2=1440;
break;
case 7:
*uParam2=1443;
break;
case 11:
*uParam2=989;
break;
case 14:
*uParam2=1021;
break;
}
break;
case 2:
switch (iParam0){
case 2:
*uParam2=982;
break;
case 4:
*uParam2=998;
break;
case 6:
*uParam2=1006;
break;
case 8:
*uParam2=1433;
break;
case 7:
*uParam2=1444;
break;
case 11:
*uParam2=990;
break;
case 14:
*uParam2=1022;
break;
}
break;
case 3:
switch (iParam0){
case 4:
*uParam2=999;
break;
case 6:
*uParam2=1007;
break;
case 8:
*uParam2=1434;
break;
case 11:
*uParam2=991;
break;
case 14:
*uParam2=1023;
break;
}
break;
case 4:
switch (iParam0){
case 4:
*uParam2=1000;
break;
case 6:
*uParam2=1008;
break;
case 8:
*uParam2=1435;
break;
case 11:
*uParam2=992;
break;
case 14:
*uParam2=1024;
break;
}
break;
case 5:
switch (iParam0){
case 4:
*uParam2=1001;
break;
case 6:
*uParam2=1009;
break;
case 8:
*uParam2=1436;
break;
case 11:
*uParam2=993;
break;
case 14:
*uParam2=1025;
break;
}
break;
case 6:
switch (iParam0){
case 4:
*uParam2=1002;
break;
case 6:
*uParam2=1010;
break;
case 8:
*uParam2=1437;
break;
case 11:
*uParam2=994;
break;
case 14:
*uParam2=1026;
break;
}
break;
case 7:
switch (iParam0){
case 4:
*uParam2=1003;
break;
case 6:
*uParam2=1011;
break;
case 8:
*uParam2=1438;
break;
case 11:
*uParam2=995;
break;
case 14:
*uParam2=1027;
break;
}
break;
case 8:
switch (iParam0){
case 14:
*uParam2=1028;
break;
}
break;
case 9:
switch (iParam0){
case 14:
*uParam2=1029;
break;
}
break;
case 10:
switch (iParam0){
case 14:
*uParam2=1030;
break;
}
break;
}
return *uParam2 !=979;
}

int func_229(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 928;
break;
case 3:
return 1415;
break;
case 4:
return 944;
break;
case 6:
return 952;
break;
case 8:
return 1416;
break;
case 9:
return 1424;
break;
case 10:
return 1426;
break;
case 1:
return 960;
break;
case 7:
return 1427;
break;
case 11:
return 936;
break;
case 14:
return 968;
break;
case 12:
return 979;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 929;
break;
case 4:
return 945;
break;
case 6:
return 953;
break;
case 8:
return 1417;
break;
case 9:
return 1425;
break;
case 7:
return 1428;
break;
case 11:
return 937;
break;
case 14:
return 969;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 930;
break;
case 4:
return 946;
break;
case 6:
return 954;
break;
case 8:
return 1418;
break;
case 7:
return 1429;
break;
case 11:
return 938;
break;
case 14:
return 970;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 947;
break;
case 6:
return 955;
break;
case 8:
return 1419;
break;
case 11:
return 939;
break;
case 14:
return 971;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 948;
break;
case 6:
return 956;
break;
case 8:
return 1420;
break;
case 11:
return 940;
break;
case 14:
return 972;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 949;
break;
case 6:
return 957;
break;
case 8:
return 1421;
break;
case 11:
return 941;
break;
case 14:
return 973;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 950;
break;
case 6:
return 958;
break;
case 8:
return 1422;
break;
case 11:
return 942;
break;
case 14:
return 974;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 951;
break;
case 6:
return 959;
break;
case 8:
return 1423;
break;
case 11:
return 943;
break;
case 14:
return 975;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 976;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 977;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 978;
break;
}
break;
}
return 936;
}

int func_230(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
iVar0=Global_2805029[iParam0 /*3*/][func_231(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_231(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_232();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_232(){
return Global_1574918;
}

int func_233(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 876;
break;
case 3:
return 1400;
break;
case 4:
return 892;
break;
case 6:
return 900;
break;
case 8:
return 1401;
break;
case 9:
return 1409;
break;
case 10:
return 1411;
break;
case 1:
return 908;
break;
case 7:
return 1412;
break;
case 11:
return 884;
break;
case 14:
return 916;
break;
case 12:
return 927;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 877;
break;
case 4:
return 893;
break;
case 6:
return 901;
break;
case 8:
return 1402;
break;
case 9:
return 1410;
break;
case 7:
return 1413;
break;
case 11:
return 885;
break;
case 14:
return 917;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 878;
break;
case 4:
return 894;
break;
case 6:
return 902;
break;
case 8:
return 1403;
break;
case 7:
return 1414;
break;
case 11:
return 886;
break;
case 14:
return 918;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 895;
break;
case 6:
return 903;
break;
case 8:
return 1404;
break;
case 11:
return 887;
break;
case 14:
return 919;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 896;
break;
case 6:
return 904;
break;
case 8:
return 1405;
break;
case 11:
return 888;
break;
case 14:
return 920;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 897;
break;
case 6:
return 905;
break;
case 8:
return 1406;
break;
case 11:
return 889;
break;
case 14:
return 921;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 898;
break;
case 6:
return 906;
break;
case 8:
return 1407;
break;
case 11:
return 890;
break;
case 14:
return 922;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 899;
break;
case 6:
return 907;
break;
case 8:
return 1408;
break;
case 11:
return 891;
break;
case 14:
return 923;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 924;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 925;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 926;
break;
}
break;
}
return 884;
}

int func_234(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_235(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_230(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_235(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
*uParam2=14192;
if((bParam4 && Global_4539485) || (!bParam4 && bParam5)){
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_0"):
case joaat("dlc_mp_biker_m_special_2_0"):
case joaat("dlc_mp_biker_m_special_4_0"):
*uParam2=936;
*uParam3=0;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_1"):
case joaat("dlc_mp_biker_m_special_2_1"):
case joaat("dlc_mp_biker_m_special_4_1"):
*uParam2=936;
*uParam3=1;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_2"):
case joaat("dlc_mp_biker_m_special_2_2"):
case joaat("dlc_mp_biker_m_special_4_2"):
*uParam2=936;
*uParam3=2;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_3"):
case joaat("dlc_mp_biker_m_special_2_3"):
case joaat("dlc_mp_biker_m_special_4_3"):
*uParam2=936;
*uParam3=3;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_4"):
case joaat("dlc_mp_biker_m_special_2_4"):
case joaat("dlc_mp_biker_m_special_4_4"):
*uParam2=936;
*uParam3=4;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_5"):
case joaat("dlc_mp_biker_m_special_2_5"):
case joaat("dlc_mp_biker_m_special_4_5"):
*uParam2=936;
*uParam3=5;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_7"):
case joaat("dlc_mp_biker_m_special_2_7"):
case joaat("dlc_mp_biker_m_special_4_7"):
*uParam2=936;
*uParam3=7;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_8"):
case joaat("dlc_mp_biker_m_special_2_8"):
case joaat("dlc_mp_biker_m_special_4_8"):
*uParam2=936;
*uParam3=8;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_11"):
case joaat("dlc_mp_biker_m_special_2_11"):
case joaat("dlc_mp_biker_m_special_4_11"):
*uParam2=936;
*uParam3=11;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}
iVar0=-1;
if(bParam4){
if(Global_4539485){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}}elseif(bParam5){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}
if(iVar0==-1){
return 0;
}
switch (iParam1){
case 1:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=1761;
break;
case 1:
*uParam2=1762;
break;
case 2:
*uParam2=1763;
break;
case 3:
*uParam2=1764;
break;
case 4:
*uParam2=1765;
break;
case 5:
*uParam2=1766;
break;
case 6:
*uParam2=1773;
break;
case 7:
*uParam2=1774;
break;
case 8:
*uParam2=1775;
break;
case 9:
*uParam2=1776;
break;
case 10:
*uParam2=1777;
break;
case 11:
*uParam2=1778;
break;
case 12:
*uParam2=1779;
break;
case 13:
*uParam2=1787;
break;
case 14:
*uParam2=1788;
break;
case 15:
*uParam2=1889;
break;
case 16:
*uParam2=1890;
break;
case 17:
*uParam2=1921;
break;
case 18:
*uParam2=1935;
break;
case 19:
*uParam2=1936;
break;
case 20:
*uParam2=1937;
break;
case 21:
*uParam2=1938;
break;
case 22:
*uParam2=1939;
break;
case 23:
*uParam2=2043;
break;
case 24:
*uParam2=2044;
break;
case 25:
*uParam2=2070;
break;
case 26:
*uParam2=2071;
break;
case 27:
*uParam2=2072;
break;
case 28:
*uParam2=2073;
break;
case 29:
*uParam2=2074;
break;
case 30:
*uParam2=2075;
break;
case 31:
*uParam2=2076;
break;
case 32:
*uParam2=2077;
break;
case 33:
*uParam2=2078;
break;
case 34:
*uParam2=2079;
break;
case 35:
*uParam2=2326;
break;
case 36:
*uParam2=2327;
break;
case 37:
*uParam2=2391;
break;
case 38:
*uParam2=2392;
break;
case 39:
*uParam2=2393;
break;
case 40:
*uParam2=2394;
break;
case 41:
*uParam2=2453;
break;
case 42:
*uParam2=2454;
break;
case 43:
*uParam2=2455;
break;
case 44:
*uParam2=2456;
break;
case 45:
*uParam2=2457;
break;
case 46:
*uParam2=2458;
break;
case 47:
*uParam2=2459;
break;
case 48:
*uParam2=2460;
break;
case 49:
*uParam2=2461;
break;
case 50:
*uParam2=2462;
break;
case 51:
*uParam2=2592;
break;
case 52:
*uParam2=2593;
break;
case 53:
*uParam2=2594;
break;
case 54:
*uParam2=2595;
break;
case 55:
*uParam2=2596;
break;
case 56:
*uParam2=2597;
break;
case 57:
*uParam2=2598;
break;
case 58:
*uParam2=2599;
break;
case 59:
*uParam2=2600;
break;
case 60:
*uParam2=2601;
break;
case 61:
*uParam2=2602;
break;
case 62:
*uParam2=3199;
break;
case 63:
*uParam2=3200;
break;
case 64:
*uParam2=3201;
break;
case 65:
*uParam2=3202;
break;
case 66:
*uParam2=3203;
break;
case 67:
*uParam2=3204;
break;
case 68:
*uParam2=3672;
break;
case 69:
*uParam2=3673;
break;
case 70:
*uParam2=3674;
break;
case 71:
*uParam2=3675;
break;
case 72:
*uParam2=3676;
break;
case 73:
*uParam2=3677;
break;
case 74:
*uParam2=3678;
break;
case 75:
*uParam2=3679;
break;
case 76:
*uParam2=3680;
break;
case 77:
*uParam2=3681;
break;
case 78:
*uParam2=3795;
break;
case 79:
*uParam2=3796;
break;
case 80:
*uParam2=3797;
break;
case 81:
*uParam2=3798;
break;
case 82:
*uParam2=3799;
break;
case 83:
*uParam2=3800;
break;
case 84:
*uParam2=3801;
break;
case 85:
*uParam2=3802;
break;
case 86:
*uParam2=3905;
break;
case 87:
*uParam2=3906;
break;
case 88:
*uParam2=3907;
break;
case 89:
*uParam2=5340;
break;
case 90:
*uParam2=5341;
break;
case 91:
*uParam2=5342;
break;
case 92:
*uParam2=5343;
break;
case 93:
*uParam2=5344;
break;
case 94:
*uParam2=5345;
break;
case 95:
*uParam2=5346;
break;
case 96:
*uParam2=5347;
break;
case 97:
*uParam2=5348;
break;
case 98:
*uParam2=5349;
break;
case 99:
*uParam2=5350;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 100:
*uParam2=5351;
break;
case 101:
*uParam2=5397;
break;
case 102:
*uParam2=5398;
break;
case 103:
*uParam2=5399;
break;
case 104:
*uParam2=5400;
break;
case 105:
*uParam2=5401;
break;
case 106:
*uParam2=5402;
break;
case 107:
*uParam2=5403;
break;
case 108:
*uParam2=5404;
break;
case 109:
*uParam2=5405;
break;
case 110:
*uParam2=5406;
break;
case 111:
*uParam2=5407;
break;
case 112:
*uParam2=5408;
break;
case 113:
*uParam2=5409;
break;
case 114:
*uParam2=5410;
break;
case 115:
*uParam2=5411;
break;
case 116:
*uParam2=5412;
break;
case 117:
*uParam2=5413;
break;
case 118:
*uParam2=5414;
break;
case 119:
*uParam2=5415;
break;
case 120:
*uParam2=5416;
break;
case 121:
*uParam2=5417;
break;
case 122:
*uParam2=5418;
break;
case 123:
*uParam2=5419;
break;
case 124:
*uParam2=6125;
break;
case 125:
*uParam2=6126;
break;
case 126:
*uParam2=6127;
break;
case 127:
*uParam2=6128;
break;
case 128:
*uParam2=6129;
break;
case 129:
*uParam2=6130;
break;
case 130:
*uParam2=6131;
break;
case 131:
*uParam2=6132;
break;
case 132:
*uParam2=6133;
break;
case 133:
*uParam2=6134;
break;
case 134:
*uParam2=6135;
break;
case 135:
*uParam2=6136;
break;
case 136:
*uParam2=6137;
break;
case 137:
*uParam2=6138;
break;
case 138:
*uParam2=6139;
break;
case 139:
*uParam2=6438;
break;
case 140:
*uParam2=6439;
break;
case 141:
*uParam2=6440;
break;
case 142:
*uParam2=6441;
break;
case 143:
*uParam2=6442;
break;
case 144:
*uParam2=6443;
break;
case 145:
*uParam2=6444;
break;
case 146:
*uParam2=6445;
break;
case 147:
*uParam2=6446;
break;
case 148:
*uParam2=6447;
break;
case 149:
*uParam2=6448;
break;
case 150:
*uParam2=6449;
break;
case 151:
*uParam2=6450;
break;
case 152:
*uParam2=6451;
break;
case 153:
*uParam2=6452;
break;
case 154:
*uParam2=7269;
break;
case 155:
*uParam2=7270;
break;
case 156:
*uParam2=7271;
break;
case 157:
*uParam2=7272;
break;
case 158:
*uParam2=7273;
break;
case 159:
*uParam2=7274;
break;
case 160:
*uParam2=7275;
break;
case 161:
*uParam2=7882;
break;
case 162:
*uParam2=7883;
break;
case 163:
*uParam2=7884;
break;
case 164:
*uParam2=7885;
break;
case 165:
*uParam2=7886;
break;
case 166:
*uParam2=7887;
break;
case 167:
*uParam2=7888;
break;
case 168:
*uParam2=7889;
break;
case 169:
*uParam2=7890;
break;
case 170:
*uParam2=7891;
break;
case 171:
*uParam2=7892;
break;
case 172:
*uParam2=7893;
break;
case 173:
*uParam2=7894;
break;
case 174:
*uParam2=7895;
break;
case 175:
*uParam2=7896;
break;
case 176:
*uParam2=8302;
break;
case 177:
*uParam2=8303;
break;
case 178:
*uParam2=8304;
break;
case 179:
*uParam2=8305;
break;
case 180:
*uParam2=8306;
break;
case 181:
*uParam2=8307;
break;
case 182:
*uParam2=8308;
break;
case 183:
*uParam2=8309;
break;
case 184:
*uParam2=8310;
break;
case 185:
*uParam2=8311;
break;
case 186:
*uParam2=8312;
break;
case 187:
*uParam2=8313;
break;
case 188:
*uParam2=8314;
break;
case 189:
*uParam2=8315;
break;
case 190:
*uParam2=8316;
break;
case 191:
*uParam2=8317;
break;
case 192:
*uParam2=8318;
break;
case 193:
*uParam2=8319;
break;
case 194:
*uParam2=8320;
break;
case 195:
*uParam2=8321;
break;
case 196:
*uParam2=8322;
break;
case 197:
*uParam2=8323;
break;
case 198:
*uParam2=8324;
break;
case 199:
*uParam2=8325;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 200:
*uParam2=8326;
break;
case 201:
*uParam2=8941;
break;
case 202:
*uParam2=8942;
break;
case 203:
*uParam2=8943;
break;
case 204:
*uParam2=8944;
break;
case 205:
*uParam2=8945;
break;
case 206:
*uParam2=9424;
break;
case 207:
*uParam2=9425;
break;
case 208:
*uParam2=9426;
break;
case 209:
*uParam2=9427;
break;
case 210:
*uParam2=9428;
break;
case 211:
*uParam2=9429;
break;
case 212:
*uParam2=9430;
break;
case 213:
*uParam2=9431;
break;
case 214:
*uParam2=9432;
break;
case 215:
*uParam2=9433;
break;
case 216:
*uParam2=9434;
break;
case 217:
*uParam2=9435;
break;
case 218:
*uParam2=9436;
break;
case 219:
*uParam2=9437;
break;
case 220:
*uParam2=9438;
break;
case 221:
*uParam2=9439;
break;
case 222:
*uParam2=9440;
break;
case 223:
*uParam2=9441;
break;
case 224:
*uParam2=9442;
break;
case 225:
*uParam2=9443;
break;
case 226:
*uParam2=9444;
break;
case 227:
*uParam2=9445;
break;
case 228:
*uParam2=9446;
break;
case 229:
*uParam2=9447;
break;
case 230:
*uParam2=9448;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 231:
*uParam2=10303;
break;
case 232:
*uParam2=10304;
break;
case 233:
*uParam2=10305;
break;
case 234:
*uParam2=10306;
break;
case 235:
*uParam2=10307;
break;
case 236:
*uParam2=10308;
break;
case 237:
*uParam2=10309;
break;
case 238:
*uParam2=10310;
break;
case 239:
*uParam2=10311;
break;
case 240:
*uParam2=10312;
break;
case 241:
*uParam2=10313;
break;
case 242:
*uParam2=10314;
break;
case 243:
*uParam2=10315;
break;
case 244:
*uParam2=10316;
break;
case 245:
*uParam2=10317;
break;
case 246:
*uParam2=10318;
break;
case 247:
*uParam2=10319;
break;
case 248:
*uParam2=10320;
break;
case 249:
*uParam2=10321;
break;
case 250:
*uParam2=10322;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 251:
*uParam2=10419;
break;
case 252:
*uParam2=10420;
break;
case 253:
*uParam2=10421;
break;
case 254:
*uParam2=10422;
break;
case 255:
*uParam2=10423;
break;
case 256:
*uParam2=10424;
break;
case 257:
*uParam2=10425;
break;
case 258:
*uParam2=10426;
break;
case 259:
*uParam2=10427;
break;
case 260:
*uParam2=10428;
break;
case 261:
*uParam2=11845;
break;
case 262:
*uParam2=11846;
break;
case 263:
*uParam2=11847;
break;
case 264:
*uParam2=11848;
break;
case 265:
*uParam2=11849;
break;
case 266:
*uParam2=11850;
break;
case 267:
*uParam2=11851;
break;
case 268:
*uParam2=11852;
break;
case 269:
*uParam2=11853;
break;
case 270:
*uParam2=11854;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 271:
*uParam2=11876;
break;
case 272:
*uParam2=11877;
break;
case 273:
*uParam2=11878;
break;
case 274:
*uParam2=11879;
break;
case 275:
*uParam2=11880;
break;
case 276:
*uParam2=11881;
break;
case 277:
*uParam2=11882;
break;
case 278:
*uParam2=11883;
break;
case 279:
*uParam2=11884;
break;
case 280:
*uParam2=11885;
break;
case 281:
*uParam2=11886;
break;
case 282:
*uParam2=11887;
break;
}
break;
case 2:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=1767;
break;
case 1:
*uParam2=1768;
break;
case 2:
*uParam2=1769;
break;
case 3:
*uParam2=1770;
break;
case 4:
*uParam2=1771;
break;
case 5:
*uParam2=1772;
break;
case 6:
*uParam2=1780;
break;
case 7:
*uParam2=1781;
break;
case 8:
*uParam2=1782;
break;
case 9:
*uParam2=1783;
break;
case 10:
*uParam2=1784;
break;
case 11:
*uParam2=1785;
break;
case 12:
*uParam2=1786;
break;
case 13:
*uParam2=1789;
break;
case 14:
*uParam2=1790;
break;
case 15:
*uParam2=1891;
break;
case 16:
*uParam2=1892;
break;
case 17:
*uParam2=1922;
break;
case 18:
*uParam2=1940;
break;
case 19:
*uParam2=1941;
break;
case 20:
*uParam2=1942;
break;
case 21:
*uParam2=1943;
break;
case 22:
*uParam2=1944;
break;
case 23:
*uParam2=2045;
break;
case 24:
*uParam2=2046;
break;
case 25:
*uParam2=2080;
break;
case 26:
*uParam2=2081;
break;
case 27:
*uParam2=2082;
break;
case 28:
*uParam2=2083;
break;
case 29:
*uParam2=2084;
break;
case 30:
*uParam2=2085;
break;
case 31:
*uParam2=2086;
break;
case 32:
*uParam2=2087;
break;
case 33:
*uParam2=2088;
break;
case 34:
*uParam2=2089;
break;
case 35:
*uParam2=2328;
break;
case 36:
*uParam2=2329;
break;
case 37:
*uParam2=2395;
break;
case 38:
*uParam2=2396;
break;
case 39:
*uParam2=2397;
break;
case 40:
*uParam2=2398;
break;
case 41:
*uParam2=2463;
break;
case 42:
*uParam2=2464;
break;
case 43:
*uParam2=2465;
break;
case 44:
*uParam2=2466;
break;
case 45:
*uParam2=2467;
break;
case 46:
*uParam2=2468;
break;
case 47:
*uParam2=2469;
break;
case 48:
*uParam2=2470;
break;
case 49:
*uParam2=2471;
break;
case 50:
*uParam2=2472;
break;
case 51:
*uParam2=2603;
break;
case 52:
*uParam2=2604;
break;
case 53:
*uParam2=2605;
break;
case 54:
*uParam2=2606;
break;
case 55:
*uParam2=2607;
break;
case 56:
*uParam2=2608;
break;
case 57:
*uParam2=2609;
break;
case 58:
*uParam2=2610;
break;
case 59:
*uParam2=2611;
break;
case 60:
*uParam2=2612;
break;
case 61:
*uParam2=2613;
break;
case 62:
*uParam2=3205;
break;
case 63:
*uParam2=3206;
break;
case 64:
*uParam2=3207;
break;
case 65:
*uParam2=3208;
break;
case 66:
*uParam2=3209;
break;
case 67:
*uParam2=3210;
break;
case 68:
*uParam2=3682;
break;
case 69:
*uParam2=3683;
break;
case 70:
*uParam2=3684;
break;
case 71:
*uParam2=3685;
break;
case 72:
*uParam2=3686;
break;
case 73:
*uParam2=3687;
break;
case 74:
*uParam2=3688;
break;
case 75:
*uParam2=3689;
break;
case 76:
*uParam2=3690;
break;
case 77:
*uParam2=3691;
break;
case 78:
*uParam2=3803;
break;
case 79:
*uParam2=3804;
break;
case 80:
*uParam2=3805;
break;
case 81:
*uParam2=3806;
break;
case 82:
*uParam2=3807;
break;
case 83:
*uParam2=3808;
break;
case 84:
*uParam2=3809;
break;
case 85:
*uParam2=3810;
break;
case 86:
*uParam2=3908;
break;
case 87:
*uParam2=3909;
break;
case 88:
*uParam2=3910;
break;
case 89:
*uParam2=5352;
break;
case 90:
*uParam2=5353;
break;
case 91:
*uParam2=5354;
break;
case 92:
*uParam2=5355;
break;
case 93:
*uParam2=5356;
break;
case 94:
*uParam2=5357;
break;
case 95:
*uParam2=5358;
break;
case 96:
*uParam2=5359;
break;
case 97:
*uParam2=5360;
break;
case 98:
*uParam2=5361;
break;
case 99:
*uParam2=5362;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 100:
*uParam2=5363;
break;
case 101:
*uParam2=5420;
break;
case 102:
*uParam2=5421;
break;
case 103:
*uParam2=5422;
break;
case 104:
*uParam2=5423;
break;
case 105:
*uParam2=5424;
break;
case 106:
*uParam2=5425;
break;
case 107:
*uParam2=5426;
break;
case 108:
*uParam2=5427;
break;
case 109:
*uParam2=5428;
break;
case 110:
*uParam2=5429;
break;
case 111:
*uParam2=5430;
break;
case 112:
*uParam2=5431;
break;
case 113:
*uParam2=5432;
break;
case 114:
*uParam2=5433;
break;
case 115:
*uParam2=5434;
break;
case 116:
*uParam2=5435;
break;
case 117:
*uParam2=5436;
break;
case 118:
*uParam2=5437;
break;
case 119:
*uParam2=5438;
break;
case 120:
*uParam2=5439;
break;
case 121:
*uParam2=5440;
break;
case 122:
*uParam2=5441;
break;
case 123:
*uParam2=5442;
break;
case 124:
*uParam2=6140;
break;
case 125:
*uParam2=6141;
break;
case 126:
*uParam2=6142;
break;
case 127:
*uParam2=6143;
break;
case 128:
*uParam2=6144;
break;
case 129:
*uParam2=6145;
break;
case 130:
*uParam2=6146;
break;
case 131:
*uParam2=6147;
break;
case 132:
*uParam2=6148;
break;
case 133:
*uParam2=6149;
break;
case 134:
*uParam2=6150;
break;
case 135:
*uParam2=6151;
break;
case 136:
*uParam2=6152;
break;
case 137:
*uParam2=6153;
break;
case 138:
*uParam2=6154;
break;
case 139:
*uParam2=6453;
break;
case 140:
*uParam2=6454;
break;
case 141:
*uParam2=6455;
break;
case 142:
*uParam2=6456;
break;
case 143:
*uParam2=6457;
break;
case 144:
*uParam2=6458;
break;
case 145:
*uParam2=6459;
break;
case 146:
*uParam2=6460;
break;
case 147:
*uParam2=6461;
break;
case 148:
*uParam2=6462;
break;
case 149:
*uParam2=6463;
break;
case 150:
*uParam2=6464;
break;
case 151:
*uParam2=6465;
break;
case 152:
*uParam2=6466;
break;
case 153:
*uParam2=6467;
break;
case 154:
*uParam2=7276;
break;
case 155:
*uParam2=7277;
break;
case 156:
*uParam2=7278;
break;
case 157:
*uParam2=7279;
break;
case 158:
*uParam2=7280;
break;
case 159:
*uParam2=7281;
break;
case 160:
*uParam2=7282;
break;
case 161:
*uParam2=7897;
break;
case 162:
*uParam2=7898;
break;
case 163:
*uParam2=7899;
break;
case 164:
*uParam2=7900;
break;
case 165:
*uParam2=7901;
break;
case 166:
*uParam2=7902;
break;
case 167:
*uParam2=7903;
break;
case 168:
*uParam2=7904;
break;
case 169:
*uParam2=7905;
break;
case 170:
*uParam2=7906;
break;
case 171:
*uParam2=7907;
break;
case 172:
*uParam2=7908;
break;
case 173:
*uParam2=7909;
break;
case 174:
*uParam2=7910;
break;
case 175:
*uParam2=7911;
break;
case 176:
*uParam2=8327;
break;
case 177:
*uParam2=8328;
break;
case 178:
*uParam2=8329;
break;
case 179:
*uParam2=8330;
break;
case 180:
*uParam2=8331;
break;
case 181:
*uParam2=8332;
break;
case 182:
*uParam2=8333;
break;
case 183:
*uParam2=8334;
break;
case 184:
*uParam2=8335;
break;
case 185:
*uParam2=8336;
break;
case 186:
*uParam2=8337;
break;
case 187:
*uParam2=8338;
break;
case 188:
*uParam2=8339;
break;
case 189:
*uParam2=8340;
break;
case 190:
*uParam2=8341;
break;
case 191:
*uParam2=8342;
break;
case 192:
*uParam2=8343;
break;
case 193:
*uParam2=8344;
break;
case 194:
*uParam2=8345;
break;
case 195:
*uParam2=8346;
break;
case 196:
*uParam2=8347;
break;
case 197:
*uParam2=8348;
break;
case 198:
*uParam2=8349;
break;
case 199:
*uParam2=8350;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 200:
*uParam2=8351;
break;
case 201:
*uParam2=8946;
break;
case 202:
*uParam2=8947;
break;
case 203:
*uParam2=8948;
break;
case 204:
*uParam2=8949;
break;
case 205:
*uParam2=8950;
break;
case 206:
*uParam2=9449;
break;
case 207:
*uParam2=9450;
break;
case 208:
*uParam2=9451;
break;
case 209:
*uParam2=9452;
break;
case 210:
*uParam2=9453;
break;
case 211:
*uParam2=9454;
break;
case 212:
*uParam2=9455;
break;
case 213:
*uParam2=9456;
break;
case 214:
*uParam2=9457;
break;
case 215:
*uParam2=9458;
break;
case 216:
*uParam2=9459;
break;
case 217:
*uParam2=9460;
break;
case 218:
*uParam2=9461;
break;
case 219:
*uParam2=9462;
break;
case 220:
*uParam2=9463;
break;
case 221:
*uParam2=9464;
break;
case 222:
*uParam2=9465;
break;
case 223:
*uParam2=9466;
break;
case 224:
*uParam2=9467;
break;
case 225:
*uParam2=9468;
break;
case 226:
*uParam2=9469;
break;
case 227:
*uParam2=9470;
break;
case 228:
*uParam2=9471;
break;
case 229:
*uParam2=9472;
break;
case 230:
*uParam2=9473;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 231:
*uParam2=10323;
break;
case 232:
*uParam2=10324;
break;
case 233:
*uParam2=10325;
break;
case 234:
*uParam2=10326;
break;
case 235:
*uParam2=10327;
break;
case 236:
*uParam2=10328;
break;
case 237:
*uParam2=10329;
break;
case 238:
*uParam2=10330;
break;
case 239:
*uParam2=10331;
break;
case 240:
*uParam2=10332;
break;
case 241:
*uParam2=10333;
break;
case 242:
*uParam2=10334;
break;
case 243:
*uParam2=10335;
break;
case 244:
*uParam2=10336;
break;
case 245:
*uParam2=10337;
break;
case 246:
*uParam2=10338;
break;
case 247:
*uParam2=10339;
break;
case 248:
*uParam2=10340;
break;
case 249:
*uParam2=10341;
break;
case 250:
*uParam2=10342;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 251:
*uParam2=10429;
break;
case 252:
*uParam2=10430;
break;
case 253:
*uParam2=10431;
break;
case 254:
*uParam2=10432;
break;
case 255:
*uParam2=10433;
break;
case 256:
*uParam2=10434;
break;
case 257:
*uParam2=10435;
break;
case 258:
*uParam2=10436;
break;
case 259:
*uParam2=10437;
break;
case 260:
*uParam2=10438;
break;
case 261:
*uParam2=11855;
break;
case 262:
*uParam2=11856;
break;
case 263:
*uParam2=11857;
break;
case 264:
*uParam2=11858;
break;
case 265:
*uParam2=11859;
break;
case 266:
*uParam2=11860;
break;
case 267:
*uParam2=11861;
break;
case 268:
*uParam2=11862;
break;
case 269:
*uParam2=11863;
break;
case 270:
*uParam2=11864;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 271:
*uParam2=11888;
break;
case 272:
*uParam2=11889;
break;
case 273:
*uParam2=11890;
break;
case 274:
*uParam2=11891;
break;
case 275:
*uParam2=11892;
break;
case 276:
*uParam2=11893;
break;
case 277:
*uParam2=11894;
break;
case 278:
*uParam2=11895;
break;
case 279:
*uParam2=11896;
break;
case 280:
*uParam2=11897;
break;
case 281:
*uParam2=11898;
break;
case 282:
*uParam2=11899;
break;
}
break;
}
*uParam3=(iVar0 % 32);
return *uParam2 !=14192;
}


bool func_236(int iParam0){
return Global_43257==iParam0;
}

int func_237(int iParam0){
switch (iParam0){
case -1:
return 0;
break;
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
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
case 9:
return 0;
break;
case 10:
return 1;
break;
case 11:
return 0;
break;
case 12:
return 0;
break;
case 13:
return 0;
break;
}
return 0;
}


void func_238(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
var uVar1;
struct<8> Var2;
int iVar3;
int iVar4;
struct<10> Var5;
int iVar6;
int iVar7;
int iVar8;
struct<10> Var9;
int iVar10;
int iVar11;
iVar0=(iParam1 - iParam2);
iVar0=iVar0;
if(iVar0 < 0){
return;
}
uVar1=Global_78341[0 /*14*/].f_5;
if(iParam0==12){
iVar3=(iParam1 - iParam2);
if(iVar3 >=0){
iVar4=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(uVar1, 0);
if(iVar4 > iVar3){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
Global_2883588=Var2.f_1;
Global_2883589=Var2.f_0;
func_227(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_227(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&Var5);
iVar7=(iParam1 - iParam2);
if(iVar7 >=0){
iVar8=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 1, -1, -1);
if(iVar8 > iVar7){
FILES::GET_SHOP_PED_QUERY_PROP(iVar7, &Var5);
if(Var5.f_6==0){
iVar6=9;
}elseif(Var5.f_6==1){
iVar6=10;
}elseif(Var5.f_6==2){
iVar6=2;
}elseif(Var5.f_6==3){
iVar6=3;
}elseif(Var5.f_6==4){
iVar6=4;
}elseif(Var5.f_6==5){
iVar6=5;
}elseif(Var5.f_6==6){
iVar6=6;
}elseif(Var5.f_6==7){
iVar6=7;
}elseif(Var5.f_6==8){
iVar6=8;
}else{
iVar6=-1;
}
Global_2883588=Var5.f_1;
Global_2883589=Var5.f_0;
func_227(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_227(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_239(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_227(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}

int func_239(int iParam0){
switch (iParam0){
case 0:
return 0;
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
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}


void func_240(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
default:
func_238(iVar7, iParam0, 9, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_241(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P2_0", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P2_5", 16);
iVar3=0;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P2_6", 16);
iVar3=0;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P2_7", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P2_8", 16);
iVar3=0;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P2_9", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P2_10", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar3=0;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P2_13", 16);
iVar3=0;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P2_14", 16);
iVar3=0;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P2_15", 16);
iVar3=0;
iVar4=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P2_16", 16);
iVar3=0;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P2_17", 16);
iVar3=0;
iVar4=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P2_18", 16);
iVar3=0;
iVar4=0;
iVar1=10000;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P2_19", 16);
iVar3=0;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P2_20", 16);
iVar3=0;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P2_21", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P2_22", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P2_23", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P2_24", 16);
iVar3=0;
iVar4=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P2_25", 16);
iVar3=0;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P2_26", 16);
iVar3=0;
iVar4=0;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P2_27", 16);
iVar3=0;
iVar4=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P2_28", 16);
iVar3=0;
iVar4=0;
iVar1=119;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P2_29", 16);
iVar3=0;
iVar4=0;
iVar1=99;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P2_30", 16);
iVar3=0;
iVar4=0;
iVar1=129;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P2_44", 16);
iVar3=0;
iVar4=0;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P2_45", 16);
iVar3=0;
iVar4=0;
iVar1=120;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P2_46", 16);
iVar3=0;
iVar4=0;
iVar1=139;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P2_47", 16);
iVar3=0;
iVar4=0;
iVar1=149;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P2_48", 16);
iVar3=0;
iVar4=0;
iVar1=145;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P2_49", 16);
iVar3=0;
iVar4=0;
iVar1=140;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P2_50", 16);
iVar3=0;
iVar4=0;
iVar1=135;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P2_31", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P2_32", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P2_33", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P2_34", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P2_35", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P2_36", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P2_37", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P2_38", 16);
iVar3=0;
iVar4=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P2_39", 16);
iVar3=0;
iVar4=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P2_40", 16);
iVar3=0;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P2_41", 16);
iVar3=0;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P2_42", 16);
iVar3=0;
iVar4=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P2_43", 16);
iVar3=0;
iVar4=0;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar3=0;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 48, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_242(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 1, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_243(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 1, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_244(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "BERD_P2_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "BERD_P2_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "BERD_P2_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "BERD_P2_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "BERD_P2_5_0", 16);
iVar3=5;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 6, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_245(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=5;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=1;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=2;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=3;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=4;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=5;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=6;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=7;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=8;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=9;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=1;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=2;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=3;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=4;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=5;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=6;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=1;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=2;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=3;
break;
default:
func_238(iVar7, iParam0, 33, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_246(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar3=6;
iVar4=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar3=6;
iVar4=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar3=6;
iVar4=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar3=6;
iVar4=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar3=6;
iVar4=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar3=6;
iVar4=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=7;
iVar4=0;
iVar1=270;
break;
case 16:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=7;
iVar4=1;
iVar1=270;
break;
default:
func_238(iVar7, iParam0, 17, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_247(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "SPEC_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "SPEC_P2_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=16;
iVar4=0;
bVar0=true;
break;
default:
func_238(iVar7, iParam0, 18, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_248(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
default:
func_238(iVar7, iParam0, 7, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_249(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "FEET_P2_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=22;
break;
case 2:
StringCopy(&Var2, "FEET_P2_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=45;
break;
case 3:
StringCopy(&Var2, "FEET_P2_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=65;
break;
case 4:
StringCopy(&Var2, "FEET_P2_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=58;
break;
case 5:
StringCopy(&Var2, "FEET_P2_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=72;
break;
case 6:
StringCopy(&Var2, "FEET_P2_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=68;
break;
case 7:
StringCopy(&Var2, "FEET_P2_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=60;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "FEET_P2_5_0", 16);
iVar3=5;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "FEET_P2_8_0", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "FEET_P2_9_0", 16);
iVar3=9;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "FEET_P2_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=680;
break;
case 18:
StringCopy(&Var2, "FEET_P2_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=650;
break;
case 19:
StringCopy(&Var2, "FEET_P2_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=670;
break;
case 20:
StringCopy(&Var2, "FEET_P2_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=700;
break;
case 21:
StringCopy(&Var2, "FEET_P2_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=680;
break;
case 22:
StringCopy(&Var2, "FEET_P2_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=720;
break;
case 23:
StringCopy(&Var2, "FEET_P2_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=740;
break;
case 24:
StringCopy(&Var2, "FEET_P2_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=760;
break;
case 25:
StringCopy(&Var2, "FEET_P2_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=780;
break;
case 26:
StringCopy(&Var2, "FEET_P2_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=750;
break;
case 27:
StringCopy(&Var2, "FEET_P2_9_11", 16);
iVar3=9;
iVar4=11;
iVar1=700;
break;
case 28:
StringCopy(&Var2, "FEET_P2_10_0", 16);
iVar3=10;
iVar4=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=16;
iVar4=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
break;
case 36:
StringCopy(&Var2, "FEET_P2_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=790;
break;
case 37:
StringCopy(&Var2, "FEET_P2_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=750;
break;
case 38:
StringCopy(&Var2, "FEET_P2_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=860;
break;
case 39:
StringCopy(&Var2, "FEET_P2_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=750;
break;
case 40:
StringCopy(&Var2, "FEET_P2_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=790;
break;
case 41:
StringCopy(&Var2, "FEET_P2_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=840;
break;
case 42:
StringCopy(&Var2, "FEET_P2_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=820;
break;
case 43:
StringCopy(&Var2, "FEET_P2_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=800;
break;
case 44:
StringCopy(&Var2, "FEET_P2_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=850;
break;
case 45:
StringCopy(&Var2, "FEET_P2_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=870;
break;
case 46:
StringCopy(&Var2, "FEET_P2_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=720;
break;
case 47:
StringCopy(&Var2, "FEET_P2_18_11", 16);
iVar3=18;
iVar4=11;
iVar1=740;
break;
case 48:
StringCopy(&Var2, "FEET_P2_18_12", 16);
iVar3=18;
iVar4=12;
iVar1=800;
break;
case 49:
StringCopy(&Var2, "FEET_P2_18_13", 16);
iVar3=18;
iVar4=13;
iVar1=750;
break;
case 50:
StringCopy(&Var2, "FEET_P2_18_14", 16);
iVar3=18;
iVar4=14;
iVar1=770;
break;
case 51:
StringCopy(&Var2, "FEET_P2_18_15", 16);
iVar3=18;
iVar4=15;
iVar1=860;
break;
case 52:
StringCopy(&Var2, "FEET_P2_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=850;
break;
case 53:
StringCopy(&Var2, "FEET_P2_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=800;
break;
case 54:
StringCopy(&Var2, "FEET_P2_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=780;
break;
case 55:
StringCopy(&Var2, "FEET_P2_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=890;
break;
case 56:
StringCopy(&Var2, "FEET_P2_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=820;
break;
case 57:
StringCopy(&Var2, "FEET_P2_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=840;
break;
case 58:
StringCopy(&Var2, "FEET_P2_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=870;
break;
case 59:
StringCopy(&Var2, "FEET_P2_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=930;
break;
case 60:
StringCopy(&Var2, "FEET_P2_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=880;
break;
case 61:
StringCopy(&Var2, "FEET_P2_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=900;
break;
case 62:
StringCopy(&Var2, "FEET_P2_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=920;
break;
case 63:
StringCopy(&Var2, "FEET_P2_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=970;
break;
case 64:
StringCopy(&Var2, "FEET_P2_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=990;
break;
case 65:
StringCopy(&Var2, "FEET_P2_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=960;
break;
case 66:
StringCopy(&Var2, "FEET_P2_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=980;
break;
case 67:
StringCopy(&Var2, "FEET_P2_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=950;
break;
case 68:
StringCopy(&Var2, "FEET_P2_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=110;
break;
case 69:
StringCopy(&Var2, "FEET_P2_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=115;
break;
case 70:
StringCopy(&Var2, "FEET_P2_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "FEET_P2_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P2_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=125;
break;
case 73:
StringCopy(&Var2, "FEET_P2_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=128;
break;
case 74:
StringCopy(&Var2, "FEET_P2_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=135;
break;
case 75:
StringCopy(&Var2, "FEET_P2_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=130;
break;
case 76:
StringCopy(&Var2, "FEET_P2_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=145;
break;
case 77:
StringCopy(&Var2, "FEET_P2_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=110;
break;
case 78:
StringCopy(&Var2, "FEET_P2_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=120;
break;
case 79:
StringCopy(&Var2, "FEET_P2_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=150;
break;
case 80:
StringCopy(&Var2, "FEET_P2_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=125;
break;
case 81:
StringCopy(&Var2, "FEET_P2_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P2_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=130;
break;
case 83:
StringCopy(&Var2, "FEET_P2_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=110;
break;
default:
func_238(iVar7, iParam0, 84, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_250(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P2_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=95;
break;
case 2:
StringCopy(&Var2, "LEGS_P2_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=129;
break;
case 3:
StringCopy(&Var2, "LEGS_P2_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=115;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "LEGS_P2_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "LEGS_P2_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=750;
break;
case 20:
StringCopy(&Var2, "LEGS_P2_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=650;
break;
case 21:
StringCopy(&Var2, "LEGS_P2_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=850;
break;
case 22:
StringCopy(&Var2, "LEGS_P2_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=850;
break;
case 23:
StringCopy(&Var2, "LEGS_P2_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=750;
break;
case 24:
StringCopy(&Var2, "LEGS_P2_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=690;
break;
case 25:
StringCopy(&Var2, "LEGS_P2_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=820;
break;
case 26:
StringCopy(&Var2, "LEGS_P2_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=650;
break;
case 27:
StringCopy(&Var2, "LEGS_P2_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=690;
break;
case 28:
StringCopy(&Var2, "LEGS_P2_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=690;
break;
case 29:
StringCopy(&Var2, "LEGS_P2_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=820;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "LEGS_P2_14_0", 16);
iVar3=14;
iVar4=0;
break;
case 33:
StringCopy(&Var2, "LEGS_P2_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "LEGS_P2_16_0", 16);
iVar3=16;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "LEGS_P2_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=58;
break;
case 36:
StringCopy(&Var2, "LEGS_P2_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=68;
break;
case 37:
StringCopy(&Var2, "LEGS_P2_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=65;
break;
case 38:
StringCopy(&Var2, "LEGS_P2_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=60;
break;
case 39:
StringCopy(&Var2, "LEGS_P2_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=65;
break;
case 40:
StringCopy(&Var2, "LEGS_P2_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=63;
break;
case 41:
StringCopy(&Var2, "LEGS_P2_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=60;
break;
case 42:
StringCopy(&Var2, "LEGS_P2_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=58;
break;
case 43:
StringCopy(&Var2, "LEGS_P2_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "LEGS_P2_18_1", 16);
iVar3=18;
iVar4=1;
break;
case 45:
StringCopy(&Var2, "LEGS_P2_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=99;
break;
case 46:
StringCopy(&Var2, "LEGS_P2_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=105;
break;
case 47:
StringCopy(&Var2, "LEGS_P2_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=110;
break;
case 48:
StringCopy(&Var2, "LEGS_P2_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=110;
break;
case 49:
StringCopy(&Var2, "LEGS_P2_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=99;
break;
case 50:
StringCopy(&Var2, "LEGS_P2_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=110;
break;
case 51:
StringCopy(&Var2, "LEGS_P2_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=110;
break;
case 52:
StringCopy(&Var2, "LEGS_P2_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=105;
break;
case 53:
StringCopy(&Var2, "LEGS_P2_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=105;
break;
case 54:
StringCopy(&Var2, "LEGS_P2_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=15;
break;
case 55:
StringCopy(&Var2, "LEGS_P2_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=15;
break;
case 56:
StringCopy(&Var2, "LEGS_P2_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=15;
break;
case 57:
StringCopy(&Var2, "LEGS_P2_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=15;
break;
case 58:
StringCopy(&Var2, "LEGS_P2_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=15;
break;
case 59:
StringCopy(&Var2, "LEGS_P2_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=15;
break;
case 60:
StringCopy(&Var2, "LEGS_P2_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=15;
break;
case 61:
StringCopy(&Var2, "LEGS_P2_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=15;
break;
case 62:
StringCopy(&Var2, "LEGS_P2_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=600;
break;
case 63:
StringCopy(&Var2, "LEGS_P2_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=600;
break;
case 64:
StringCopy(&Var2, "LEGS_P2_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=600;
break;
case 65:
StringCopy(&Var2, "LEGS_P2_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=600;
break;
case 66:
StringCopy(&Var2, "LEGS_P2_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=600;
break;
case 67:
StringCopy(&Var2, "LEGS_P2_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=600;
break;
case 68:
StringCopy(&Var2, "LEGS_P2_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=600;
break;
case 69:
StringCopy(&Var2, "LEGS_P2_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=600;
break;
case 70:
StringCopy(&Var2, "LEGS_P2_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=600;
break;
case 71:
StringCopy(&Var2, "LEGS_P2_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=80;
break;
case 72:
StringCopy(&Var2, "LEGS_P2_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=80;
break;
case 73:
StringCopy(&Var2, "LEGS_P2_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=80;
break;
case 74:
StringCopy(&Var2, "LEGS_P2_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=80;
break;
case 75:
StringCopy(&Var2, "LEGS_P2_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=80;
break;
case 76:
StringCopy(&Var2, "LEGS_P2_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=80;
break;
case 77:
StringCopy(&Var2, "LEGS_P2_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=80;
break;
case 78:
StringCopy(&Var2, "LEGS_P2_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=80;
break;
case 79:
StringCopy(&Var2, "LEGS_P2_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=80;
break;
case 80:
StringCopy(&Var2, "LEGS_P2_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=80;
break;
case 81:
StringCopy(&Var2, "LEGS_P2_22_0", 16);
iVar3=22;
iVar4=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P2_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=12;
break;
case 83:
StringCopy(&Var2, "LEGS_P2_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=12;
break;
case 84:
StringCopy(&Var2, "LEGS_P2_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=22;
break;
case 85:
StringCopy(&Var2, "LEGS_P2_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=18;
break;
case 86:
StringCopy(&Var2, "LEGS_P2_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=20;
break;
case 87:
StringCopy(&Var2, "LEGS_P2_22_6", 16);
iVar3=22;
iVar4=6;
iVar1=30;
break;
case 88:
StringCopy(&Var2, "LEGS_P2_22_7", 16);
iVar3=22;
iVar4=7;
iVar1=30;
break;
case 89:
StringCopy(&Var2, "LEGS_P2_22_8", 16);
iVar3=22;
iVar4=8;
iVar1=30;
break;
case 90:
StringCopy(&Var2, "LEGS_P2_22_9", 16);
iVar3=22;
iVar4=9;
iVar1=30;
break;
case 91:
StringCopy(&Var2, "LEGS_P2_23_0", 16);
iVar3=23;
iVar4=0;
break;
case 92:
StringCopy(&Var2, "LEGS_P2_24_0", 16);
iVar3=24;
iVar4=0;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
break;
case 95:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=1;
break;
case 96:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=2;
break;
case 97:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=3;
break;
case 98:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=4;
break;
case 99:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=5;
break;
case 100:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=6;
break;
case 101:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=7;
break;
case 102:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=8;
break;
case 103:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=9;
break;
default:
func_238(iVar7, iParam0, 104, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_251(int iParam0){
if(iParam0 < 136){
func_253(iParam0);
}else{
func_252(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_238(3, iParam0, 242, -1);
}}


void func_252(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 136:
StringCopy(&Var2, "TORSO_P2_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=32;
break;
case 137:
StringCopy(&Var2, "TORSO_P2_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=39;
break;
case 138:
StringCopy(&Var2, "TORSO_P2_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=40;
break;
case 139:
StringCopy(&Var2, "TORSO_P2_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=42;
break;
case 140:
StringCopy(&Var2, "TORSO_P2_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=45;
break;
case 141:
StringCopy(&Var2, "TORSO_P2_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=48;
break;
case 142:
StringCopy(&Var2, "TORSO_P2_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=52;
break;
case 143:
StringCopy(&Var2, "TORSO_P2_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=55;
break;
case 144:
StringCopy(&Var2, "TORSO_P2_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=390;
break;
case 145:
StringCopy(&Var2, "TORSO_P2_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=390;
break;
case 146:
StringCopy(&Var2, "TORSO_P2_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=560;
break;
case 147:
StringCopy(&Var2, "TORSO_P2_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=390;
break;
case 148:
StringCopy(&Var2, "TORSO_P2_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=390;
break;
case 149:
StringCopy(&Var2, "TORSO_P2_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=390;
break;
case 150:
StringCopy(&Var2, "TORSO_P2_22_6", 16);
iVar3=22;
iVar4=6;
iVar1=560;
break;
case 151:
StringCopy(&Var2, "TORSO_P2_22_7", 16);
iVar3=22;
iVar4=7;
iVar1=390;
break;
case 152:
StringCopy(&Var2, "TORSO_P2_22_8", 16);
iVar3=22;
iVar4=8;
iVar1=390;
break;
case 153:
StringCopy(&Var2, "TORSO_P2_22_9", 16);
iVar3=22;
iVar4=9;
iVar1=390;
break;
case 154:
StringCopy(&Var2, "TORSO_P2_22_10", 16);
iVar3=22;
iVar4=10;
iVar1=390;
break;
case 155:
StringCopy(&Var2, "TORSO_P2_22_11", 16);
iVar3=22;
iVar4=11;
iVar1=3950;
break;
case 156:
StringCopy(&Var2, "TORSO_P2_23_0", 16);
iVar3=23;
iVar4=0;
iVar1=150;
break;
case 157:
StringCopy(&Var2, "TORSO_P2_23_1", 16);
iVar3=23;
iVar4=1;
break;
case 158:
StringCopy(&Var2, "TORSO_P2_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=150;
break;
case 159:
StringCopy(&Var2, "TORSO_P2_23_3", 16);
iVar3=23;
iVar4=3;
iVar1=150;
break;
case 160:
StringCopy(&Var2, "TORSO_P2_23_4", 16);
iVar3=23;
iVar4=4;
iVar1=160;
break;
case 161:
StringCopy(&Var2, "TORSO_P2_23_5", 16);
iVar3=23;
iVar4=5;
break;
case 162:
StringCopy(&Var2, "TORSO_P2_24_0", 16);
iVar3=24;
iVar4=0;
iVar1=19;
break;
case 163:
StringCopy(&Var2, "TORSO_P2_24_1", 16);
iVar3=24;
iVar4=1;
iVar1=20;
break;
case 164:
StringCopy(&Var2, "TORSO_P2_24_2", 16);
iVar3=24;
iVar4=2;
iVar1=19;
break;
case 165:
StringCopy(&Var2, "TORSO_P2_24_3", 16);
iVar3=24;
iVar4=3;
iVar1=22;
break;
case 166:
StringCopy(&Var2, "TORSO_P2_24_4", 16);
iVar3=24;
iVar4=4;
iVar1=20;
break;
case 167:
StringCopy(&Var2, "TORSO_P2_24_5", 16);
iVar3=24;
iVar4=5;
iVar1=28;
break;
case 168:
StringCopy(&Var2, "TORSO_P2_24_6", 16);
iVar3=24;
iVar4=6;
iVar1=28;
break;
case 169:
StringCopy(&Var2, "TORSO_P2_24_7", 16);
iVar3=24;
iVar4=7;
iVar1=25;
break;
case 170:
StringCopy(&Var2, "TORSO_P2_24_8", 16);
iVar3=24;
iVar4=8;
iVar1=22;
break;
case 171:
StringCopy(&Var2, "TORSO_P2_24_9", 16);
iVar3=24;
iVar4=9;
iVar1=19;
break;
case 172:
StringCopy(&Var2, "TORSO_P2_24_10", 16);
iVar3=24;
iVar4=10;
iVar1=22;
break;
case 173:
StringCopy(&Var2, "TORSO_P2_24_11", 16);
iVar3=24;
iVar4=11;
iVar1=19;
break;
case 174:
StringCopy(&Var2, "TORSO_P2_24_12", 16);
iVar3=24;
iVar4=12;
iVar1=20;
break;
case 175:
StringCopy(&Var2, "TORSO_P2_24_13", 16);
iVar3=24;
iVar4=13;
iVar1=25;
break;
case 176:
StringCopy(&Var2, "TORSO_P2_24_14", 16);
iVar3=24;
iVar4=14;
iVar1=20;
break;
case 177:
StringCopy(&Var2, "TORSO_P2_24_15", 16);
iVar3=24;
iVar4=15;
iVar1=28;
break;
case 178:
StringCopy(&Var2, "TORSO_P2_25_0", 16);
iVar3=25;
iVar4=0;
iVar1=35;
break;
case 179:
StringCopy(&Var2, "TORSO_P2_25_1", 16);
iVar3=25;
iVar4=1;
iVar1=40;
break;
case 180:
StringCopy(&Var2, "TORSO_P2_25_2", 16);
iVar3=25;
iVar4=2;
iVar1=45;
break;
case 181:
StringCopy(&Var2, "TORSO_P2_25_3", 16);
iVar3=25;
iVar4=3;
iVar1=45;
break;
case 182:
StringCopy(&Var2, "TORSO_P2_25_4", 16);
iVar3=25;
iVar4=4;
iVar1=49;
break;
case 183:
StringCopy(&Var2, "TORSO_P2_25_5", 16);
iVar3=25;
iVar4=5;
iVar1=820;
break;
case 184:
StringCopy(&Var2, "TORSO_P2_25_6", 16);
iVar3=25;
iVar4=6;
iVar1=790;
break;
case 185:
StringCopy(&Var2, "TORSO_P2_25_7", 16);
iVar3=25;
iVar4=7;
iVar1=820;
break;
case 186:
StringCopy(&Var2, "TORSO_P2_25_8", 16);
iVar3=25;
iVar4=8;
iVar1=929;
break;
case 187:
StringCopy(&Var2, "TORSO_P2_25_9", 16);
iVar3=25;
iVar4=9;
iVar1=40;
break;
case 188:
StringCopy(&Var2, "TORSO_P2_25_10", 16);
iVar3=25;
iVar4=10;
iVar1=850;
break;
case 189:
StringCopy(&Var2, "TORSO_P2_25_11", 16);
iVar3=25;
iVar4=11;
iVar1=790;
break;
case 190:
StringCopy(&Var2, "TORSO_P2_26_0", 16);
iVar3=26;
iVar4=0;
break;
case 191:
StringCopy(&Var2, "TORSO_P2_26_1", 16);
iVar3=26;
iVar4=1;
break;
case 192:
StringCopy(&Var2, "TORSO_P2_26_2", 16);
iVar3=26;
iVar4=2;
break;
case 193:
StringCopy(&Var2, "TORSO_P2_26_3", 16);
iVar3=26;
iVar4=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P2_26_4", 16);
iVar3=26;
iVar4=4;
break;
case 195:
StringCopy(&Var2, "TORSO_P2_26_5", 16);
iVar3=26;
iVar4=5;
break;
case 196:
StringCopy(&Var2, "TORSO_P2_26_6", 16);
iVar3=26;
iVar4=6;
break;
case 197:
StringCopy(&Var2, "TORSO_P2_26_7", 16);
iVar3=26;
iVar4=7;
break;
case 198:
StringCopy(&Var2, "TORSO_P2_26_8", 16);
iVar3=26;
iVar4=8;
break;
case 199:
StringCopy(&Var2, "TORSO_P2_26_9", 16);
iVar3=26;
iVar4=9;
break;
case 200:
StringCopy(&Var2, "TORSO_P2_27_0", 16);
iVar3=27;
iVar4=0;
iVar1=2200;
break;
case 201:
StringCopy(&Var2, "TORSO_P2_27_1", 16);
iVar3=27;
iVar4=1;
iVar1=2500;
break;
case 202:
StringCopy(&Var2, "TORSO_P2_27_2", 16);
iVar3=27;
iVar4=2;
iVar1=2500;
break;
case 203:
StringCopy(&Var2, "TORSO_P2_27_3", 16);
iVar3=27;
iVar4=3;
iVar1=2200;
break;
case 204:
StringCopy(&Var2, "TORSO_P2_27_4", 16);
iVar3=27;
iVar4=4;
iVar1=2500;
break;
case 205:
StringCopy(&Var2, "TORSO_P2_27_5", 16);
iVar3=27;
iVar4=5;
iVar1=2500;
break;
case 206:
StringCopy(&Var2, "TORSO_P2_27_6", 16);
iVar3=27;
iVar4=6;
iVar1=2200;
break;
case 207:
StringCopy(&Var2, "TORSO_P2_28_0", 16);
iVar3=28;
iVar4=0;
iVar1=1100;
break;
case 208:
StringCopy(&Var2, "TORSO_P2_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=1200;
break;
case 209:
StringCopy(&Var2, "TORSO_P2_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=1220;
break;
case 210:
StringCopy(&Var2, "TORSO_P2_28_3", 16);
iVar3=28;
iVar4=3;
iVar1=1250;
break;
case 211:
StringCopy(&Var2, "TORSO_P2_28_4", 16);
iVar3=28;
iVar4=4;
iVar1=1300;
break;
case 212:
StringCopy(&Var2, "TORSO_P2_28_5", 16);
iVar3=28;
iVar4=5;
iVar1=1360;
break;
case 213:
StringCopy(&Var2, "TORSO_P2_28_6", 16);
iVar3=28;
iVar4=6;
iVar1=35;
break;
case 214:
StringCopy(&Var2, "TORSO_P2_28_7", 16);
iVar3=28;
iVar4=7;
iVar1=38;
break;
case 215:
StringCopy(&Var2, "TORSO_P2_28_8", 16);
iVar3=28;
iVar4=8;
iVar1=40;
break;
case 216:
StringCopy(&Var2, "TORSO_P2_28_9", 16);
iVar3=28;
iVar4=9;
iVar1=42;
break;
case 217:
StringCopy(&Var2, "TORSO_P2_28_10", 16);
iVar3=28;
iVar4=10;
iVar1=50;
break;
case 218:
StringCopy(&Var2, "TORSO_P2_28_11", 16);
iVar3=28;
iVar4=11;
iVar1=45;
break;
case 219:
StringCopy(&Var2, "TORSO_P2_28_12", 16);
iVar3=28;
iVar4=12;
iVar1=45;
break;
case 220:
StringCopy(&Var2, "TORSO_P2_28_13", 16);
iVar3=28;
iVar4=13;
iVar1=44;
break;
case 221:
StringCopy(&Var2, "TORSO_P2_28_14", 16);
iVar3=28;
iVar4=14;
iVar1=46;
break;
case 222:
StringCopy(&Var2, "TORSO_P2_28_15", 16);
iVar3=28;
iVar4=15;
iVar1=52;
break;
case 223:
StringCopy(&Var2, "TORSO_P2_29_0", 16);
iVar3=29;
iVar4=0;
iVar1=3200;
break;
case 224:
StringCopy(&Var2, "TORSO_P2_29_1", 16);
iVar3=29;
iVar4=1;
iVar1=3200;
break;
case 225:
StringCopy(&Var2, "TORSO_P2_29_2", 16);
iVar3=29;
iVar4=2;
iVar1=2550;
break;
case 226:
StringCopy(&Var2, "TORSO_P2_29_3", 16);
iVar3=29;
iVar4=3;
iVar1=2750;
break;
case 227:
StringCopy(&Var2, "TORSO_P2_29_4", 16);
iVar3=29;
iVar4=4;
iVar1=2590;
break;
case 228:
StringCopy(&Var2, "TORSO_P2_29_5", 16);
iVar3=29;
iVar4=5;
iVar1=2750;
break;
case 229:
StringCopy(&Var2, "TORSO_P2_29_6", 16);
iVar3=29;
iVar4=6;
iVar1=2550;
break;
case 230:
StringCopy(&Var2, "TORSO_P2_29_7", 16);
iVar3=29;
iVar4=7;
iVar1=2590;
break;
case 231:
StringCopy(&Var2, "TORSO_P2_29_8", 16);
iVar3=29;
iVar4=8;
iVar1=2720;
break;
case 232:
StringCopy(&Var2, "TORSO_P2_29_9", 16);
iVar3=29;
iVar4=9;
iVar1=2750;
break;
case 233:
StringCopy(&Var2, "TORSO_P2_30_0", 16);
iVar3=30;
iVar4=0;
iVar1=3250;
break;
case 234:
StringCopy(&Var2, "TORSO_P2_30_1", 16);
iVar3=30;
iVar4=1;
iVar1=2950;
break;
case 235:
StringCopy(&Var2, "TORSO_P2_30_2", 16);
iVar3=30;
iVar4=2;
iVar1=3100;
break;
case 236:
StringCopy(&Var2, "TORSO_P2_30_3", 16);
iVar3=30;
iVar4=3;
iVar1=3150;
break;
case 237:
StringCopy(&Var2, "TORSO_P2_30_4", 16);
iVar3=30;
iVar4=4;
iVar1=3240;
break;
case 238:
StringCopy(&Var2, "TORSO_P2_30_5", 16);
iVar3=30;
iVar4=5;
iVar1=3350;
break;
case 239:
StringCopy(&Var2, "TORSO_P2_30_6", 16);
iVar3=30;
iVar4=6;
iVar1=3400;
break;
case 240:
StringCopy(&Var2, "TORSO_P2_30_7", 16);
iVar3=30;
iVar4=7;
iVar1=3280;
break;
case 241:
StringCopy(&Var2, "TORSO_P2_31_0", 16);
iVar3=31;
iVar4=0;
break;
default:
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_253(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P2_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=25;
break;
case 2:
StringCopy(&Var2, "TORSO_P2_0_2", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "TORSO_P2_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=15;
break;
case 4:
StringCopy(&Var2, "TORSO_P2_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=25;
break;
case 5:
StringCopy(&Var2, "TORSO_P2_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=25;
break;
case 6:
StringCopy(&Var2, "TORSO_P2_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=22;
break;
case 7:
StringCopy(&Var2, "TORSO_P2_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P2_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P2_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=20;
break;
case 10:
StringCopy(&Var2, "TORSO_P2_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=24;
break;
case 11:
StringCopy(&Var2, "TORSO_P2_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=26;
break;
case 12:
StringCopy(&Var2, "TORSO_P2_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=28;
break;
case 13:
StringCopy(&Var2, "TORSO_P2_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=29;
break;
case 14:
StringCopy(&Var2, "TORSO_P2_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=22;
break;
case 15:
StringCopy(&Var2, "TORSO_P2_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=20;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "TORSO_P2_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=35;
break;
case 19:
StringCopy(&Var2, "TORSO_P2_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "TORSO_P2_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P2_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=38;
break;
case 22:
StringCopy(&Var2, "TORSO_P2_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=40;
break;
case 23:
StringCopy(&Var2, "TORSO_P2_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=40;
break;
case 24:
StringCopy(&Var2, "TORSO_P2_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=40;
break;
case 25:
StringCopy(&Var2, "TORSO_P2_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=40;
break;
case 26:
StringCopy(&Var2, "TORSO_P2_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=40;
break;
case 27:
StringCopy(&Var2, "TORSO_P2_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 28:
StringCopy(&Var2, "TORSO_P2_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=500;
break;
case 29:
StringCopy(&Var2, "TORSO_P2_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=560;
break;
case 30:
StringCopy(&Var2, "TORSO_P2_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=600;
break;
case 31:
StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
iVar3=4;
iVar4=4;
iVar1=650;
break;
case 32:
StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
iVar3=4;
iVar4=5;
iVar1=500;
break;
case 33:
StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
iVar3=4;
iVar4=6;
iVar1=560;
break;
case 34:
StringCopy(&Var2, "TORSO_P2_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=500;
break;
case 35:
StringCopy(&Var2, "TORSO_P2_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=650;
break;
case 36:
StringCopy(&Var2, "TORSO_P2_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=540;
break;
case 37:
StringCopy(&Var2, "TORSO_P2_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=690;
break;
case 38:
StringCopy(&Var2, "TORSO_P2_4_11", 16);
iVar3=4;
iVar4=11;
iVar1=560;
break;
case 39:
StringCopy(&Var2, "TORSO_P2_4_12", 16);
iVar3=4;
iVar4=12;
iVar1=590;
break;
case 40:
StringCopy(&Var2, "TORSO_P2_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=690;
break;
case 41:
StringCopy(&Var2, "TORSO_P2_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=540;
break;
case 42:
StringCopy(&Var2, "TORSO_P2_4_15", 16);
iVar3=4;
iVar4=15;
iVar1=500;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "TORSO_P2_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 55:
StringCopy(&Var2, "TORSO_P2_11_1", 16);
iVar3=11;
iVar4=1;
break;
case 56:
StringCopy(&Var2, "TORSO_P2_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "TORSO_P2_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "TORSO_P2_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=22;
break;
case 59:
StringCopy(&Var2, "TORSO_P2_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=350;
break;
case 60:
StringCopy(&Var2, "TORSO_P2_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=27;
break;
case 61:
StringCopy(&Var2, "TORSO_P2_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=370;
break;
case 62:
StringCopy(&Var2, "TORSO_P2_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=25;
break;
case 63:
StringCopy(&Var2, "TORSO_P2_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=22;
break;
case 64:
StringCopy(&Var2, "TORSO_P2_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=25;
break;
case 65:
StringCopy(&Var2, "TORSO_P2_11_11", 16);
iVar3=11;
iVar4=11;
break;
case 66:
StringCopy(&Var2, "TORSO_P2_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=22;
break;
case 67:
StringCopy(&Var2, "TORSO_P2_11_13", 16);
iVar3=11;
iVar4=13;
iVar1=27;
break;
case 68:
StringCopy(&Var2, "TORSO_P2_11_14", 16);
iVar3=11;
iVar4=14;
iVar1=25;
break;
case 69:
StringCopy(&Var2, "TORSO_P2_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=27;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
iVar6=1;
break;
case 71:
StringCopy(&Var2, "TORSO_P2_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 72:
StringCopy(&Var2, "TORSO_P2_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=39;
break;
case 73:
StringCopy(&Var2, "TORSO_P2_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=42;
break;
case 74:
StringCopy(&Var2, "TORSO_P2_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=49;
break;
case 75:
StringCopy(&Var2, "TORSO_P2_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=35;
break;
case 76:
StringCopy(&Var2, "TORSO_P2_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=50;
break;
case 77:
StringCopy(&Var2, "TORSO_P2_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=50;
break;
case 78:
StringCopy(&Var2, "TORSO_P2_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=50;
break;
case 79:
StringCopy(&Var2, "TORSO_P2_14_0", 16);
iVar3=14;
iVar4=0;
break;
case 80:
StringCopy(&Var2, "TORSO_P2_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=88;
break;
case 81:
StringCopy(&Var2, "TORSO_P2_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=60;
break;
case 82:
StringCopy(&Var2, "TORSO_P2_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=80;
break;
case 83:
StringCopy(&Var2, "TORSO_P2_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=70;
break;
case 84:
StringCopy(&Var2, "TORSO_P2_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=80;
break;
case 85:
StringCopy(&Var2, "TORSO_P2_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=70;
break;
case 86:
StringCopy(&Var2, "TORSO_P2_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=90;
break;
case 87:
StringCopy(&Var2, "TORSO_P2_14_8", 16);
iVar3=14;
iVar4=8;
iVar1=95;
break;
case 88:
StringCopy(&Var2, "TORSO_P2_14_9", 16);
iVar3=14;
iVar4=9;
iVar1=105;
break;
case 89:
StringCopy(&Var2, "TORSO_P2_14_10", 16);
iVar3=14;
iVar4=10;
iVar1=95;
break;
case 90:
StringCopy(&Var2, "TORSO_P2_14_11", 16);
iVar3=14;
iVar4=11;
iVar1=110;
break;
case 91:
StringCopy(&Var2, "TORSO_P2_14_12", 16);
iVar3=14;
iVar4=12;
iVar1=98;
break;
case 92:
StringCopy(&Var2, "TORSO_P2_14_13", 16);
iVar3=14;
iVar4=13;
iVar1=88;
break;
case 93:
StringCopy(&Var2, "TORSO_P2_14_14", 16);
iVar3=14;
iVar4=14;
iVar1=98;
break;
case 94:
StringCopy(&Var2, "TORSO_P2_14_15", 16);
iVar3=14;
iVar4=15;
iVar1=110;
break;
case 95:
StringCopy(&Var2, "TORSO_P2_15_0", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "TORSO_P2_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 97:
StringCopy(&Var2, "TORSO_P2_17_0", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "TORSO_P2_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 99:
StringCopy(&Var2, "TORSO_P2_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=520;
break;
case 100:
StringCopy(&Var2, "TORSO_P2_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=490;
break;
case 101:
StringCopy(&Var2, "TORSO_P2_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=450;
break;
case 102:
StringCopy(&Var2, "TORSO_P2_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=420;
break;
case 103:
StringCopy(&Var2, "TORSO_P2_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=420;
break;
case 104:
StringCopy(&Var2, "TORSO_P2_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=85;
break;
case 105:
StringCopy(&Var2, "TORSO_P2_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=85;
break;
case 106:
StringCopy(&Var2, "TORSO_P2_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "TORSO_P2_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=68;
break;
case 108:
StringCopy(&Var2, "TORSO_P2_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=68;
break;
case 109:
StringCopy(&Var2, "TORSO_P2_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=78;
break;
case 110:
StringCopy(&Var2, "TORSO_P2_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=85;
break;
case 111:
StringCopy(&Var2, "TORSO_P2_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=68;
break;
case 112:
StringCopy(&Var2, "TORSO_P2_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=75;
break;
case 113:
StringCopy(&Var2, "TORSO_P2_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=75;
break;
case 114:
StringCopy(&Var2, "TORSO_P2_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=78;
break;
case 115:
StringCopy(&Var2, "TORSO_P2_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=75;
break;
case 116:
StringCopy(&Var2, "TORSO_P2_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=75;
break;
case 117:
StringCopy(&Var2, "TORSO_P2_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=75;
break;
case 118:
StringCopy(&Var2, "TORSO_P2_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=78;
break;
case 119:
StringCopy(&Var2, "TORSO_P2_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=78;
break;
case 120:
StringCopy(&Var2, "TORSO_P2_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=40;
break;
case 121:
StringCopy(&Var2, "TORSO_P2_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=32;
break;
case 122:
StringCopy(&Var2, "TORSO_P2_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=32;
break;
case 123:
StringCopy(&Var2, "TORSO_P2_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=32;
break;
case 124:
StringCopy(&Var2, "TORSO_P2_20_4", 16);
iVar3=20;
iVar4=4;
break;
case 125:
StringCopy(&Var2, "TORSO_P2_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=38;
break;
case 126:
StringCopy(&Var2, "TORSO_P2_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=35;
break;
case 127:
StringCopy(&Var2, "TORSO_P2_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=38;
break;
case 128:
StringCopy(&Var2, "TORSO_P2_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=29;
break;
case 129:
StringCopy(&Var2, "TORSO_P2_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=32;
break;
case 130:
StringCopy(&Var2, "TORSO_P2_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=29;
break;
case 131:
StringCopy(&Var2, "TORSO_P2_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=35;
break;
case 132:
StringCopy(&Var2, "TORSO_P2_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=32;
break;
case 133:
StringCopy(&Var2, "TORSO_P2_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=35;
break;
case 134:
StringCopy(&Var2, "TORSO_P2_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=32;
break;
case 135:
StringCopy(&Var2, "TORSO_P2_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=40;
break;
default:
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_254(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P2_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P2_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P2_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P2_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "HAIR_P2_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "HAIR_P2_5_0", 16);
iVar3=5;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "HAIR_P2_6_0", 16);
iVar3=6;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "HAIR_P2_7_0", 16);
iVar3=7;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 9, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_255(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=0;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=6;
break;
default:
func_238(iVar7, iParam0, 7, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_256(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_274(iParam1);
break;
case 2:
func_273(iParam1);
break;
case 3:
func_269(iParam1);
break;
case 4:
func_268(iParam1);
break;
case 6:
func_267(iParam1);
break;
case 5:
func_266(iParam1);
break;
case 8:
func_265(iParam1);
break;
case 9:
func_264(iParam1);
break;
case 10:
func_263(iParam1);
break;
case 1:
func_262(iParam1);
break;
case 7:
func_261(iParam1);
break;
case 11:
func_260(iParam1);
break;
case 12:
func_259(iParam1);
break;
case 13:
func_258(iParam1);
break;
case 14:
func_257(iParam1);
break;
}}


void func_257(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 158:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=2;
break;
case 159:
StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
iVar3=1;
iVar4=0;
iVar1=4590;
iVar5=2;
break;
case 160:
StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
iVar3=1;
iVar4=1;
iVar1=4100;
iVar5=2;
break;
case 161:
StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
iVar3=1;
iVar4=2;
iVar1=3850;
iVar5=2;
break;
case 162:
StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
iVar3=1;
iVar4=3;
iVar1=1850;
iVar5=2;
break;
case 163:
StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
iVar3=1;
iVar4=4;
iVar1=5250;
iVar5=2;
break;
case 164:
StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
iVar3=1;
iVar4=5;
iVar1=2700;
iVar5=2;
break;
case 165:
StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
iVar3=1;
iVar4=6;
iVar1=3100;
iVar5=2;
break;
case 166:
StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
iVar3=1;
iVar4=7;
iVar1=5050;
iVar5=2;
break;
case 167:
StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
iVar3=2;
iVar4=0;
iVar1=2500;
iVar5=2;
break;
case 168:
StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
iVar3=2;
iVar4=1;
iVar1=1950;
iVar5=2;
break;
case 169:
StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
iVar3=2;
iVar4=2;
iVar1=3900;
iVar5=2;
break;
case 170:
StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
iVar3=2;
iVar4=3;
iVar1=3550;
iVar5=2;
break;
case 171:
StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
iVar3=2;
iVar4=4;
iVar1=4500;
iVar5=2;
break;
case 172:
StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
iVar3=2;
iVar4=5;
iVar1=2700;
iVar5=2;
break;
case 173:
StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
iVar3=2;
iVar4=6;
iVar1=3100;
iVar5=2;
break;
case 174:
StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
iVar3=2;
iVar4=7;
iVar1=2950;
iVar5=2;
break;
case 82:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_E1_0", 16);
iVar3=1;
iVar4=0;
iVar1=75;
iVar5=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_E1_1", 16);
iVar3=1;
iVar4=1;
iVar1=75;
iVar5=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_E1_2", 16);
iVar3=1;
iVar4=2;
iVar1=75;
iVar5=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_E1_3", 16);
iVar3=1;
iVar4=3;
iVar1=75;
iVar5=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P1_E1_4", 16);
iVar3=1;
iVar4=4;
iVar1=75;
iVar5=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P1_E1_5", 16);
iVar3=1;
iVar4=5;
iVar1=75;
iVar5=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P1_E1_6", 16);
iVar3=1;
iVar4=6;
iVar1=75;
iVar5=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P1_E1_7", 16);
iVar3=1;
iVar4=7;
iVar1=75;
iVar5=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P1_E1_8", 16);
iVar3=1;
iVar4=8;
iVar1=75;
iVar5=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P1_E1_9", 16);
iVar3=1;
iVar4=9;
iVar1=75;
iVar5=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P1_E2", 16);
iVar3=2;
iVar4=0;
iVar5=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P1_E3", 16);
iVar3=3;
iVar4=0;
iVar1=110;
iVar5=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P1_E4_0", 16);
iVar3=4;
iVar4=0;
iVar1=120;
iVar5=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P1_E4_1", 16);
iVar3=4;
iVar4=1;
iVar1=128;
iVar5=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P1_E4_2", 16);
iVar3=4;
iVar4=2;
iVar1=130;
iVar5=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P1_E4_3", 16);
iVar3=4;
iVar4=3;
iVar1=140;
iVar5=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P1_E4_4", 16);
iVar3=4;
iVar4=4;
iVar1=145;
iVar5=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P1_E4_5", 16);
iVar3=4;
iVar4=5;
iVar1=135;
iVar5=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P1_E4_6", 16);
iVar3=4;
iVar4=6;
iVar1=138;
iVar5=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P1_E5_0", 16);
iVar3=5;
iVar4=0;
iVar1=110;
iVar5=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P1_E5_1", 16);
iVar3=5;
iVar4=1;
iVar1=112;
iVar5=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P1_E5_2", 16);
iVar3=5;
iVar4=2;
iVar1=115;
iVar5=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P1_E5_3", 16);
iVar3=5;
iVar4=3;
iVar1=118;
iVar5=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P1_E5_4", 16);
iVar3=5;
iVar4=4;
iVar1=120;
iVar5=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P1_E5_5", 16);
iVar3=5;
iVar4=5;
iVar1=125;
iVar5=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P1_E5_6", 16);
iVar3=5;
iVar4=6;
iVar1=128;
iVar5=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P1_E5_7", 16);
iVar3=5;
iVar4=7;
iVar1=138;
iVar5=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P1_E5_8", 16);
iVar3=5;
iVar4=8;
iVar1=140;
iVar5=10;
break;
case 111:
StringCopy(&Var2, "PROPS_P1_E5_9", 16);
iVar3=5;
iVar4=9;
iVar1=155;
iVar5=10;
break;
case 112:
StringCopy(&Var2, "PROPS_P1_E6_0", 16);
iVar3=6;
iVar4=0;
iVar1=55;
iVar5=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P1_E6_1", 16);
iVar3=6;
iVar4=1;
iVar1=55;
iVar5=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P1_E6_2", 16);
iVar3=6;
iVar4=2;
iVar1=58;
iVar5=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P1_E6_3", 16);
iVar3=6;
iVar4=3;
iVar1=58;
iVar5=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P1_E6_4", 16);
iVar3=6;
iVar4=4;
iVar1=60;
iVar5=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P1_E6_5", 16);
iVar3=6;
iVar4=5;
iVar1=62;
iVar5=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P1_E6_6", 16);
iVar3=6;
iVar4=6;
iVar1=65;
iVar5=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P1_E6_7", 16);
iVar3=6;
iVar4=7;
iVar1=68;
iVar5=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P1_E6_8", 16);
iVar3=6;
iVar4=8;
iVar1=68;
iVar5=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P1_E6_9", 16);
iVar3=6;
iVar4=9;
iVar1=72;
iVar5=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P1_E7_0", 16);
iVar3=7;
iVar4=0;
iVar1=145;
iVar5=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P1_E7_1", 16);
iVar3=7;
iVar4=1;
iVar1=149;
iVar5=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P1_E7_2", 16);
iVar3=7;
iVar4=2;
iVar1=139;
iVar5=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P1_E7_3", 16);
iVar3=7;
iVar4=3;
iVar1=149;
iVar5=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P1_E7_4", 16);
iVar3=7;
iVar4=4;
iVar1=135;
iVar5=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P1_E7_5", 16);
iVar3=7;
iVar4=5;
iVar1=138;
iVar5=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P1_E7_6", 16);
iVar3=7;
iVar4=6;
iVar1=140;
iVar5=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P1_E7_7", 16);
iVar3=7;
iVar4=7;
iVar1=145;
iVar5=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P1_E7_8", 16);
iVar3=7;
iVar4=8;
iVar1=159;
iVar5=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P1_E7_9", 16);
iVar3=7;
iVar4=9;
iVar1=155;
iVar5=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P1_E8_0", 16);
iVar3=8;
iVar4=0;
iVar1=198;
iVar5=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P1_E8_1", 16);
iVar3=8;
iVar4=1;
iVar1=210;
iVar5=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P1_E8_2", 16);
iVar3=8;
iVar4=2;
iVar1=185;
iVar5=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P1_E8_3", 16);
iVar3=8;
iVar4=3;
iVar1=220;
iVar5=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P1_E8_4", 16);
iVar3=8;
iVar4=4;
iVar1=190;
iVar5=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P1_E8_5", 16);
iVar3=8;
iVar4=5;
iVar1=200;
iVar5=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P1_E8_6", 16);
iVar3=8;
iVar4=6;
iVar1=208;
iVar5=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P1_E8_7", 16);
iVar3=8;
iVar4=7;
iVar1=210;
iVar5=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P1_E9_0", 16);
iVar3=9;
iVar4=0;
iVar1=165;
iVar5=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P1_E9_1", 16);
iVar3=9;
iVar4=1;
iVar1=185;
iVar5=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P1_E9_2", 16);
iVar3=9;
iVar4=2;
iVar1=190;
iVar5=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P1_E9_3", 16);
iVar3=9;
iVar4=3;
iVar1=178;
iVar5=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P1_E9_4", 16);
iVar3=9;
iVar4=4;
iVar1=180;
iVar5=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P1_E9_5", 16);
iVar3=9;
iVar4=5;
iVar1=168;
iVar5=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P1_E9_6", 16);
iVar3=9;
iVar4=6;
iVar1=170;
iVar5=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P1_E9_7", 16);
iVar3=9;
iVar4=7;
iVar1=175;
iVar5=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P1_E9_8", 16);
iVar3=9;
iVar4=8;
iVar1=170;
iVar5=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P1_E9_9", 16);
iVar3=9;
iVar4=9;
iVar1=178;
iVar5=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P1_E10_0", 16);
iVar3=10;
iVar4=0;
iVar1=140;
iVar5=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P1_E10_1", 16);
iVar3=10;
iVar4=1;
iVar1=145;
iVar5=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P1_E10_2", 16);
iVar3=10;
iVar4=2;
iVar1=150;
iVar5=10;
break;
case 153:
StringCopy(&Var2, "PROPS_P1_E10_3", 16);
iVar3=10;
iVar4=3;
iVar1=165;
iVar5=10;
break;
case 154:
StringCopy(&Var2, "PROPS_P1_E10_4", 16);
iVar3=10;
iVar4=4;
iVar1=168;
iVar5=10;
break;
case 155:
StringCopy(&Var2, "PROPS_P1_E10_5", 16);
iVar3=10;
iVar4=5;
iVar1=178;
iVar5=10;
break;
case 156:
StringCopy(&Var2, "PROPS_P1_E10_6", 16);
iVar3=10;
iVar4=6;
iVar1=160;
iVar5=10;
break;
case 157:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar1=100;
iVar5=10;
break;
case 10:
StringCopy(&Var2, "PROPS_P1_H0_0", 16);
iVar3=0;
iVar4=0;
iVar1=320;
iVar5=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 13:
StringCopy(&Var2, "PROPS_P1_H3_0", 16);
iVar3=3;
iVar4=0;
iVar5=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
iVar5=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
iVar5=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=1;
iVar5=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=2;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=3;
iVar5=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=4;
iVar5=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=5;
iVar5=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=6;
iVar5=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=7;
iVar5=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=8;
iVar5=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 26:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=8;
iVar4=0;
iVar1=270;
iVar5=0;
break;
case 27:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=8;
iVar4=1;
iVar1=270;
iVar5=0;
break;
case 28:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar3=9;
iVar4=0;
iVar1=200;
iVar5=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar3=9;
iVar4=1;
iVar1=200;
iVar5=0;
break;
case 30:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar3=10;
iVar4=0;
iVar1=350;
iVar5=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar3=10;
iVar4=1;
iVar1=350;
iVar5=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar3=11;
iVar4=0;
iVar1=450;
iVar5=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar3=12;
iVar4=0;
iVar1=500;
iVar5=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar3=12;
iVar4=1;
iVar1=500;
iVar5=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar3=13;
iVar4=0;
iVar1=50;
iVar5=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar3=13;
iVar4=1;
iVar1=50;
iVar5=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar3=14;
iVar4=0;
iVar1=99;
iVar5=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar3=14;
iVar4=1;
iVar1=99;
iVar5=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar3=14;
iVar4=2;
iVar1=99;
iVar5=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar3=16;
iVar4=0;
iVar5=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar3=16;
iVar4=1;
iVar5=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar3=16;
iVar4=2;
iVar5=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar3=16;
iVar4=3;
iVar5=0;
break;
case 45:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar3=16;
iVar4=4;
iVar5=0;
break;
case 46:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar3=16;
iVar4=5;
iVar5=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar3=16;
iVar4=6;
iVar5=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar3=16;
iVar4=7;
iVar5=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar3=16;
iVar4=8;
iVar5=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar3=16;
iVar4=9;
iVar5=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar3=16;
iVar4=10;
iVar5=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar3=16;
iVar4=11;
iVar5=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar3=16;
iVar4=12;
iVar5=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar3=16;
iVar4=13;
iVar5=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar3=16;
iVar4=14;
iVar5=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar3=16;
iVar4=15;
iVar5=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
iVar5=0;
break;
case 58:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=1;
iVar5=0;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=2;
iVar5=0;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=3;
iVar5=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=4;
iVar5=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=5;
iVar5=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
iVar5=0;
break;
case 64:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar3=19;
iVar4=0;
iVar1=30;
iVar5=0;
break;
case 65:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar3=19;
iVar4=1;
iVar1=30;
iVar5=0;
break;
case 66:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar3=19;
iVar4=2;
iVar1=32;
iVar5=0;
break;
case 67:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar3=19;
iVar4=3;
iVar1=35;
iVar5=0;
break;
case 68:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar3=19;
iVar4=4;
iVar1=38;
iVar5=0;
break;
case 69:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar3=19;
iVar4=5;
iVar1=42;
iVar5=0;
break;
case 70:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar3=19;
iVar4=6;
iVar1=42;
iVar5=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar3=19;
iVar4=7;
iVar1=40;
iVar5=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar3=19;
iVar4=8;
iVar1=45;
iVar5=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar3=19;
iVar4=9;
iVar1=48;
iVar5=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar3=19;
iVar4=10;
iVar1=25;
iVar5=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar3=19;
iVar4=11;
iVar1=25;
iVar5=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar3=19;
iVar4=12;
iVar1=28;
iVar5=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar3=19;
iVar4=13;
iVar1=28;
iVar5=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar3=19;
iVar4=14;
iVar1=30;
iVar5=0;
break;
case 79:
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar3=19;
iVar4=15;
iVar1=35;
iVar5=0;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=20;
iVar4=0;
iVar5=0;
break;
case 81:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
iVar5=0;
break;
default:
func_238(iVar7, iParam0, 175, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_258(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 9, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_259(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P1_0", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P1_2", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P1_4", 16);
iVar3=0;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P1_7", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar3=0;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P1_11", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P1_12", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P1_13", 16);
iVar3=0;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P1_15", 16);
iVar3=0;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P1_16", 16);
iVar3=0;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P1_17", 16);
iVar3=0;
iVar4=0;
iVar1=10000;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P1_18", 16);
iVar3=0;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P1_19", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P1_20", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P1_21", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P1_22", 16);
iVar3=0;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P1_23", 16);
iVar3=0;
iVar4=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P1_24", 16);
iVar3=0;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P1_25", 16);
iVar3=0;
iVar4=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P1_26", 16);
iVar3=0;
iVar4=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P1_27", 16);
iVar3=0;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P1_28", 16);
iVar3=0;
iVar4=0;
iVar1=4000;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P1_29", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P1_30", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P1_31", 16);
iVar3=0;
iVar4=0;
iVar1=4650;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P1_32", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P1_33", 16);
iVar3=0;
iVar4=0;
iVar1=5000;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P1_34", 16);
iVar3=0;
iVar4=0;
iVar1=4750;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P1_35", 16);
iVar3=0;
iVar4=0;
iVar1=4750;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P1_36", 16);
iVar3=0;
iVar4=0;
iVar1=5200;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P1_37", 16);
iVar3=0;
iVar4=0;
iVar1=5200;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P1_38", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P1_39", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P1_40", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P1_41", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P1_42", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P1_43", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P1_47", 16);
iVar3=0;
iVar4=0;
iVar1=3000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P1_48", 16);
iVar3=0;
iVar4=0;
iVar1=3000;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P1_49", 16);
iVar3=0;
iVar4=0;
iVar1=3000;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar3=0;
iVar4=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P1_50", 16);
iVar3=0;
iVar4=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P1_51", 16);
iVar3=0;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P1_52", 16);
iVar3=0;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P1_53", 16);
iVar3=0;
iVar4=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P1_54", 16);
iVar3=0;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 47, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_260(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
break;
case 5:
StringCopy(&Var2, "JBIB_P1_1_0", 16);
iVar3=2;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "JBIB_P1_1_1", 16);
iVar3=2;
iVar4=1;
break;
case 7:
StringCopy(&Var2, "JBIB_P1_1_2", 16);
iVar3=2;
iVar4=2;
break;
case 8:
StringCopy(&Var2, "JBIB_P1_1_3", 16);
iVar3=2;
iVar4=3;
break;
case 9:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar3=3;
iVar4=1;
break;
case 11:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar3=3;
iVar4=2;
break;
case 12:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar3=3;
iVar4=3;
break;
case 13:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar3=3;
iVar4=4;
break;
case 14:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar3=3;
iVar4=5;
break;
case 15:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar3=3;
iVar4=6;
break;
case 16:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar3=3;
iVar4=7;
break;
case 17:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar3=3;
iVar4=8;
break;
case 18:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar3=3;
iVar4=9;
break;
case 19:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar3=3;
iVar4=10;
break;
case 20:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar3=3;
iVar4=11;
break;
case 21:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar3=3;
iVar4=12;
break;
case 22:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar3=3;
iVar4=13;
break;
case 23:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar3=3;
iVar4=14;
break;
case 24:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar3=3;
iVar4=15;
break;
case 25:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar3=4;
iVar4=0;
break;
case 26:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar3=4;
iVar4=1;
break;
case 27:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar3=4;
iVar4=2;
break;
case 28:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar3=4;
iVar4=3;
break;
case 29:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar3=4;
iVar4=4;
break;
case 30:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar3=4;
iVar4=5;
break;
case 31:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar3=4;
iVar4=6;
break;
case 32:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar3=4;
iVar4=7;
break;
case 33:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar3=4;
iVar4=8;
break;
case 34:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar3=4;
iVar4=9;
break;
case 35:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar3=4;
iVar4=10;
break;
case 36:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar3=4;
iVar4=11;
break;
case 37:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar3=4;
iVar4=12;
break;
case 38:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar3=4;
iVar4=13;
break;
case 39:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar3=4;
iVar4=14;
break;
case 40:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar3=4;
iVar4=15;
break;
case 41:
StringCopy(&Var2, "JBIB_P1_5_0", 16);
iVar3=5;
iVar4=0;
break;
case 42:
StringCopy(&Var2, "JBIB_P1_6_0", 16);
iVar3=6;
iVar4=0;
break;
case 43:
StringCopy(&Var2, "JBIB_P1_6_1", 16);
iVar3=6;
iVar4=1;
break;
case 44:
StringCopy(&Var2, "JBIB_P1_7_0", 16);
iVar3=7;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "JBIB_P1_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 46:
StringCopy(&Var2, "JBIB_P1_9_0", 16);
iVar3=9;
iVar4=0;
break;
case 47:
StringCopy(&Var2, "JBIB_P1_10_0", 16);
iVar3=10;
iVar4=0;
break;
case 48:
StringCopy(&Var2, "JBIB_P1_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=48;
break;
case 49:
StringCopy(&Var2, "JBIB_P1_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=35;
break;
case 50:
StringCopy(&Var2, "JBIB_P1_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=32;
break;
case 51:
StringCopy(&Var2, "JBIB_P1_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=35;
break;
case 52:
StringCopy(&Var2, "JBIB_P1_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=48;
break;
case 53:
StringCopy(&Var2, "JBIB_P1_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=52;
break;
case 54:
StringCopy(&Var2, "JBIB_P1_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=38;
break;
case 55:
StringCopy(&Var2, "JBIB_P1_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=42;
break;
case 56:
StringCopy(&Var2, "JBIB_P1_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=38;
break;
case 57:
StringCopy(&Var2, "JBIB_P1_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=35;
break;
case 58:
StringCopy(&Var2, "JBIB_P1_10_11", 16);
iVar3=10;
iVar4=11;
iVar1=48;
break;
case 59:
StringCopy(&Var2, "JBIB_P1_10_12", 16);
iVar3=10;
iVar4=12;
iVar1=42;
break;
case 60:
StringCopy(&Var2, "JBIB_P1_10_13", 16);
iVar3=10;
iVar4=13;
iVar1=45;
break;
case 61:
StringCopy(&Var2, "JBIB_P1_10_14", 16);
iVar3=10;
iVar4=14;
iVar1=45;
break;
case 62:
StringCopy(&Var2, "JBIB_P1_10_15", 16);
iVar3=10;
iVar4=15;
iVar1=49;
break;
default:
func_238(iVar7, iParam0, 63, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_261(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 1, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_262(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "BERD_P1_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "BERD_P1_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "BERD_P1_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "BERD_P1_4_0", 16);
iVar3=4;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 5, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_263(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=2;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=3;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=4;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=5;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=1;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=2;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=3;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=4;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=5;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=6;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=5;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=6;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=7;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=8;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=9;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=10;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=11;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=12;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=13;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=14;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=15;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=1;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=2;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=3;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=4;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=5;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=6;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=1;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=2;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=3;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=4;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=5;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=6;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=7;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=1;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=2;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=3;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 53, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_264(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar3=5;
iVar4=0;
iVar1=125;
break;
case 6:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar3=5;
iVar4=1;
iVar1=150;
break;
case 7:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar3=5;
iVar4=2;
iVar1=175;
break;
case 8:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar3=5;
iVar4=3;
iVar1=85;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar3=5;
iVar4=4;
iVar1=150;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar3=5;
iVar4=5;
iVar1=175;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 12, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_265(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC_P1_9_0", 16);
iVar3=9;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "SPEC_P1_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=195;
break;
case 12:
StringCopy(&Var2, "SPEC_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=195;
break;
case 13:
StringCopy(&Var2, "SPEC_P1_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=195;
break;
case 14:
StringCopy(&Var2, "SPEC_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=250;
break;
case 15:
StringCopy(&Var2, "SPEC_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=250;
break;
case 16:
StringCopy(&Var2, "SPEC_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=250;
break;
case 17:
StringCopy(&Var2, "SPEC_P1_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=195;
break;
case 18:
StringCopy(&Var2, "SPEC_P1_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=250;
break;
case 19:
StringCopy(&Var2, "SPEC_P1_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=250;
break;
case 20:
StringCopy(&Var2, "SPEC_P1_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=250;
break;
case 21:
StringCopy(&Var2, "SPEC_P1_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=250;
break;
case 22:
StringCopy(&Var2, "SPEC_P1_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=195;
break;
case 23:
StringCopy(&Var2, "SPEC_P1_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=250;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
break;
case 27:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 28:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar3=15;
iVar4=1;
break;
case 29:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar3=15;
iVar4=2;
break;
case 30:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar3=15;
iVar4=3;
break;
case 31:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar3=15;
iVar4=4;
break;
case 32:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar3=15;
iVar4=5;
break;
case 33:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar3=15;
iVar4=6;
break;
case 34:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar3=15;
iVar4=7;
break;
case 35:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar3=15;
iVar4=8;
break;
case 36:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar3=15;
iVar4=9;
break;
case 37:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar3=15;
iVar4=10;
break;
case 38:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar3=15;
iVar4=11;
break;
case 39:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar3=15;
iVar4=12;
break;
case 40:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar3=15;
iVar4=13;
break;
case 41:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar3=15;
iVar4=14;
break;
case 42:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar3=15;
iVar4=15;
break;
case 43:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar3=16;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar3=16;
iVar4=1;
break;
case 45:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar3=16;
iVar4=2;
break;
case 46:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar3=16;
iVar4=3;
break;
case 47:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar3=16;
iVar4=4;
break;
case 48:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar3=16;
iVar4=5;
break;
case 49:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar3=16;
iVar4=6;
break;
case 50:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar3=16;
iVar4=7;
break;
case 51:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar3=16;
iVar4=8;
break;
case 52:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar3=16;
iVar4=9;
break;
case 53:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar3=16;
iVar4=10;
break;
case 54:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar3=16;
iVar4=11;
break;
case 55:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar3=16;
iVar4=12;
break;
case 56:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar3=16;
iVar4=13;
break;
case 57:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar3=16;
iVar4=14;
break;
case 58:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar3=16;
iVar4=15;
break;
case 59:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar3=17;
iVar4=0;
break;
case 60:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar3=17;
iVar4=1;
break;
case 61:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar3=17;
iVar4=2;
break;
case 62:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar3=17;
iVar4=3;
break;
case 63:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar3=17;
iVar4=4;
break;
case 64:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar3=17;
iVar4=5;
break;
case 65:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar3=17;
iVar4=6;
break;
case 66:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar3=17;
iVar4=7;
break;
case 67:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar3=17;
iVar4=8;
break;
case 68:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar3=17;
iVar4=9;
break;
case 69:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar3=17;
iVar4=10;
break;
case 70:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar3=17;
iVar4=11;
break;
case 71:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar3=17;
iVar4=12;
break;
case 72:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar3=17;
iVar4=13;
break;
case 73:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar3=17;
iVar4=14;
break;
case 74:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar3=17;
iVar4=15;
break;
case 75:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=19;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 77, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_266(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=1;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
default:
func_238(iVar7, iParam0, 7, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_267(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P1_00_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "FEET_P1_00_1", 16);
iVar3=0;
iVar4=1;
iVar1=80;
break;
case 2:
StringCopy(&Var2, "FEET_P1_00_2", 16);
iVar3=0;
iVar4=2;
iVar1=80;
break;
case 3:
StringCopy(&Var2, "FEET_P1_00_3", 16);
iVar3=0;
iVar4=3;
iVar1=89;
break;
case 4:
StringCopy(&Var2, "FEET_P1_00_4", 16);
iVar3=0;
iVar4=4;
iVar1=45;
break;
case 5:
StringCopy(&Var2, "FEET_P1_00_5", 16);
iVar3=0;
iVar4=5;
iVar1=35;
break;
case 6:
StringCopy(&Var2, "FEET_P1_00_6", 16);
iVar3=0;
iVar4=6;
iVar1=89;
break;
case 7:
StringCopy(&Var2, "FEET_P1_00_7", 16);
iVar3=0;
iVar4=7;
iVar1=95;
break;
case 8:
StringCopy(&Var2, "FEET_P1_00_8", 16);
iVar3=0;
iVar4=8;
iVar1=115;
break;
case 9:
StringCopy(&Var2, "FEET_P1_00_9", 16);
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
StringCopy(&Var2, "FEET_P1_00_10", 16);
iVar3=0;
iVar4=10;
iVar1=145;
break;
case 11:
StringCopy(&Var2, "FEET_P1_00_11", 16);
iVar3=0;
iVar4=11;
iVar1=145;
break;
case 12:
StringCopy(&Var2, "FEET_P1_01_0", 16);
iVar3=1;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=1;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 18:
StringCopy(&Var2, "FEET_P1_06_0", 16);
iVar3=6;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "FEET_P1_06_1", 16);
iVar3=6;
iVar4=1;
iVar1=180;
break;
case 20:
StringCopy(&Var2, "FEET_P1_06_2", 16);
iVar3=6;
iVar4=2;
iVar1=80;
break;
case 21:
StringCopy(&Var2, "FEET_P1_06_3", 16);
iVar3=6;
iVar4=3;
iVar1=200;
break;
case 22:
StringCopy(&Var2, "FEET_P1_06_4", 16);
iVar3=6;
iVar4=4;
iVar1=220;
break;
case 23:
StringCopy(&Var2, "FEET_P1_06_5", 16);
iVar3=6;
iVar4=5;
iVar1=235;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "FEET_P1_08_0", 16);
iVar3=8;
iVar4=0;
iVar1=870;
break;
case 26:
StringCopy(&Var2, "FEET_P1_08_1", 16);
iVar3=8;
iVar4=1;
iVar1=870;
break;
case 27:
StringCopy(&Var2, "FEET_P1_08_2", 16);
iVar3=8;
iVar4=2;
iVar1=870;
break;
case 28:
StringCopy(&Var2, "FEET_P1_08_3", 16);
iVar3=8;
iVar4=3;
iVar1=1275;
break;
case 29:
StringCopy(&Var2, "FEET_P1_08_4", 16);
iVar3=8;
iVar4=4;
iVar1=1275;
break;
case 30:
StringCopy(&Var2, "FEET_P1_08_5", 16);
iVar3=8;
iVar4=5;
iVar1=1275;
break;
case 31:
StringCopy(&Var2, "FEET_P1_08_6", 16);
iVar3=8;
iVar4=6;
iVar1=1275;
break;
case 32:
StringCopy(&Var2, "FEET_P1_08_7", 16);
iVar3=8;
iVar4=7;
iVar1=1275;
break;
case 33:
StringCopy(&Var2, "FEET_P1_08_8", 16);
iVar3=8;
iVar4=8;
iVar1=1275;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "FEET_P1_10_0", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "FEET_P1_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 37:
StringCopy(&Var2, "FEET_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=50;
break;
case 38:
StringCopy(&Var2, "FEET_P1_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=50;
break;
case 39:
StringCopy(&Var2, "FEET_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=50;
break;
case 40:
StringCopy(&Var2, "FEET_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=50;
break;
case 41:
StringCopy(&Var2, "FEET_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=50;
break;
case 42:
StringCopy(&Var2, "FEET_P1_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=50;
break;
case 43:
StringCopy(&Var2, "FEET_P1_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=50;
break;
case 44:
StringCopy(&Var2, "FEET_P1_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=50;
break;
case 45:
StringCopy(&Var2, "FEET_P1_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=50;
break;
case 46:
StringCopy(&Var2, "FEET_P1_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=50;
break;
case 47:
StringCopy(&Var2, "FEET_P1_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=50;
break;
case 48:
StringCopy(&Var2, "FEET_P1_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=50;
break;
case 49:
StringCopy(&Var2, "FEET_P1_11_13", 16);
iVar3=11;
iVar4=13;
iVar1=50;
break;
case 50:
StringCopy(&Var2, "FEET_P1_11_14", 16);
iVar3=11;
iVar4=14;
iVar1=50;
break;
case 51:
StringCopy(&Var2, "FEET_P1_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=50;
break;
case 52:
StringCopy(&Var2, "FEET_P1_12_0", 16);
iVar3=12;
iVar4=0;
break;
case 53:
StringCopy(&Var2, "FEET_P1_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=25;
break;
case 54:
StringCopy(&Var2, "FEET_P1_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=20;
break;
case 55:
StringCopy(&Var2, "FEET_P1_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=24;
break;
case 56:
StringCopy(&Var2, "FEET_P1_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "FEET_P1_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "FEET_P1_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=29;
break;
case 59:
StringCopy(&Var2, "FEET_P1_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=27;
break;
case 60:
StringCopy(&Var2, "FEET_P1_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=25;
break;
case 61:
StringCopy(&Var2, "FEET_P1_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=30;
break;
case 62:
StringCopy(&Var2, "FEET_P1_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=28;
break;
case 63:
StringCopy(&Var2, "FEET_P1_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=30;
break;
case 64:
StringCopy(&Var2, "FEET_P1_13_0", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "FEET_P1_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=155;
break;
case 66:
StringCopy(&Var2, "FEET_P1_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=155;
break;
case 67:
StringCopy(&Var2, "FEET_P1_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=165;
break;
case 68:
StringCopy(&Var2, "FEET_P1_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=170;
break;
case 69:
StringCopy(&Var2, "FEET_P1_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=160;
break;
case 70:
StringCopy(&Var2, "FEET_P1_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=165;
break;
case 71:
StringCopy(&Var2, "FEET_P1_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=170;
break;
case 72:
StringCopy(&Var2, "FEET_P1_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=160;
break;
case 73:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
break;
case 74:
StringCopy(&Var2, "FEET_P1_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=720;
break;
case 75:
StringCopy(&Var2, "FEET_P1_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=680;
break;
case 76:
StringCopy(&Var2, "FEET_P1_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=650;
break;
case 77:
StringCopy(&Var2, "FEET_P1_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=670;
break;
case 78:
StringCopy(&Var2, "FEET_P1_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=700;
break;
case 79:
StringCopy(&Var2, "FEET_P1_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=680;
break;
case 80:
StringCopy(&Var2, "FEET_P1_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=720;
break;
case 81:
StringCopy(&Var2, "FEET_P1_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=740;
break;
case 82:
StringCopy(&Var2, "FEET_P1_16_8", 16);
iVar3=16;
iVar4=8;
iVar1=760;
break;
case 83:
StringCopy(&Var2, "FEET_P1_16_9", 16);
iVar3=16;
iVar4=9;
iVar1=780;
break;
case 84:
StringCopy(&Var2, "FEET_P1_16_10", 16);
iVar3=16;
iVar4=10;
iVar1=750;
break;
case 85:
StringCopy(&Var2, "FEET_P1_16_11", 16);
iVar3=16;
iVar4=11;
iVar1=700;
break;
case 86:
StringCopy(&Var2, "FEET_P1_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=790;
break;
case 87:
StringCopy(&Var2, "FEET_P1_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
break;
case 88:
StringCopy(&Var2, "FEET_P1_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=860;
break;
case 89:
StringCopy(&Var2, "FEET_P1_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=750;
break;
case 90:
StringCopy(&Var2, "FEET_P1_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=790;
break;
case 91:
StringCopy(&Var2, "FEET_P1_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=840;
break;
case 92:
StringCopy(&Var2, "FEET_P1_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=820;
break;
case 93:
StringCopy(&Var2, "FEET_P1_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=800;
break;
case 94:
StringCopy(&Var2, "FEET_P1_17_8", 16);
iVar3=17;
iVar4=8;
iVar1=850;
break;
case 95:
StringCopy(&Var2, "FEET_P1_17_9", 16);
iVar3=17;
iVar4=9;
iVar1=870;
break;
case 96:
StringCopy(&Var2, "FEET_P1_17_10", 16);
iVar3=17;
iVar4=10;
iVar1=720;
break;
case 97:
StringCopy(&Var2, "FEET_P1_17_11", 16);
iVar3=17;
iVar4=11;
iVar1=740;
break;
case 98:
StringCopy(&Var2, "FEET_P1_17_12", 16);
iVar3=17;
iVar4=12;
iVar1=800;
break;
case 99:
StringCopy(&Var2, "FEET_P1_17_13", 16);
iVar3=17;
iVar4=13;
iVar1=750;
break;
case 100:
StringCopy(&Var2, "FEET_P1_17_14", 16);
iVar3=17;
iVar4=14;
iVar1=770;
break;
case 101:
StringCopy(&Var2, "FEET_P1_17_15", 16);
iVar3=17;
iVar4=15;
iVar1=860;
break;
case 102:
StringCopy(&Var2, "FEET_P1_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=850;
break;
case 103:
StringCopy(&Var2, "FEET_P1_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=800;
break;
case 104:
StringCopy(&Var2, "FEET_P1_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=780;
break;
case 105:
StringCopy(&Var2, "FEET_P1_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=890;
break;
case 106:
StringCopy(&Var2, "FEET_P1_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=820;
break;
case 107:
StringCopy(&Var2, "FEET_P1_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=840;
break;
case 108:
StringCopy(&Var2, "FEET_P1_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=870;
break;
case 109:
StringCopy(&Var2, "FEET_P1_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=930;
break;
case 110:
StringCopy(&Var2, "FEET_P1_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=880;
break;
case 111:
StringCopy(&Var2, "FEET_P1_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=900;
break;
case 112:
StringCopy(&Var2, "FEET_P1_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=920;
break;
case 113:
StringCopy(&Var2, "FEET_P1_18_11", 16);
iVar3=18;
iVar4=11;
iVar1=970;
break;
case 114:
StringCopy(&Var2, "FEET_P1_18_12", 16);
iVar3=18;
iVar4=12;
iVar1=990;
break;
case 115:
StringCopy(&Var2, "FEET_P1_18_13", 16);
iVar3=18;
iVar4=13;
iVar1=960;
break;
case 116:
StringCopy(&Var2, "FEET_P1_18_14", 16);
iVar3=18;
iVar4=14;
iVar1=980;
break;
case 117:
StringCopy(&Var2, "FEET_P1_18_15", 16);
iVar3=18;
iVar4=15;
iVar1=950;
break;
case 118:
StringCopy(&Var2, "FEET_P1_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=110;
break;
case 119:
StringCopy(&Var2, "FEET_P1_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=115;
break;
case 120:
StringCopy(&Var2, "FEET_P1_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=120;
break;
case 121:
StringCopy(&Var2, "FEET_P1_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=110;
break;
case 122:
StringCopy(&Var2, "FEET_P1_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=125;
break;
case 123:
StringCopy(&Var2, "FEET_P1_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=128;
break;
case 124:
StringCopy(&Var2, "FEET_P1_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=135;
break;
case 125:
StringCopy(&Var2, "FEET_P1_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=130;
break;
case 126:
StringCopy(&Var2, "FEET_P1_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=145;
break;
case 127:
StringCopy(&Var2, "FEET_P1_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "FEET_P1_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=120;
break;
case 129:
StringCopy(&Var2, "FEET_P1_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=150;
break;
case 130:
StringCopy(&Var2, "FEET_P1_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=125;
break;
case 131:
StringCopy(&Var2, "FEET_P1_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=120;
break;
case 132:
StringCopy(&Var2, "FEET_P1_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=130;
break;
case 133:
StringCopy(&Var2, "FEET_P1_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=110;
break;
default:
func_238(iVar7, iParam0, 134, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_268(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P1_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=32;
break;
case 2:
StringCopy(&Var2, "LEGS_P1_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=38;
break;
case 3:
StringCopy(&Var2, "LEGS_P1_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=44;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=4;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=5;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "LEGS_P1_2_0", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "LEGS_P1_6_0", 16);
iVar3=6;
iVar4=0;
break;
case 15:
StringCopy(&Var2, "LEGS_P1_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=690;
break;
case 16:
StringCopy(&Var2, "LEGS_P1_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=720;
break;
case 17:
StringCopy(&Var2, "LEGS_P1_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=850;
break;
case 18:
StringCopy(&Var2, "LEGS_P1_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "LEGS_P1_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=740;
break;
case 20:
StringCopy(&Var2, "LEGS_P1_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=750;
break;
case 21:
StringCopy(&Var2, "LEGS_P1_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=790;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=1;
bVar0=true;
break;
case 24:
StringCopy(&Var2, "LEGS_P1_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 25:
StringCopy(&Var2, "LEGS_P1_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=145;
break;
case 26:
StringCopy(&Var2, "LEGS_P1_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=140;
break;
case 27:
StringCopy(&Var2, "LEGS_P1_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=148;
break;
case 28:
StringCopy(&Var2, "LEGS_P1_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=150;
break;
case 29:
StringCopy(&Var2, "LEGS_P1_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=154;
break;
case 30:
StringCopy(&Var2, "LEGS_P1_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=158;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "LEGS_P1_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=820;
break;
case 34:
StringCopy(&Var2, "LEGS_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=820;
break;
case 35:
StringCopy(&Var2, "LEGS_P1_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=850;
break;
case 36:
StringCopy(&Var2, "LEGS_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=850;
break;
case 37:
StringCopy(&Var2, "LEGS_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=920;
break;
case 38:
StringCopy(&Var2, "LEGS_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=950;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
break;
case 40:
StringCopy(&Var2, "LEGS_P1_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 41:
StringCopy(&Var2, "LEGS_P1_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=45;
break;
case 42:
StringCopy(&Var2, "LEGS_P1_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=48;
break;
case 43:
StringCopy(&Var2, "LEGS_P1_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=45;
break;
case 44:
StringCopy(&Var2, "LEGS_P1_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=48;
break;
case 45:
StringCopy(&Var2, "LEGS_P1_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "LEGS_P1_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=55;
break;
case 47:
StringCopy(&Var2, "LEGS_P1_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=58;
break;
case 48:
StringCopy(&Var2, "LEGS_P1_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=60;
break;
case 49:
StringCopy(&Var2, "LEGS_P1_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "LEGS_P1_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=62;
break;
case 51:
StringCopy(&Var2, "LEGS_P1_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=65;
break;
case 52:
StringCopy(&Var2, "LEGS_P1_14_0", 16);
iVar3=14;
iVar4=0;
break;
case 53:
StringCopy(&Var2, "LEGS_P1_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 54:
StringCopy(&Var2, "LEGS_P1_15_1", 16);
iVar3=15;
iVar4=1;
break;
case 55:
StringCopy(&Var2, "LEGS_P1_15_2", 16);
iVar3=15;
iVar4=2;
break;
case 56:
StringCopy(&Var2, "LEGS_P1_15_3", 16);
iVar3=15;
iVar4=3;
break;
case 57:
StringCopy(&Var2, "LEGS_P1_15_4", 16);
iVar3=15;
iVar4=4;
break;
case 58:
StringCopy(&Var2, "LEGS_P1_15_5", 16);
iVar3=15;
iVar4=5;
break;
case 59:
StringCopy(&Var2, "LEGS_P1_15_6", 16);
iVar3=15;
iVar4=6;
break;
case 60:
StringCopy(&Var2, "LEGS_P1_15_7", 16);
iVar3=15;
iVar4=7;
break;
case 61:
StringCopy(&Var2, "LEGS_P1_15_8", 16);
iVar3=15;
iVar4=8;
break;
case 62:
StringCopy(&Var2, "LEGS_P1_15_9", 16);
iVar3=15;
iVar4=9;
break;
case 63:
StringCopy(&Var2, "LEGS_P1_15_10", 16);
iVar3=15;
iVar4=10;
break;
case 64:
StringCopy(&Var2, "LEGS_P1_15_11", 16);
iVar3=15;
iVar4=11;
break;
case 65:
StringCopy(&Var2, "LEGS_P1_15_12", 16);
iVar3=15;
iVar4=12;
break;
case 66:
StringCopy(&Var2, "LEGS_P1_15_13", 16);
iVar3=15;
iVar4=13;
break;
case 67:
StringCopy(&Var2, "LEGS_P1_15_14", 16);
iVar3=15;
iVar4=14;
break;
case 68:
StringCopy(&Var2, "LEGS_P1_15_15", 16);
iVar3=15;
iVar4=15;
break;
case 69:
StringCopy(&Var2, "LEGS_P1_16_0", 16);
iVar3=16;
iVar4=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=16;
iVar4=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P1_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P1_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=160;
break;
case 74:
StringCopy(&Var2, "LEGS_P1_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=180;
break;
case 75:
StringCopy(&Var2, "LEGS_P1_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=180;
break;
case 76:
StringCopy(&Var2, "LEGS_P1_18_4", 16);
iVar3=18;
iVar4=4;
break;
case 77:
StringCopy(&Var2, "LEGS_P1_18_5", 16);
iVar3=18;
iVar4=5;
break;
case 78:
StringCopy(&Var2, "LEGS_P1_19_0", 16);
iVar3=19;
iVar4=0;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "LEGS_P1_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=118;
break;
case 80:
StringCopy(&Var2, "LEGS_P1_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=120;
break;
case 81:
StringCopy(&Var2, "LEGS_P1_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=128;
break;
case 82:
StringCopy(&Var2, "LEGS_P1_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=128;
break;
case 83:
StringCopy(&Var2, "LEGS_P1_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=130;
break;
case 84:
StringCopy(&Var2, "LEGS_P1_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=145;
break;
case 85:
StringCopy(&Var2, "LEGS_P1_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=138;
break;
case 86:
StringCopy(&Var2, "LEGS_P1_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=132;
break;
case 87:
StringCopy(&Var2, "LEGS_P1_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=148;
break;
case 88:
StringCopy(&Var2, "LEGS_P1_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=118;
break;
case 89:
StringCopy(&Var2, "LEGS_P1_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=118;
break;
case 90:
StringCopy(&Var2, "LEGS_P1_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=118;
break;
case 91:
StringCopy(&Var2, "LEGS_P1_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=129;
break;
case 92:
StringCopy(&Var2, "LEGS_P1_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=135;
break;
case 93:
StringCopy(&Var2, "LEGS_P1_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=135;
break;
case 94:
StringCopy(&Var2, "LEGS_P1_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=118;
break;
case 95:
StringCopy(&Var2, "LEGS_P1_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=118;
break;
case 96:
StringCopy(&Var2, "LEGS_P1_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=118;
break;
case 97:
StringCopy(&Var2, "LEGS_P1_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=55;
break;
case 98:
StringCopy(&Var2, "LEGS_P1_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=55;
break;
case 99:
StringCopy(&Var2, "LEGS_P1_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=59;
break;
case 100:
StringCopy(&Var2, "LEGS_P1_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=59;
break;
case 101:
StringCopy(&Var2, "LEGS_P1_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=65;
break;
case 102:
StringCopy(&Var2, "LEGS_P1_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=65;
break;
case 103:
StringCopy(&Var2, "LEGS_P1_22_6", 16);
iVar3=22;
iVar4=6;
iVar1=69;
break;
case 104:
StringCopy(&Var2, "LEGS_P1_22_7", 16);
iVar3=22;
iVar4=7;
iVar1=69;
break;
case 105:
StringCopy(&Var2, "LEGS_P1_22_8", 16);
iVar3=22;
iVar4=8;
iVar1=75;
break;
case 106:
StringCopy(&Var2, "LEGS_P1_22_9", 16);
iVar3=22;
iVar4=9;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "LEGS_P1_22_10", 16);
iVar3=22;
iVar4=10;
iVar1=65;
break;
case 108:
StringCopy(&Var2, "LEGS_P1_22_11", 16);
iVar3=22;
iVar4=11;
iVar1=65;
break;
case 109:
StringCopy(&Var2, "LEGS_P1_22_12", 16);
iVar3=22;
iVar4=12;
iVar1=65;
break;
case 110:
StringCopy(&Var2, "LEGS_P1_22_13", 16);
iVar3=22;
iVar4=13;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P1_23_0", 16);
iVar3=23;
iVar4=0;
iVar1=38;
break;
case 112:
StringCopy(&Var2, "LEGS_P1_23_1", 16);
iVar3=23;
iVar4=1;
iVar1=38;
break;
case 113:
StringCopy(&Var2, "LEGS_P1_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=28;
break;
case 114:
StringCopy(&Var2, "LEGS_P1_23_3", 16);
iVar3=23;
iVar4=3;
iVar1=34;
break;
case 115:
StringCopy(&Var2, "LEGS_P1_23_4", 16);
iVar3=23;
iVar4=4;
iVar1=36;
break;
case 116:
StringCopy(&Var2, "LEGS_P1_23_5", 16);
iVar3=23;
iVar4=5;
iVar1=32;
break;
default:
func_238(iVar7, iParam0, 117, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_269(int iParam0){
if(iParam0 < 107){
func_272(iParam0);
}elseif(iParam0 < 227){
func_271(iParam0);
}else{
func_270(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_238(3, iParam0, 318, -1);
}}


void func_270(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 227:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar3=23;
iVar4=0;
iVar6=3;
break;
case 228:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar3=23;
iVar4=1;
iVar6=3;
break;
case 229:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar3=23;
iVar4=2;
iVar6=3;
break;
case 230:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar3=23;
iVar4=3;
iVar6=3;
break;
case 231:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar3=23;
iVar4=4;
iVar6=3;
break;
case 232:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar3=23;
iVar4=5;
iVar6=3;
break;
case 233:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar3=23;
iVar4=6;
iVar6=3;
break;
case 234:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar3=23;
iVar4=7;
iVar6=3;
break;
case 235:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar3=23;
iVar4=8;
iVar6=3;
break;
case 236:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar3=23;
iVar4=9;
iVar6=3;
break;
case 237:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar3=23;
iVar4=10;
iVar6=3;
break;
case 238:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar3=23;
iVar4=11;
iVar6=3;
break;
case 239:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar3=23;
iVar4=12;
iVar6=3;
break;
case 240:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar3=23;
iVar4=13;
iVar6=3;
break;
case 241:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar3=23;
iVar4=14;
iVar6=3;
break;
case 242:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar3=23;
iVar4=15;
iVar6=3;
break;
case 243:
StringCopy(&Var2, "TORSO_P1_24_0", 16);
iVar3=24;
iVar4=0;
iVar1=2200;
iVar6=3;
break;
case 244:
StringCopy(&Var2, "TORSO_P1_24_1", 16);
iVar3=24;
iVar4=1;
iVar1=2200;
iVar6=3;
break;
case 245:
StringCopy(&Var2, "TORSO_P1_24_2", 16);
iVar3=24;
iVar4=2;
iVar1=2200;
iVar6=3;
break;
case 246:
StringCopy(&Var2, "TORSO_P1_24_3", 16);
iVar3=24;
iVar4=3;
iVar1=2200;
iVar6=3;
break;
case 247:
StringCopy(&Var2, "TORSO_P1_24_4", 16);
iVar3=24;
iVar4=4;
iVar1=2200;
iVar6=3;
break;
case 248:
StringCopy(&Var2, "TORSO_P1_24_5", 16);
iVar3=24;
iVar4=5;
iVar1=2200;
iVar6=3;
break;
case 249:
StringCopy(&Var2, "TORSO_P1_24_6", 16);
iVar3=24;
iVar4=6;
iVar1=2200;
iVar6=3;
break;
case 250:
StringCopy(&Var2, "TORSO_P1_24_7", 16);
iVar3=24;
iVar4=7;
iVar1=2200;
iVar6=3;
break;
case 251:
StringCopy(&Var2, "TORSO_P1_24_8", 16);
iVar3=24;
iVar4=8;
iVar1=2200;
iVar6=3;
break;
case 252:
StringCopy(&Var2, "TORSO_P1_24_9", 16);
iVar3=24;
iVar4=9;
iVar1=2200;
iVar6=3;
break;
case 253:
StringCopy(&Var2, "TORSO_P1_24_10", 16);
iVar3=24;
iVar4=10;
iVar1=2200;
iVar6=3;
break;
case 254:
StringCopy(&Var2, "TORSO_P1_24_11", 16);
iVar3=24;
iVar4=11;
iVar1=2200;
iVar6=3;
break;
case 255:
StringCopy(&Var2, "TORSO_P1_24_12", 16);
iVar3=24;
iVar4=12;
iVar1=2200;
iVar6=3;
break;
case 256:
StringCopy(&Var2, "TORSO_P1_24_13", 16);
iVar3=24;
iVar4=13;
iVar1=2200;
iVar6=3;
break;
case 257:
StringCopy(&Var2, "TORSO_P1_24_14", 16);
iVar3=24;
iVar4=14;
iVar1=2200;
iVar6=3;
break;
case 258:
StringCopy(&Var2, "TORSO_P1_24_15", 16);
iVar3=24;
iVar4=15;
iVar1=2200;
iVar6=3;
break;
case 259:
StringCopy(&Var2, "TORSO_P1_25_0", 16);
iVar3=25;
iVar4=0;
bVar0=true;
iVar6=3;
break;
case 260:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
iVar6=1;
break;
case 261:
StringCopy(&Var2, "TORSO_P1_27_0", 16);
iVar3=27;
iVar4=0;
iVar1=150;
break;
case 262:
StringCopy(&Var2, "TORSO_P1_27_1", 16);
iVar3=27;
iVar4=1;
iVar1=160;
break;
case 263:
StringCopy(&Var2, "TORSO_P1_27_2", 16);
iVar3=27;
iVar4=2;
iVar1=150;
break;
case 264:
StringCopy(&Var2, "TORSO_P1_27_3", 16);
iVar3=27;
iVar4=3;
iVar1=150;
break;
case 265:
StringCopy(&Var2, "TORSO_P1_27_4", 16);
iVar3=27;
iVar4=4;
iVar1=160;
break;
case 266:
StringCopy(&Var2, "TORSO_P1_27_5", 16);
iVar3=27;
iVar4=5;
iVar1=160;
break;
case 267:
StringCopy(&Var2, "TORSO_P1_28_0", 16);
iVar3=28;
iVar4=0;
iVar1=88;
break;
case 268:
StringCopy(&Var2, "TORSO_P1_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=60;
break;
case 269:
StringCopy(&Var2, "TORSO_P1_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=70;
break;
case 270:
StringCopy(&Var2, "TORSO_P1_28_3", 16);
iVar3=28;
iVar4=3;
iVar1=80;
break;
case 271:
StringCopy(&Var2, "TORSO_P1_28_4", 16);
iVar3=28;
iVar4=4;
iVar1=90;
break;
case 272:
StringCopy(&Var2, "TORSO_P1_28_5", 16);
iVar3=28;
iVar4=5;
iVar1=80;
break;
case 273:
StringCopy(&Var2, "TORSO_P1_28_6", 16);
iVar3=28;
iVar4=6;
iVar1=70;
break;
case 274:
StringCopy(&Var2, "TORSO_P1_28_7", 16);
iVar3=28;
iVar4=7;
iVar1=95;
break;
case 275:
StringCopy(&Var2, "TORSO_P1_28_8", 16);
iVar3=28;
iVar4=8;
iVar1=105;
break;
case 276:
StringCopy(&Var2, "TORSO_P1_28_9", 16);
iVar3=28;
iVar4=9;
iVar1=95;
break;
case 277:
StringCopy(&Var2, "TORSO_P1_28_10", 16);
iVar3=28;
iVar4=10;
iVar1=110;
break;
case 278:
StringCopy(&Var2, "TORSO_P1_28_11", 16);
iVar3=28;
iVar4=11;
iVar1=98;
break;
case 279:
StringCopy(&Var2, "TORSO_P1_28_12", 16);
iVar3=28;
iVar4=12;
iVar1=88;
break;
case 280:
StringCopy(&Var2, "TORSO_P1_28_13", 16);
iVar3=28;
iVar4=13;
iVar1=98;
break;
case 281:
StringCopy(&Var2, "TORSO_P1_28_14", 16);
iVar3=28;
iVar4=14;
iVar1=110;
break;
case 282:
StringCopy(&Var2, "TORSO_P1_28_15", 16);
iVar3=28;
iVar4=15;
iVar1=98;
break;
case 283:
StringCopy(&Var2, "TORSO_P1_29_0", 16);
iVar3=29;
iVar4=0;
iVar1=250;
break;
case 284:
StringCopy(&Var2, "TORSO_P1_29_1", 16);
iVar3=29;
iVar4=1;
iVar1=270;
break;
case 285:
StringCopy(&Var2, "TORSO_P1_29_2", 16);
iVar3=29;
iVar4=2;
iVar1=280;
break;
case 286:
StringCopy(&Var2, "TORSO_P1_29_3", 16);
iVar3=29;
iVar4=3;
iVar1=275;
break;
case 287:
StringCopy(&Var2, "TORSO_P1_29_4", 16);
iVar3=29;
iVar4=4;
iVar1=290;
break;
case 288:
StringCopy(&Var2, "TORSO_P1_29_5", 16);
iVar3=29;
iVar4=5;
iVar1=35;
break;
case 289:
StringCopy(&Var2, "TORSO_P1_29_6", 16);
iVar3=29;
iVar4=6;
iVar1=35;
break;
case 290:
StringCopy(&Var2, "TORSO_P1_29_7", 16);
iVar3=29;
iVar4=7;
iVar1=35;
break;
case 291:
StringCopy(&Var2, "TORSO_P1_29_8", 16);
iVar3=29;
iVar4=8;
iVar1=295;
break;
case 292:
StringCopy(&Var2, "TORSO_P1_29_9", 16);
iVar3=29;
iVar4=9;
iVar1=35;
break;
case 293:
StringCopy(&Var2, "TORSO_P1_29_10", 16);
iVar3=29;
iVar4=10;
iVar1=35;
break;
case 294:
StringCopy(&Var2, "TORSO_P1_29_11", 16);
iVar3=29;
iVar4=11;
iVar1=35;
break;
case 295:
StringCopy(&Var2, "TORSO_P1_29_12", 16);
iVar3=29;
iVar4=12;
break;
case 296:
StringCopy(&Var2, "TORSO_P1_30_0", 16);
iVar3=30;
iVar4=0;
iVar1=1750;
break;
case 297:
StringCopy(&Var2, "TORSO_P1_30_1", 16);
iVar3=30;
iVar4=1;
iVar1=1920;
break;
case 298:
StringCopy(&Var2, "TORSO_P1_30_2", 16);
iVar3=30;
iVar4=2;
iVar1=1890;
break;
case 299:
StringCopy(&Var2, "TORSO_P1_30_3", 16);
iVar3=30;
iVar4=3;
iVar1=1850;
break;
case 300:
StringCopy(&Var2, "TORSO_P1_30_4", 16);
iVar3=30;
iVar4=4;
iVar1=1750;
break;
case 301:
StringCopy(&Var2, "TORSO_P1_30_5", 16);
iVar3=30;
iVar4=5;
iVar1=1990;
break;
case 302:
StringCopy(&Var2, "TORSO_P1_30_6", 16);
iVar3=30;
iVar4=6;
iVar1=1820;
break;
case 303:
StringCopy(&Var2, "TORSO_P1_30_7", 16);
iVar3=30;
iVar4=7;
iVar1=1990;
break;
case 304:
StringCopy(&Var2, "TORSO_P1_30_8", 16);
iVar3=30;
iVar4=8;
iVar1=1920;
break;
case 305:
StringCopy(&Var2, "TORSO_P1_30_9", 16);
iVar3=30;
iVar4=9;
iVar1=1850;
break;
case 306:
StringCopy(&Var2, "TORSO_P1_30_10", 16);
iVar3=30;
iVar4=10;
iVar1=1990;
break;
case 307:
StringCopy(&Var2, "TORSO_P1_30_11", 16);
iVar3=30;
iVar4=11;
iVar1=1790;
break;
case 308:
StringCopy(&Var2, "TORSO_P1_30_12", 16);
iVar3=30;
iVar4=12;
iVar1=1790;
break;
case 309:
StringCopy(&Var2, "TORSO_P1_31_0", 16);
iVar3=31;
iVar4=0;
iVar1=69;
break;
case 310:
StringCopy(&Var2, "TORSO_P1_31_1", 16);
iVar3=31;
iVar4=1;
iVar1=75;
break;
case 311:
StringCopy(&Var2, "TORSO_P1_31_2", 16);
iVar3=31;
iVar4=2;
iVar1=75;
break;
case 312:
StringCopy(&Var2, "TORSO_P1_31_3", 16);
iVar3=31;
iVar4=3;
iVar1=79;
break;
case 313:
StringCopy(&Var2, "TORSO_P1_31_4", 16);
iVar3=31;
iVar4=4;
iVar1=79;
break;
case 314:
StringCopy(&Var2, "TORSO_P1_31_5", 16);
iVar3=31;
iVar4=5;
iVar1=89;
break;
case 315:
StringCopy(&Var2, "TORSO_P1_31_6", 16);
iVar3=31;
iVar4=6;
iVar1=85;
break;
case 316:
StringCopy(&Var2, "TORSO_P1_31_7", 16);
iVar3=31;
iVar4=7;
iVar1=85;
break;
case 317:
StringCopy(&Var2, "TORSO_P1_31_8", 16);
iVar3=31;
iVar4=8;
break;
default:
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_271(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 107:
StringCopy(&Var2, "TORSO_P1_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=195;
break;
case 108:
StringCopy(&Var2, "TORSO_P1_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=420;
break;
case 109:
StringCopy(&Var2, "TORSO_P1_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=390;
break;
case 110:
StringCopy(&Var2, "TORSO_P1_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=450;
break;
case 111:
StringCopy(&Var2, "TORSO_P1_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=400;
break;
case 112:
StringCopy(&Var2, "TORSO_P1_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=390;
break;
case 113:
StringCopy(&Var2, "TORSO_P1_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=570;
break;
case 114:
StringCopy(&Var2, "TORSO_P1_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=390;
break;
case 115:
StringCopy(&Var2, "TORSO_P1_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=470;
break;
case 116:
StringCopy(&Var2, "TORSO_P1_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=390;
break;
case 117:
StringCopy(&Var2, "TORSO_P1_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=520;
break;
case 118:
StringCopy(&Var2, "TORSO_P1_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=490;
break;
case 119:
StringCopy(&Var2, "TORSO_P1_12_12", 16);
iVar3=12;
iVar4=12;
iVar1=490;
break;
case 120:
StringCopy(&Var2, "TORSO_P1_12_13", 16);
iVar3=12;
iVar4=13;
iVar1=590;
break;
case 121:
StringCopy(&Var2, "TORSO_P1_12_14", 16);
iVar3=12;
iVar4=14;
iVar1=560;
break;
case 122:
StringCopy(&Var2, "TORSO_P1_12_15", 16);
iVar3=12;
iVar4=15;
iVar1=520;
break;
case 123:
StringCopy(&Var2, "TORSO_P1_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 124:
StringCopy(&Var2, "TORSO_P1_13_1", 16);
iVar3=13;
iVar4=1;
break;
case 125:
StringCopy(&Var2, "TORSO_P1_13_2", 16);
iVar3=13;
iVar4=2;
break;
case 126:
StringCopy(&Var2, "TORSO_P1_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=90;
break;
case 127:
StringCopy(&Var2, "TORSO_P1_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=85;
break;
case 128:
StringCopy(&Var2, "TORSO_P1_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=45;
break;
case 129:
StringCopy(&Var2, "TORSO_P1_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=90;
break;
case 130:
StringCopy(&Var2, "TORSO_P1_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=47;
break;
case 131:
StringCopy(&Var2, "TORSO_P1_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=45;
break;
case 132:
StringCopy(&Var2, "TORSO_P1_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=48;
break;
case 133:
StringCopy(&Var2, "TORSO_P1_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=45;
break;
case 134:
StringCopy(&Var2, "TORSO_P1_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=85;
break;
case 135:
StringCopy(&Var2, "TORSO_P1_13_12", 16);
iVar3=13;
iVar4=12;
iVar1=45;
break;
case 136:
StringCopy(&Var2, "TORSO_P1_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=47;
break;
case 137:
StringCopy(&Var2, "TORSO_P1_13_14", 16);
iVar3=13;
iVar4=14;
iVar1=45;
break;
case 138:
StringCopy(&Var2, "TORSO_P1_13_15", 16);
iVar3=13;
iVar4=15;
iVar1=48;
break;
case 139:
StringCopy(&Var2, "TORSO_P1_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=290;
break;
case 140:
StringCopy(&Var2, "TORSO_P1_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=290;
break;
case 141:
StringCopy(&Var2, "TORSO_P1_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=290;
break;
case 142:
StringCopy(&Var2, "TORSO_P1_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=290;
break;
case 143:
StringCopy(&Var2, "TORSO_P1_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=290;
break;
case 144:
StringCopy(&Var2, "TORSO_P1_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=290;
break;
case 145:
StringCopy(&Var2, "TORSO_P1_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=65;
break;
case 146:
StringCopy(&Var2, "TORSO_P1_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=65;
break;
case 147:
StringCopy(&Var2, "TORSO_P1_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=200;
break;
case 148:
StringCopy(&Var2, "TORSO_P1_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=220;
break;
case 149:
StringCopy(&Var2, "TORSO_P1_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=220;
break;
case 150:
StringCopy(&Var2, "TORSO_P1_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=240;
break;
case 151:
StringCopy(&Var2, "TORSO_P1_15_4", 16);
iVar3=15;
iVar4=4;
break;
case 152:
StringCopy(&Var2, "TORSO_P1_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=250;
break;
case 153:
StringCopy(&Var2, "TORSO_P1_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=260;
break;
case 154:
StringCopy(&Var2, "TORSO_P1_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=40;
break;
case 155:
StringCopy(&Var2, "TORSO_P1_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=50;
break;
case 156:
StringCopy(&Var2, "TORSO_P1_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=45;
break;
case 157:
StringCopy(&Var2, "TORSO_P1_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=40;
break;
case 158:
StringCopy(&Var2, "TORSO_P1_15_11", 16);
iVar3=15;
iVar4=11;
iVar1=55;
break;
case 159:
StringCopy(&Var2, "TORSO_P1_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 160:
StringCopy(&Var2, "TORSO_P1_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=40;
break;
case 161:
StringCopy(&Var2, "TORSO_P1_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=50;
break;
case 162:
StringCopy(&Var2, "TORSO_P1_17_2", 16);
iVar3=17;
iVar4=2;
break;
case 163:
StringCopy(&Var2, "TORSO_P1_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=50;
break;
case 164:
StringCopy(&Var2, "TORSO_P1_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=50;
break;
case 165:
StringCopy(&Var2, "TORSO_P1_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=50;
break;
case 166:
StringCopy(&Var2, "TORSO_P1_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=50;
break;
case 167:
StringCopy(&Var2, "TORSO_P1_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=50;
break;
case 168:
StringCopy(&Var2, "TORSO_P1_17_8", 16);
iVar3=17;
iVar4=8;
iVar1=50;
break;
case 169:
StringCopy(&Var2, "TORSO_P1_17_9", 16);
iVar3=17;
iVar4=9;
iVar1=50;
break;
case 170:
StringCopy(&Var2, "TORSO_P1_17_10", 16);
iVar3=17;
iVar4=10;
iVar1=50;
break;
case 171:
StringCopy(&Var2, "TORSO_P1_17_11", 16);
iVar3=17;
iVar4=11;
iVar1=50;
break;
case 172:
StringCopy(&Var2, "TORSO_P1_17_12", 16);
iVar3=17;
iVar4=12;
iVar1=50;
break;
case 173:
StringCopy(&Var2, "TORSO_P1_17_13", 16);
iVar3=17;
iVar4=13;
iVar1=50;
break;
case 174:
StringCopy(&Var2, "TORSO_P1_17_14", 16);
iVar3=17;
iVar4=14;
iVar1=50;
break;
case 175:
StringCopy(&Var2, "TORSO_P1_17_15", 16);
iVar3=17;
iVar4=15;
iVar1=50;
break;
case 176:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar3=18;
iVar4=0;
iVar6=3;
break;
case 177:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar3=18;
iVar4=1;
iVar6=3;
break;
case 178:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar3=18;
iVar4=2;
iVar6=3;
break;
case 179:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar3=18;
iVar4=3;
iVar6=3;
break;
case 180:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar3=18;
iVar4=4;
iVar6=3;
break;
case 181:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar3=18;
iVar4=5;
iVar6=3;
break;
case 182:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar3=18;
iVar4=6;
iVar6=3;
break;
case 183:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar3=18;
iVar4=7;
iVar6=3;
break;
case 184:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar3=18;
iVar4=8;
iVar6=3;
break;
case 185:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar3=18;
iVar4=9;
iVar6=3;
break;
case 186:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar3=18;
iVar4=10;
iVar6=3;
break;
case 187:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar3=18;
iVar4=11;
iVar6=3;
break;
case 188:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar3=18;
iVar4=12;
iVar6=3;
break;
case 189:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar3=18;
iVar4=13;
iVar6=3;
break;
case 190:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar3=18;
iVar4=14;
iVar6=3;
break;
case 191:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar3=18;
iVar4=15;
iVar6=3;
break;
case 192:
StringCopy(&Var2, "TORSO_P1_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=480;
iVar6=3;
break;
case 193:
StringCopy(&Var2, "TORSO_P1_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=440;
iVar6=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P1_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=440;
iVar6=3;
break;
case 195:
StringCopy(&Var2, "TORSO_P1_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=520;
iVar6=3;
break;
case 196:
StringCopy(&Var2, "TORSO_P1_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=440;
iVar6=3;
break;
case 197:
StringCopy(&Var2, "TORSO_P1_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=440;
iVar6=3;
break;
case 198:
StringCopy(&Var2, "TORSO_P1_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=480;
iVar6=3;
break;
case 199:
StringCopy(&Var2, "TORSO_P1_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=480;
iVar6=3;
break;
case 200:
StringCopy(&Var2, "TORSO_P1_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=480;
iVar6=3;
break;
case 201:
StringCopy(&Var2, "TORSO_P1_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=480;
iVar6=3;
break;
case 202:
StringCopy(&Var2, "TORSO_P1_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=480;
iVar6=3;
break;
case 203:
StringCopy(&Var2, "TORSO_P1_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=480;
iVar6=3;
break;
case 204:
StringCopy(&Var2, "TORSO_P1_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=520;
iVar6=3;
break;
case 205:
StringCopy(&Var2, "TORSO_P1_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=520;
iVar6=3;
break;
case 206:
StringCopy(&Var2, "TORSO_P1_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=520;
iVar6=3;
break;
case 207:
StringCopy(&Var2, "TORSO_P1_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=440;
iVar6=3;
break;
case 208:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=20;
iVar4=0;
bVar0=true;
iVar6=4;
break;
case 209:
StringCopy(&Var2, "TORSO_P1_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=220;
break;
case 210:
StringCopy(&Var2, "TORSO_P1_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=200;
break;
case 211:
StringCopy(&Var2, "TORSO_P1_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=240;
break;
case 212:
StringCopy(&Var2, "TORSO_P1_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=240;
break;
case 213:
StringCopy(&Var2, "TORSO_P1_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=260;
break;
case 214:
StringCopy(&Var2, "TORSO_P1_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=275;
break;
case 215:
StringCopy(&Var2, "TORSO_P1_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=275;
break;
case 216:
StringCopy(&Var2, "TORSO_P1_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=280;
break;
case 217:
StringCopy(&Var2, "TORSO_P1_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=280;
break;
case 218:
StringCopy(&Var2, "TORSO_P1_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=280;
break;
case 219:
StringCopy(&Var2, "TORSO_P1_21_10", 16);
iVar3=21;
iVar4=10;
iVar1=280;
break;
case 220:
StringCopy(&Var2, "TORSO_P1_21_11", 16);
iVar3=21;
iVar4=11;
iVar1=280;
break;
case 221:
StringCopy(&Var2, "TORSO_P1_21_12", 16);
iVar3=21;
iVar4=12;
iVar1=280;
break;
case 222:
StringCopy(&Var2, "TORSO_P1_21_13", 16);
iVar3=21;
iVar4=13;
iVar1=280;
break;
case 223:
StringCopy(&Var2, "TORSO_P1_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=3100;
iVar6=3;
break;
case 224:
StringCopy(&Var2, "TORSO_P1_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=2800;
iVar6=3;
break;
case 225:
StringCopy(&Var2, "TORSO_P1_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=2500;
iVar6=3;
break;
case 226:
StringCopy(&Var2, "TORSO_P1_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=3000;
iVar6=3;
break;
default:
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_272(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P1_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P1_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=180;
break;
case 3:
StringCopy(&Var2, "TORSO_P1_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=22;
break;
case 4:
StringCopy(&Var2, "TORSO_P1_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=20;
break;
case 5:
StringCopy(&Var2, "TORSO_P1_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=18;
break;
case 6:
StringCopy(&Var2, "TORSO_P1_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=19;
break;
case 7:
StringCopy(&Var2, "TORSO_P1_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P1_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P1_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=19;
break;
case 10:
StringCopy(&Var2, "TORSO_P1_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=19;
break;
case 11:
StringCopy(&Var2, "TORSO_P1_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=18;
break;
case 12:
StringCopy(&Var2, "TORSO_P1_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=20;
break;
case 13:
StringCopy(&Var2, "TORSO_P1_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=22;
break;
case 14:
StringCopy(&Var2, "TORSO_P1_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=19;
break;
case 15:
StringCopy(&Var2, "TORSO_P1_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=22;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar6=4;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
bVar0=true;
iVar6=4;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
bVar0=true;
iVar6=4;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
bVar0=true;
iVar6=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=4;
bVar0=true;
iVar6=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=5;
bVar0=true;
iVar6=4;
break;
case 22:
StringCopy(&Var2, "TORSO_P1_2_0", 16);
iVar3=2;
iVar4=0;
bVar0=true;
iVar6=3;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
iVar6=1;
break;
case 24:
StringCopy(&Var2, "TORSO_P1_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=20;
iVar6=2;
break;
case 25:
StringCopy(&Var2, "TORSO_P1_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=22;
iVar6=2;
break;
case 26:
StringCopy(&Var2, "TORSO_P1_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=20;
iVar6=2;
break;
case 27:
StringCopy(&Var2, "TORSO_P1_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=25;
iVar6=2;
break;
case 28:
StringCopy(&Var2, "TORSO_P1_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=23;
iVar6=2;
break;
case 29:
StringCopy(&Var2, "TORSO_P1_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=25;
iVar6=2;
break;
case 30:
StringCopy(&Var2, "TORSO_P1_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=28;
iVar6=2;
break;
case 31:
StringCopy(&Var2, "TORSO_P1_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=26;
iVar6=2;
break;
case 32:
StringCopy(&Var2, "TORSO_P1_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=24;
iVar6=2;
break;
case 33:
StringCopy(&Var2, "TORSO_P1_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=27;
iVar6=2;
break;
case 34:
StringCopy(&Var2, "TORSO_P1_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=29;
iVar6=2;
break;
case 35:
StringCopy(&Var2, "TORSO_P1_4_11", 16);
iVar3=4;
iVar4=11;
iVar1=28;
iVar6=2;
break;
case 36:
StringCopy(&Var2, "TORSO_P1_4_12", 16);
iVar3=4;
iVar4=12;
iVar1=25;
iVar6=2;
break;
case 37:
StringCopy(&Var2, "TORSO_P1_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=22;
iVar6=2;
break;
case 38:
StringCopy(&Var2, "TORSO_P1_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=27;
iVar6=2;
break;
case 39:
StringCopy(&Var2, "TORSO_P1_4_15", 16);
iVar3=4;
iVar4=15;
iVar1=29;
iVar6=2;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar6=4;
break;
case 41:
StringCopy(&Var2, "TORSO_P1_6_0", 16);
iVar3=6;
iVar4=0;
iVar6=3;
break;
case 42:
StringCopy(&Var2, "TORSO_P1_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=1270;
iVar6=3;
break;
case 43:
StringCopy(&Var2, "TORSO_P1_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=1270;
iVar6=3;
break;
case 44:
StringCopy(&Var2, "TORSO_P1_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=1270;
iVar6=3;
break;
case 45:
StringCopy(&Var2, "TORSO_P1_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=1090;
iVar6=3;
break;
case 46:
StringCopy(&Var2, "TORSO_P1_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=1090;
iVar6=3;
break;
case 47:
StringCopy(&Var2, "TORSO_P1_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=1120;
iVar6=3;
break;
case 48:
StringCopy(&Var2, "TORSO_P1_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=1120;
iVar6=3;
break;
case 49:
StringCopy(&Var2, "TORSO_P1_6_8", 16);
iVar3=6;
iVar4=8;
iVar1=1290;
iVar6=3;
break;
case 50:
StringCopy(&Var2, "TORSO_P1_6_9", 16);
iVar3=6;
iVar4=9;
iVar1=1290;
iVar6=3;
break;
case 51:
StringCopy(&Var2, "TORSO_P1_6_10", 16);
iVar3=6;
iVar4=10;
iVar1=1320;
iVar6=3;
break;
case 52:
StringCopy(&Var2, "TORSO_P1_6_11", 16);
iVar3=6;
iVar4=11;
iVar1=1320;
iVar6=3;
break;
case 53:
StringCopy(&Var2, "TORSO_P1_6_12", 16);
iVar3=6;
iVar4=12;
iVar1=1590;
iVar6=3;
break;
case 54:
StringCopy(&Var2, "TORSO_P1_6_13", 16);
iVar3=6;
iVar4=13;
iVar1=1590;
iVar6=3;
break;
case 55:
StringCopy(&Var2, "TORSO_P1_6_14", 16);
iVar3=6;
iVar4=14;
iVar1=1590;
iVar6=3;
break;
case 56:
StringCopy(&Var2, "TORSO_P1_6_15", 16);
iVar3=6;
iVar4=15;
iVar1=1320;
iVar6=3;
break;
case 57:
StringCopy(&Var2, "TORSO_P1_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=98;
break;
case 58:
StringCopy(&Var2, "TORSO_P1_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=98;
break;
case 59:
StringCopy(&Var2, "TORSO_P1_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=110;
break;
case 60:
StringCopy(&Var2, "TORSO_P1_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=110;
break;
case 61:
StringCopy(&Var2, "TORSO_P1_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=118;
break;
case 62:
StringCopy(&Var2, "TORSO_P1_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=120;
break;
case 63:
StringCopy(&Var2, "TORSO_P1_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=120;
break;
case 64:
StringCopy(&Var2, "TORSO_P1_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=129;
break;
case 65:
StringCopy(&Var2, "TORSO_P1_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=125;
break;
case 66:
StringCopy(&Var2, "TORSO_P1_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=125;
break;
case 67:
StringCopy(&Var2, "TORSO_P1_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=129;
break;
case 68:
StringCopy(&Var2, "TORSO_P1_7_11", 16);
iVar3=7;
iVar4=11;
iVar1=129;
break;
case 69:
StringCopy(&Var2, "TORSO_P1_7_12", 16);
iVar3=7;
iVar4=12;
iVar1=135;
break;
case 70:
StringCopy(&Var2, "TORSO_P1_7_13", 16);
iVar3=7;
iVar4=13;
iVar1=139;
break;
case 71:
StringCopy(&Var2, "TORSO_P1_7_14", 16);
iVar3=7;
iVar4=14;
iVar1=145;
break;
case 72:
StringCopy(&Var2, "TORSO_P1_7_15", 16);
iVar3=7;
iVar4=15;
iVar1=145;
break;
case 73:
StringCopy(&Var2, "TORSO_P1_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 74:
StringCopy(&Var2, "TORSO_P1_8_1", 16);
iVar3=8;
iVar4=1;
break;
case 75:
StringCopy(&Var2, "TORSO_P1_8_2", 16);
iVar3=8;
iVar4=2;
break;
case 76:
StringCopy(&Var2, "TORSO_P1_8_3", 16);
iVar3=8;
iVar4=3;
break;
case 77:
StringCopy(&Var2, "TORSO_P1_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=30;
break;
case 78:
StringCopy(&Var2, "TORSO_P1_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=38;
break;
case 79:
StringCopy(&Var2, "TORSO_P1_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=32;
break;
case 80:
StringCopy(&Var2, "TORSO_P1_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=30;
break;
case 81:
StringCopy(&Var2, "TORSO_P1_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=33;
break;
case 82:
StringCopy(&Var2, "TORSO_P1_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=35;
break;
case 83:
StringCopy(&Var2, "TORSO_P1_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=35;
break;
case 84:
StringCopy(&Var2, "TORSO_P1_8_11", 16);
iVar3=8;
iVar4=11;
iVar1=38;
break;
case 85:
StringCopy(&Var2, "TORSO_P1_8_12", 16);
iVar3=8;
iVar4=12;
iVar1=33;
break;
case 86:
StringCopy(&Var2, "TORSO_P1_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=35;
break;
case 87:
StringCopy(&Var2, "TORSO_P1_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=38;
break;
case 88:
StringCopy(&Var2, "TORSO_P1_8_15", 16);
iVar3=8;
iVar4=15;
iVar1=32;
break;
case 89:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "TORSO_P1_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 92:
StringCopy(&Var2, "TORSO_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=59;
break;
case 93:
StringCopy(&Var2, "TORSO_P1_11_2", 16);
iVar3=11;
iVar4=2;
break;
case 94:
StringCopy(&Var2, "TORSO_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=25;
break;
case 95:
StringCopy(&Var2, "TORSO_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=29;
break;
case 96:
StringCopy(&Var2, "TORSO_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=27;
break;
case 97:
StringCopy(&Var2, "TORSO_P1_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=25;
break;
case 98:
StringCopy(&Var2, "TORSO_P1_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=27;
break;
case 99:
StringCopy(&Var2, "TORSO_P1_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=28;
break;
case 100:
StringCopy(&Var2, "TORSO_P1_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=30;
break;
case 101:
StringCopy(&Var2, "TORSO_P1_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=29;
break;
case 102:
StringCopy(&Var2, "TORSO_P1_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=27;
break;
case 103:
StringCopy(&Var2, "TORSO_P1_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=29;
break;
case 104:
StringCopy(&Var2, "TORSO_P1_11_13", 16);
iVar3=11;
iVar4=13;
iVar1=32;
break;
case 105:
StringCopy(&Var2, "TORSO_P1_11_14", 16);
iVar3=11;
iVar4=14;
iVar1=30;
break;
case 106:
StringCopy(&Var2, "TORSO_P1_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=28;
break;
default:
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_273(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P1_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P1_0_2", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "HAIR_P1_0_3", 16);
iVar3=0;
iVar4=3;
iVar6=3;
break;
case 4:
StringCopy(&Var2, "HAIR_P1_0_4", 16);
iVar3=0;
iVar4=4;
iVar6=3;
break;
case 5:
StringCopy(&Var2, "HAIR_P1_0_5", 16);
iVar3=0;
iVar4=5;
iVar6=3;
break;
case 6:
StringCopy(&Var2, "HAIR_P1_0_6", 16);
iVar3=0;
iVar4=6;
iVar6=3;
break;
case 7:
StringCopy(&Var2, "HAIR_P1_0_7", 16);
iVar3=0;
iVar4=7;
iVar6=3;
break;
case 8:
StringCopy(&Var2, "HAIR_P1_0_8", 16);
iVar3=0;
iVar4=8;
iVar6=3;
break;
case 9:
StringCopy(&Var2, "HAIR_P1_0_9", 16);
iVar3=0;
iVar4=9;
iVar6=3;
break;
case 10:
StringCopy(&Var2, "HAIR_P1_0_10", 16);
iVar3=0;
iVar4=10;
iVar6=3;
break;
case 11:
StringCopy(&Var2, "HAIR_P1_0_11", 16);
iVar3=0;
iVar4=11;
iVar6=3;
break;
case 12:
StringCopy(&Var2, "HAIR_P1_0_12", 16);
iVar3=0;
iVar4=12;
iVar6=3;
break;
case 13:
StringCopy(&Var2, "HAIR_P1_0_13", 16);
iVar3=0;
iVar4=13;
break;
case 14:
StringCopy(&Var2, "HAIR_P1_0_14", 16);
iVar3=0;
iVar4=14;
iVar6=3;
break;
case 15:
StringCopy(&Var2, "HAIR_P1_0_15", 16);
iVar3=0;
iVar4=15;
iVar6=3;
break;
case 16:
StringCopy(&Var2, "HAIR_P1_1_0", 16);
iVar3=1;
iVar4=0;
iVar6=3;
break;
case 17:
StringCopy(&Var2, "HAIR_P1_2_0", 16);
iVar3=2;
iVar4=0;
iVar6=3;
break;
case 18:
StringCopy(&Var2, "HAIR_P1_3_0", 16);
iVar3=3;
iVar4=0;
iVar6=3;
break;
case 19:
StringCopy(&Var2, "HAIR_P1_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
default:
func_238(iVar7, iParam0, 21, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_274(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=0;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=8;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=9;
break;
default:
func_238(iVar7, iParam0, 10, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_275(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_292(iParam1);
break;
case 2:
func_291(iParam1);
break;
case 3:
func_288(iParam1);
break;
case 4:
func_287(iParam1);
break;
case 6:
func_286(iParam1);
break;
case 5:
func_285(iParam1);
break;
case 8:
func_284(iParam1);
break;
case 9:
func_283(iParam1);
break;
case 10:
func_282(iParam1);
break;
case 1:
func_281(iParam1);
break;
case 7:
func_280(iParam1);
break;
case 11:
func_279(iParam1);
break;
case 12:
func_278(iParam1);
break;
case 13:
func_277(iParam1);
break;
case 14:
func_276(iParam1);
break;
}}


void func_276(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 11:
StringCopy(&Var2, "PROPS_P0_H1", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P0_H2", 16);
iVar3=2;
iVar4=0;
iVar1=320;
iVar5=11;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar5=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
iVar5=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
iVar5=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
iVar5=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=4;
iVar5=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=5;
iVar5=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=6;
iVar5=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=7;
iVar5=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P0_H12", 16);
iVar3=12;
iVar4=0;
iVar5=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
iVar5=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=14;
iVar4=0;
iVar1=270;
iVar5=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=14;
iVar4=1;
iVar1=270;
iVar5=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar3=15;
iVar4=0;
iVar1=200;
iVar5=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar3=15;
iVar4=1;
iVar1=200;
iVar5=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar3=16;
iVar4=0;
iVar1=350;
iVar5=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar3=16;
iVar4=1;
iVar1=350;
iVar5=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar3=17;
iVar4=0;
iVar1=450;
iVar5=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar3=18;
iVar4=0;
iVar1=500;
iVar5=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar3=18;
iVar4=1;
iVar1=500;
iVar5=0;
break;
case 40:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar3=19;
iVar4=0;
iVar1=50;
iVar5=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar3=19;
iVar4=1;
iVar1=50;
iVar5=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar3=20;
iVar4=0;
iVar1=99;
iVar5=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar3=20;
iVar4=1;
iVar1=99;
iVar5=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar3=20;
iVar4=2;
iVar1=99;
iVar5=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
iVar5=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=22;
iVar4=0;
iVar5=0;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=0;
iVar5=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=1;
iVar5=0;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=2;
iVar5=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=3;
iVar5=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=4;
iVar5=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=5;
iVar5=0;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=24;
iVar4=0;
iVar5=0;
break;
case 54:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
iVar5=0;
break;
case 55:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
iVar5=0;
break;
case 56:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=27;
iVar4=0;
iVar5=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=28;
iVar4=0;
iVar5=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P0_E0", 16);
iVar3=0;
iVar4=0;
iVar1=45;
iVar5=10;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 61:
StringCopy(&Var2, "PROPS_P0_E3", 16);
iVar3=3;
iVar4=0;
iVar1=55;
iVar5=10;
break;
case 62:
StringCopy(&Var2, "PROPS_P0_E4", 16);
iVar3=4;
iVar4=0;
iVar1=58;
iVar5=10;
break;
case 63:
StringCopy(&Var2, "PROPS_P0_E4_1", 16);
iVar3=4;
iVar4=1;
iVar1=56;
iVar5=10;
break;
case 64:
StringCopy(&Var2, "PROPS_P0_E4_2", 16);
iVar3=4;
iVar4=2;
iVar1=60;
iVar5=10;
break;
case 65:
StringCopy(&Var2, "PROPS_P0_E4_3", 16);
iVar3=4;
iVar4=3;
iVar1=65;
iVar5=10;
break;
case 66:
StringCopy(&Var2, "PROPS_P0_E4_4", 16);
iVar3=4;
iVar4=4;
iVar1=62;
iVar5=10;
break;
case 67:
StringCopy(&Var2, "PROPS_P0_E4_5", 16);
iVar3=4;
iVar4=5;
iVar1=65;
iVar5=10;
break;
case 68:
StringCopy(&Var2, "PROPS_P0_E4_6", 16);
iVar3=4;
iVar4=6;
iVar1=68;
iVar5=10;
break;
case 69:
StringCopy(&Var2, "PROPS_P0_E4_7", 16);
iVar3=4;
iVar4=7;
iVar1=68;
iVar5=10;
break;
case 70:
StringCopy(&Var2, "PROPS_P0_E5", 16);
iVar3=5;
iVar4=0;
iVar1=65;
iVar5=10;
break;
case 71:
StringCopy(&Var2, "PROPS_P0_E5_1", 16);
iVar3=5;
iVar4=1;
iVar1=69;
iVar5=10;
break;
case 72:
StringCopy(&Var2, "PROPS_P0_E5_2", 16);
iVar3=5;
iVar4=2;
iVar1=72;
iVar5=10;
break;
case 73:
StringCopy(&Var2, "PROPS_P0_E5_3", 16);
iVar3=5;
iVar4=3;
iVar1=70;
iVar5=10;
break;
case 74:
StringCopy(&Var2, "PROPS_P0_E5_4", 16);
iVar3=5;
iVar4=4;
iVar1=74;
iVar5=10;
break;
case 75:
StringCopy(&Var2, "PROPS_P0_E5_5", 16);
iVar3=5;
iVar4=5;
iVar1=78;
iVar5=10;
break;
case 76:
StringCopy(&Var2, "PROPS_P0_E5_6", 16);
iVar3=5;
iVar4=6;
iVar1=82;
iVar5=10;
break;
case 77:
StringCopy(&Var2, "PROPS_P0_E5_7", 16);
iVar3=5;
iVar4=7;
iVar1=85;
iVar5=10;
break;
case 78:
StringCopy(&Var2, "PROPS_P0_E5_8", 16);
iVar3=5;
iVar4=8;
iVar1=85;
iVar5=10;
break;
case 79:
StringCopy(&Var2, "PROPS_P0_E5_9", 16);
iVar3=5;
iVar4=9;
iVar5=10;
break;
case 80:
StringCopy(&Var2, "PROPS_P0_E6", 16);
iVar3=6;
iVar4=0;
iVar1=69;
iVar5=10;
break;
case 81:
StringCopy(&Var2, "PROPS_P0_E6_1", 16);
iVar3=6;
iVar4=1;
iVar1=69;
iVar5=10;
break;
case 82:
StringCopy(&Var2, "PROPS_P0_E6_2", 16);
iVar3=6;
iVar4=2;
iVar1=69;
iVar5=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P0_E6_3", 16);
iVar3=6;
iVar4=3;
iVar1=69;
iVar5=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P0_E6_4", 16);
iVar3=6;
iVar4=4;
iVar1=69;
iVar5=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P0_E6_5", 16);
iVar3=6;
iVar4=5;
iVar1=69;
iVar5=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P0_E6_6", 16);
iVar3=6;
iVar4=6;
iVar1=69;
iVar5=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P0_E6_7", 16);
iVar3=6;
iVar4=7;
iVar1=69;
iVar5=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P0_E6_8", 16);
iVar3=6;
iVar4=8;
iVar1=69;
iVar5=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P0_E6_9", 16);
iVar3=6;
iVar4=9;
iVar1=69;
iVar5=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P0_E7", 16);
iVar3=7;
iVar4=0;
iVar5=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P0_E8", 16);
iVar3=8;
iVar4=0;
iVar1=170;
iVar5=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P0_E8_1", 16);
iVar3=8;
iVar4=1;
iVar1=175;
iVar5=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P0_E8_2", 16);
iVar3=8;
iVar4=2;
iVar1=180;
iVar5=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P0_E8_3", 16);
iVar3=8;
iVar4=3;
iVar1=185;
iVar5=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P0_E8_4", 16);
iVar3=8;
iVar4=4;
iVar1=189;
iVar5=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P0_E8_5", 16);
iVar3=8;
iVar4=5;
iVar1=195;
iVar5=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P0_E8_6", 16);
iVar3=8;
iVar4=6;
iVar1=235;
iVar5=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P0_E8_7", 16);
iVar3=8;
iVar4=7;
iVar1=245;
iVar5=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P0_E8_8", 16);
iVar3=8;
iVar4=8;
iVar1=250;
iVar5=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P0_E8_9", 16);
iVar3=8;
iVar4=9;
iVar1=275;
iVar5=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P0_E8_10", 16);
iVar3=8;
iVar4=10;
iVar1=280;
iVar5=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P0_E8_11", 16);
iVar3=8;
iVar4=11;
iVar1=295;
iVar5=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P0_E9", 16);
iVar3=9;
iVar4=0;
iVar1=179;
iVar5=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P0_E9_1", 16);
iVar3=9;
iVar4=1;
iVar1=159;
iVar5=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P0_E9_2", 16);
iVar3=9;
iVar4=2;
iVar1=165;
iVar5=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P0_E9_3", 16);
iVar3=9;
iVar4=3;
iVar1=155;
iVar5=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P0_E9_4", 16);
iVar3=9;
iVar4=4;
iVar1=175;
iVar5=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P0_E9_5", 16);
iVar3=9;
iVar4=5;
iVar1=185;
iVar5=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P0_E9_6", 16);
iVar3=9;
iVar4=6;
iVar1=189;
iVar5=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P0_E9_7", 16);
iVar3=9;
iVar4=7;
iVar1=225;
iVar5=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
iVar1=100;
iVar5=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=2;
break;
default:
func_238(iVar7, iParam0, 113, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_277(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
default:
func_238(iVar7, iParam0, 10, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_278(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P0_0", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P0_1", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P0_4", 16);
iVar3=0;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P0_7", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P0_8", 16);
iVar3=0;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P0_9", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar3=0;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P0_12", 16);
iVar3=0;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P0_14", 16);
iVar3=0;
iVar4=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar3=0;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P0_18", 16);
iVar3=0;
iVar4=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P0_19", 16);
iVar3=0;
iVar4=0;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P0_20", 16);
iVar3=0;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P0_22", 16);
iVar3=0;
iVar4=0;
iVar1=10000;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P0_23", 16);
iVar3=0;
iVar4=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P0_24", 16);
iVar3=0;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P0_26", 16);
iVar3=0;
iVar4=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P0_28", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P0_29", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P0_30", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P0_31", 16);
iVar3=0;
iVar4=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P0_32", 16);
iVar3=0;
iVar4=0;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P0_33", 16);
iVar3=0;
iVar4=0;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P0_34", 16);
iVar3=0;
iVar4=0;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P0_35", 16);
iVar3=0;
iVar4=0;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar3=0;
iVar4=0;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P0_36", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P0_37", 16);
iVar3=0;
iVar4=0;
iVar1=840;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P0_38", 16);
iVar3=0;
iVar4=0;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P0_39", 16);
iVar3=0;
iVar4=0;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P0_40", 16);
iVar3=0;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P0_41", 16);
iVar3=0;
iVar4=0;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P0_42", 16);
iVar3=0;
iVar4=0;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P0_43", 16);
iVar3=0;
iVar4=0;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P0_44", 16);
iVar3=0;
iVar4=0;
iVar1=3900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P0_45", 16);
iVar3=0;
iVar4=0;
iVar1=4000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P0_46", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P0_47", 16);
iVar3=0;
iVar4=0;
iVar1=4600;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P0_48", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P0_49", 16);
iVar3=0;
iVar4=0;
iVar1=4400;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P0_50", 16);
iVar3=0;
iVar4=0;
iVar1=4400;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P0_51", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P0_52", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P0_53", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P0_54", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 48:
StringCopy(&Var2, "OUTFIT_P0_55", 16);
iVar3=0;
iVar4=0;
break;
case 49:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar3=0;
iVar4=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 53, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_279(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "JBIB_P0_02_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "JBIB_P0_02_1", 16);
iVar3=2;
iVar4=1;
break;
case 4:
StringCopy(&Var2, "JBIB_P0_02_2", 16);
iVar3=2;
iVar4=2;
break;
case 5:
StringCopy(&Var2, "JBIB_P0_02_3", 16);
iVar3=2;
iVar4=3;
break;
case 6:
StringCopy(&Var2, "JBIB_P0_02_4", 16);
iVar3=2;
iVar4=4;
break;
case 7:
StringCopy(&Var2, "JBIB_P0_02_5", 16);
iVar3=2;
iVar4=5;
break;
case 8:
StringCopy(&Var2, "JBIB_P0_03_0", 16);
iVar3=3;
iVar4=0;
iVar1=390;
break;
case 9:
StringCopy(&Var2, "JBIB_P0_03_1", 16);
iVar3=3;
iVar4=1;
iVar1=390;
break;
case 10:
StringCopy(&Var2, "JBIB_P0_03_2", 16);
iVar3=3;
iVar4=2;
iVar1=420;
break;
case 11:
StringCopy(&Var2, "JBIB_P0_03_3", 16);
iVar3=3;
iVar4=3;
iVar1=420;
break;
case 12:
StringCopy(&Var2, "JBIB_P0_03_4", 16);
iVar3=3;
iVar4=4;
iVar1=490;
break;
case 13:
StringCopy(&Var2, "JBIB_P0_03_5", 16);
iVar3=3;
iVar4=5;
iVar1=490;
break;
case 14:
StringCopy(&Var2, "JBIB_P0_03_6", 16);
iVar3=3;
iVar4=6;
iVar1=540;
break;
case 15:
StringCopy(&Var2, "JBIB_P0_03_7", 16);
iVar3=3;
iVar4=7;
iVar1=540;
break;
case 16:
StringCopy(&Var2, "JBIB_P0_03_8", 16);
iVar3=3;
iVar4=8;
iVar1=550;
break;
case 17:
StringCopy(&Var2, "JBIB_P0_03_9", 16);
iVar3=3;
iVar4=9;
iVar1=540;
break;
case 18:
StringCopy(&Var2, "JBIB_P0_04_0", 16);
iVar3=4;
iVar4=0;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "JBIB_P0_04_1", 16);
iVar3=4;
iVar4=1;
iVar1=850;
break;
case 20:
StringCopy(&Var2, "JBIB_P0_04_2", 16);
iVar3=4;
iVar4=2;
iVar1=890;
break;
case 21:
StringCopy(&Var2, "JBIB_P0_04_3", 16);
iVar3=4;
iVar4=3;
iVar1=890;
break;
case 22:
StringCopy(&Var2, "JBIB_P0_04_4", 16);
iVar3=4;
iVar4=4;
iVar1=920;
break;
case 23:
StringCopy(&Var2, "JBIB_P0_04_5", 16);
iVar3=4;
iVar4=5;
iVar1=920;
break;
case 24:
StringCopy(&Var2, "JBIB_P0_04_6", 16);
iVar3=4;
iVar4=6;
iVar1=950;
break;
case 25:
StringCopy(&Var2, "JBIB_P0_04_7", 16);
iVar3=4;
iVar4=7;
iVar1=980;
break;
case 26:
StringCopy(&Var2, "JBIB_P0_04_8", 16);
iVar3=4;
iVar4=8;
iVar1=1050;
break;
case 27:
StringCopy(&Var2, "JBIB_P0_04_9", 16);
iVar3=4;
iVar4=9;
iVar1=1100;
break;
case 28:
StringCopy(&Var2, "JBIB_P0_05_0", 16);
iVar3=5;
iVar4=0;
iVar1=1890;
break;
case 29:
StringCopy(&Var2, "JBIB_P0_05_1", 16);
iVar3=5;
iVar4=1;
iVar1=1820;
break;
case 30:
StringCopy(&Var2, "JBIB_P0_05_2", 16);
iVar3=5;
iVar4=2;
iVar1=1820;
break;
case 31:
StringCopy(&Var2, "JBIB_P0_05_3", 16);
iVar3=5;
iVar4=3;
iVar1=1850;
break;
case 32:
StringCopy(&Var2, "JBIB_P0_05_4", 16);
iVar3=5;
iVar4=4;
iVar1=1850;
break;
case 33:
StringCopy(&Var2, "JBIB_P0_05_5", 16);
iVar3=5;
iVar4=5;
iVar1=1900;
break;
case 34:
StringCopy(&Var2, "JBIB_P0_05_6", 16);
iVar3=5;
iVar4=6;
iVar1=1920;
break;
case 35:
StringCopy(&Var2, "JBIB_P0_05_7", 16);
iVar3=5;
iVar4=7;
iVar1=1980;
break;
case 36:
StringCopy(&Var2, "JBIB_P0_05_8", 16);
iVar3=5;
iVar4=8;
iVar1=2100;
break;
case 37:
StringCopy(&Var2, "JBIB_P0_05_9", 16);
iVar3=5;
iVar4=9;
iVar1=2120;
break;
case 38:
StringCopy(&Var2, "JBIB_P0_05_10", 16);
iVar3=5;
iVar4=10;
iVar1=2000;
break;
case 39:
StringCopy(&Var2, "JBIB_P0_05_11", 16);
iVar3=5;
iVar4=11;
iVar1=2200;
break;
case 40:
StringCopy(&Var2, "JBIB_P0_05_12", 16);
iVar3=5;
iVar4=12;
iVar1=2280;
break;
case 41:
StringCopy(&Var2, "JBIB_P0_05_13", 16);
iVar3=5;
iVar4=13;
iVar1=2300;
break;
case 42:
StringCopy(&Var2, "JBIB_P0_05_14", 16);
iVar3=5;
iVar4=14;
iVar1=2350;
break;
case 43:
StringCopy(&Var2, "JBIB_P0_05_15", 16);
iVar3=5;
iVar4=15;
iVar1=2280;
break;
case 44:
StringCopy(&Var2, "JBIB_P0_06_0", 16);
iVar3=6;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 45, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_280(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 1, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_281(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "BERD_P0_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "BERD_P0_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "BERD_P0_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "BERD_P0_4_0", 16);
iVar3=4;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 5, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_282(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=1;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=2;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=3;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=4;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=5;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=6;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=7;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=1;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=2;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=3;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=5;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=1;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=2;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=3;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=4;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=5;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=6;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=1;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=2;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=3;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=4;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=5;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=6;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=7;
break;
case 36:
StringCopy(&Var2, "DECL_P0_10_8", 16);
iVar3=10;
iVar4=8;
break;
case 37:
StringCopy(&Var2, "DECL_P0_10_9", 16);
iVar3=10;
iVar4=9;
break;
case 38:
StringCopy(&Var2, "DECL_P0_10_10", 16);
iVar3=10;
iVar4=10;
break;
case 39:
StringCopy(&Var2, "DECL_P0_10_11", 16);
iVar3=10;
iVar4=11;
break;
case 40:
StringCopy(&Var2, "DECL_P0_10_12", 16);
iVar3=10;
iVar4=12;
break;
case 41:
StringCopy(&Var2, "DECL_P0_10_13", 16);
iVar3=10;
iVar4=13;
break;
case 42:
StringCopy(&Var2, "DECL_P0_10_14", 16);
iVar3=10;
iVar4=14;
break;
case 43:
StringCopy(&Var2, "DECL_P0_10_15", 16);
iVar3=10;
iVar4=15;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
break;
default:
func_238(iVar7, iParam0, 48, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_283(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar3=8;
iVar4=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar3=8;
iVar4=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar3=8;
iVar4=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar3=8;
iVar4=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar3=8;
iVar4=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar3=8;
iVar4=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=1;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
default:
func_238(iVar7, iParam0, 20, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_284(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "SPEC_P0_10", 16);
iVar3=10;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "SPEC_P0_16", 16);
iVar3=16;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=19;
iVar4=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=20;
iVar4=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=22;
iVar4=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=0;
bVar0=true;
break;
default:
func_238(iVar7, iParam0, 24, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_285(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=2;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=3;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=4;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
default:
func_238(iVar7, iParam0, 14, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_286(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "FEET_P0_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=665;
break;
case 2:
StringCopy(&Var2, "FEET_P0_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=620;
break;
case 3:
StringCopy(&Var2, "FEET_P0_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=540;
break;
case 4:
StringCopy(&Var2, "FEET_P0_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=580;
break;
case 5:
StringCopy(&Var2, "FEET_P0_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=650;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "FEET_P0_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "FEET_P0_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 21:
StringCopy(&Var2, "FEET_P0_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=64;
break;
case 22:
StringCopy(&Var2, "FEET_P0_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=56;
break;
case 23:
StringCopy(&Var2, "FEET_P0_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=69;
break;
case 24:
StringCopy(&Var2, "FEET_P0_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=59;
break;
case 25:
StringCopy(&Var2, "FEET_P0_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=62;
break;
case 26:
StringCopy(&Var2, "FEET_P0_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=74;
break;
case 27:
StringCopy(&Var2, "FEET_P0_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=68;
break;
case 28:
StringCopy(&Var2, "FEET_P0_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=72;
break;
case 29:
StringCopy(&Var2, "FEET_P0_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=70;
break;
case 30:
StringCopy(&Var2, "FEET_P0_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=48;
break;
case 31:
StringCopy(&Var2, "FEET_P0_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=48;
break;
case 32:
StringCopy(&Var2, "FEET_P0_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=55;
break;
case 33:
StringCopy(&Var2, "FEET_P0_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=75;
break;
case 34:
StringCopy(&Var2, "FEET_P0_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=65;
break;
case 35:
StringCopy(&Var2, "FEET_P0_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=68;
break;
case 36:
StringCopy(&Var2, "FEET_P0_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=58;
break;
case 37:
StringCopy(&Var2, "FEET_P0_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=68;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "FEET_P0_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=790;
break;
case 40:
StringCopy(&Var2, "FEET_P0_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=750;
break;
case 41:
StringCopy(&Var2, "FEET_P0_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=860;
break;
case 42:
StringCopy(&Var2, "FEET_P0_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=750;
break;
case 43:
StringCopy(&Var2, "FEET_P0_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=790;
break;
case 44:
StringCopy(&Var2, "FEET_P0_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=840;
break;
case 45:
StringCopy(&Var2, "FEET_P0_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=820;
break;
case 46:
StringCopy(&Var2, "FEET_P0_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=800;
break;
case 47:
StringCopy(&Var2, "FEET_P0_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=850;
break;
case 48:
StringCopy(&Var2, "FEET_P0_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=870;
break;
case 49:
StringCopy(&Var2, "FEET_P0_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=720;
break;
case 50:
StringCopy(&Var2, "FEET_P0_18_11", 16);
iVar3=18;
iVar4=11;
iVar1=740;
break;
case 51:
StringCopy(&Var2, "FEET_P0_18_12", 16);
iVar3=18;
iVar4=12;
iVar1=800;
break;
case 52:
StringCopy(&Var2, "FEET_P0_18_13", 16);
iVar3=18;
iVar4=13;
iVar1=750;
break;
case 53:
StringCopy(&Var2, "FEET_P0_18_14", 16);
iVar3=18;
iVar4=14;
iVar1=770;
break;
case 54:
StringCopy(&Var2, "FEET_P0_18_15", 16);
iVar3=18;
iVar4=15;
iVar1=860;
break;
case 55:
StringCopy(&Var2, "FEET_P0_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=850;
break;
case 56:
StringCopy(&Var2, "FEET_P0_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=800;
break;
case 57:
StringCopy(&Var2, "FEET_P0_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=780;
break;
case 58:
StringCopy(&Var2, "FEET_P0_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=890;
break;
case 59:
StringCopy(&Var2, "FEET_P0_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=820;
break;
case 60:
StringCopy(&Var2, "FEET_P0_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=840;
break;
case 61:
StringCopy(&Var2, "FEET_P0_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=870;
break;
case 62:
StringCopy(&Var2, "FEET_P0_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=930;
break;
case 63:
StringCopy(&Var2, "FEET_P0_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=880;
break;
case 64:
StringCopy(&Var2, "FEET_P0_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=900;
break;
case 65:
StringCopy(&Var2, "FEET_P0_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=920;
break;
case 66:
StringCopy(&Var2, "FEET_P0_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=970;
break;
case 67:
StringCopy(&Var2, "FEET_P0_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=990;
break;
case 68:
StringCopy(&Var2, "FEET_P0_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=960;
break;
case 69:
StringCopy(&Var2, "FEET_P0_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=980;
break;
case 70:
StringCopy(&Var2, "FEET_P0_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=950;
break;
case 71:
StringCopy(&Var2, "FEET_P0_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P0_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=115;
break;
case 73:
StringCopy(&Var2, "FEET_P0_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "FEET_P0_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=110;
break;
case 75:
StringCopy(&Var2, "FEET_P0_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=125;
break;
case 76:
StringCopy(&Var2, "FEET_P0_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=128;
break;
case 77:
StringCopy(&Var2, "FEET_P0_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=135;
break;
case 78:
StringCopy(&Var2, "FEET_P0_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=130;
break;
case 79:
StringCopy(&Var2, "FEET_P0_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=145;
break;
case 80:
StringCopy(&Var2, "FEET_P0_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=110;
break;
case 81:
StringCopy(&Var2, "FEET_P0_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P0_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=150;
break;
case 83:
StringCopy(&Var2, "FEET_P0_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=125;
break;
case 84:
StringCopy(&Var2, "FEET_P0_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=120;
break;
case 85:
StringCopy(&Var2, "FEET_P0_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=130;
break;
case 86:
StringCopy(&Var2, "FEET_P0_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=110;
break;
case 87:
StringCopy(&Var2, "FEET_P0_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=720;
break;
case 88:
StringCopy(&Var2, "FEET_P0_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=680;
break;
case 89:
StringCopy(&Var2, "FEET_P0_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=650;
break;
case 90:
StringCopy(&Var2, "FEET_P0_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=670;
break;
case 91:
StringCopy(&Var2, "FEET_P0_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=700;
break;
case 92:
StringCopy(&Var2, "FEET_P0_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=680;
break;
case 93:
StringCopy(&Var2, "FEET_P0_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=720;
break;
case 94:
StringCopy(&Var2, "FEET_P0_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=740;
break;
case 95:
StringCopy(&Var2, "FEET_P0_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=760;
break;
case 96:
StringCopy(&Var2, "FEET_P0_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=780;
break;
case 97:
StringCopy(&Var2, "FEET_P0_21_10", 16);
iVar3=21;
iVar4=10;
iVar1=750;
break;
case 98:
StringCopy(&Var2, "FEET_P0_21_11", 16);
iVar3=21;
iVar4=11;
iVar1=700;
break;
default:
func_238(iVar7, iParam0, 99, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_287(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "LEGS_P0_0_2", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "LEGS_P0_0_3", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "LEGS_P0_0_4", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "LEGS_P0_0_5", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "LEGS_P0_0_6", 16);
iVar3=0;
iVar4=6;
break;
case 7:
StringCopy(&Var2, "LEGS_P0_0_7", 16);
iVar3=0;
iVar4=7;
break;
case 8:
StringCopy(&Var2, "LEGS_P0_0_8", 16);
iVar3=0;
iVar4=8;
break;
case 9:
StringCopy(&Var2, "LEGS_P0_0_9", 16);
iVar3=0;
iVar4=9;
break;
case 10:
StringCopy(&Var2, "LEGS_P0_0_10", 16);
iVar3=0;
iVar4=10;
break;
case 11:
StringCopy(&Var2, "LEGS_P0_0_11", 16);
iVar3=0;
iVar4=11;
break;
case 12:
StringCopy(&Var2, "LEGS_P0_0_12", 16);
iVar3=0;
iVar4=12;
break;
case 13:
StringCopy(&Var2, "LEGS_P0_0_13", 16);
iVar3=0;
iVar4=13;
break;
case 14:
StringCopy(&Var2, "LEGS_P0_0_14", 16);
iVar3=0;
iVar4=14;
break;
case 15:
StringCopy(&Var2, "LEGS_P0_0_15", 16);
iVar3=0;
iVar4=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "LEGS_P0_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=115;
break;
case 24:
StringCopy(&Var2, "LEGS_P0_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=115;
break;
case 25:
StringCopy(&Var2, "LEGS_P0_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=128;
break;
case 26:
StringCopy(&Var2, "LEGS_P0_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=118;
break;
case 27:
StringCopy(&Var2, "LEGS_P0_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "LEGS_P0_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=128;
break;
case 29:
StringCopy(&Var2, "LEGS_P0_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=128;
break;
case 30:
StringCopy(&Var2, "LEGS_P0_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=125;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=4;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=5;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "LEGS_P0_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=68;
break;
case 42:
StringCopy(&Var2, "LEGS_P0_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=68;
break;
case 43:
StringCopy(&Var2, "LEGS_P0_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=68;
break;
case 44:
StringCopy(&Var2, "LEGS_P0_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=68;
break;
case 45:
StringCopy(&Var2, "LEGS_P0_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=68;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "LEGS_P0_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 48:
StringCopy(&Var2, "LEGS_P0_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=550;
break;
case 49:
StringCopy(&Var2, "LEGS_P0_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=650;
break;
case 50:
StringCopy(&Var2, "LEGS_P0_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=875;
break;
case 51:
StringCopy(&Var2, "LEGS_P0_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=820;
break;
case 52:
StringCopy(&Var2, "LEGS_P0_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=720;
break;
case 53:
StringCopy(&Var2, "LEGS_P0_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=750;
break;
case 54:
StringCopy(&Var2, "LEGS_P0_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=850;
break;
case 55:
StringCopy(&Var2, "LEGS_P0_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 56:
StringCopy(&Var2, "LEGS_P0_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=48;
break;
case 57:
StringCopy(&Var2, "LEGS_P0_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=48;
break;
case 58:
StringCopy(&Var2, "LEGS_P0_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=38;
break;
case 59:
StringCopy(&Var2, "LEGS_P0_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=38;
break;
case 60:
StringCopy(&Var2, "LEGS_P0_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=42;
break;
case 61:
StringCopy(&Var2, "LEGS_P0_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=58;
break;
case 62:
StringCopy(&Var2, "LEGS_P0_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=46;
break;
case 63:
StringCopy(&Var2, "LEGS_P0_16_8", 16);
iVar3=16;
iVar4=8;
iVar1=46;
break;
case 64:
StringCopy(&Var2, "LEGS_P0_16_9", 16);
iVar3=16;
iVar4=9;
iVar1=46;
break;
case 65:
StringCopy(&Var2, "LEGS_P0_16_10", 16);
iVar3=16;
iVar4=10;
iVar1=68;
break;
case 66:
StringCopy(&Var2, "LEGS_P0_16_11", 16);
iVar3=16;
iVar4=11;
iVar1=58;
break;
case 67:
StringCopy(&Var2, "LEGS_P0_16_12", 16);
iVar3=16;
iVar4=12;
iVar1=50;
break;
case 68:
StringCopy(&Var2, "LEGS_P0_16_13", 16);
iVar3=16;
iVar4=13;
iVar1=68;
break;
case 69:
StringCopy(&Var2, "LEGS_P0_16_14", 16);
iVar3=16;
iVar4=14;
iVar1=68;
break;
case 70:
StringCopy(&Var2, "LEGS_P0_16_15", 16);
iVar3=16;
iVar4=15;
iVar1=42;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P0_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P0_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=250;
break;
case 74:
StringCopy(&Var2, "LEGS_P0_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=250;
break;
case 75:
StringCopy(&Var2, "LEGS_P0_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=290;
break;
case 76:
StringCopy(&Var2, "LEGS_P0_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=270;
break;
case 77:
StringCopy(&Var2, "LEGS_P0_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=270;
break;
case 78:
StringCopy(&Var2, "LEGS_P0_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=15;
break;
case 79:
StringCopy(&Var2, "LEGS_P0_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=12;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=19;
iVar4=0;
bVar0=true;
break;
case 81:
StringCopy(&Var2, "LEGS_P0_20_0", 16);
iVar3=20;
iVar4=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P0_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=118;
break;
case 83:
StringCopy(&Var2, "LEGS_P0_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=110;
break;
case 84:
StringCopy(&Var2, "LEGS_P0_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=88;
break;
case 85:
StringCopy(&Var2, "LEGS_P0_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=95;
break;
case 86:
StringCopy(&Var2, "LEGS_P0_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=95;
break;
case 87:
StringCopy(&Var2, "LEGS_P0_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=98;
break;
case 88:
StringCopy(&Var2, "LEGS_P0_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=140;
break;
case 89:
StringCopy(&Var2, "LEGS_P0_23_0", 16);
iVar3=23;
iVar4=0;
break;
case 90:
StringCopy(&Var2, "LEGS_P0_23_1", 16);
iVar3=23;
iVar4=1;
iVar1=150;
break;
case 91:
StringCopy(&Var2, "LEGS_P0_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=130;
break;
case 92:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=24;
iVar4=0;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "LEGS_P0_27_0", 16);
iVar3=27;
iVar4=0;
break;
case 96:
StringCopy(&Var2, "LEGS_P0_28_0", 16);
iVar3=28;
iVar4=0;
iVar1=45;
break;
case 97:
StringCopy(&Var2, "LEGS_P0_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=48;
break;
case 98:
StringCopy(&Var2, "LEGS_P0_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=48;
break;
case 99:
StringCopy(&Var2, "LEGS_P0_28_3", 16);
iVar3=28;
iVar4=3;
iVar1=52;
break;
case 100:
StringCopy(&Var2, "LEGS_P0_28_4", 16);
iVar3=28;
iVar4=4;
iVar1=52;
break;
case 101:
StringCopy(&Var2, "LEGS_P0_28_5", 16);
iVar3=28;
iVar4=5;
iVar1=55;
break;
case 102:
StringCopy(&Var2, "LEGS_P0_28_6", 16);
iVar3=28;
iVar4=6;
iVar1=55;
break;
case 103:
StringCopy(&Var2, "LEGS_P0_28_7", 16);
iVar3=28;
iVar4=7;
iVar1=55;
break;
case 104:
StringCopy(&Var2, "LEGS_P0_28_8", 16);
iVar3=28;
iVar4=8;
iVar1=58;
break;
case 105:
StringCopy(&Var2, "LEGS_P0_28_9", 16);
iVar3=28;
iVar4=9;
iVar1=58;
break;
case 106:
StringCopy(&Var2, "LEGS_P0_28_10", 16);
iVar3=28;
iVar4=10;
iVar1=60;
break;
case 107:
StringCopy(&Var2, "LEGS_P0_28_11", 16);
iVar3=28;
iVar4=11;
iVar1=60;
break;
case 108:
StringCopy(&Var2, "LEGS_P0_28_12", 16);
iVar3=28;
iVar4=12;
iVar1=62;
break;
case 109:
StringCopy(&Var2, "LEGS_P0_28_13", 16);
iVar3=28;
iVar4=13;
iVar1=62;
break;
case 110:
StringCopy(&Var2, "LEGS_P0_28_14", 16);
iVar3=28;
iVar4=14;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P0_28_15", 16);
iVar3=28;
iVar4=15;
iVar1=65;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=29;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 113, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_288(int iParam0){
if(iParam0 < 60){
func_290(iParam0);
}else{
func_289(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_238(3, iParam0, 181, -1);
}}


void func_289(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=1;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=2;
bVar0=true;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=3;
bVar0=true;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=4;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=5;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "TORSO_P0_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "TORSO_P0_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=120;
break;
case 72:
StringCopy(&Var2, "TORSO_P0_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=120;
break;
case 73:
StringCopy(&Var2, "TORSO_P0_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "TORSO_P0_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=120;
break;
case 75:
StringCopy(&Var2, "TORSO_P0_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=120;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "TORSO_P0_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 78:
StringCopy(&Var2, "TORSO_P0_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=20;
break;
case 79:
StringCopy(&Var2, "TORSO_P0_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=24;
break;
case 80:
StringCopy(&Var2, "TORSO_P0_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=22;
break;
case 81:
StringCopy(&Var2, "TORSO_P0_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=25;
break;
case 82:
StringCopy(&Var2, "TORSO_P0_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=25;
break;
case 83:
StringCopy(&Var2, "TORSO_P0_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=22;
break;
case 84:
StringCopy(&Var2, "TORSO_P0_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=27;
break;
case 85:
StringCopy(&Var2, "TORSO_P0_17_0", 16);
iVar3=17;
iVar4=0;
break;
case 86:
StringCopy(&Var2, "TORSO_P0_17_1", 16);
iVar3=17;
iVar4=1;
break;
case 87:
StringCopy(&Var2, "TORSO_P0_17_2", 16);
iVar3=17;
iVar4=2;
break;
case 88:
StringCopy(&Var2, "TORSO_P0_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=48;
break;
case 89:
StringCopy(&Var2, "TORSO_P0_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=40;
break;
case 90:
StringCopy(&Var2, "TORSO_P0_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=45;
break;
case 91:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "TORSO_P0_19_0", 16);
iVar3=19;
iVar4=0;
break;
case 93:
StringCopy(&Var2, "TORSO_P0_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=190;
break;
case 94:
StringCopy(&Var2, "TORSO_P0_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=190;
break;
case 95:
StringCopy(&Var2, "TORSO_P0_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=190;
break;
case 96:
StringCopy(&Var2, "TORSO_P0_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=210;
break;
case 97:
StringCopy(&Var2, "TORSO_P0_20_0", 16);
iVar3=20;
iVar4=0;
break;
case 98:
StringCopy(&Var2, "TORSO_P0_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=115;
break;
case 99:
StringCopy(&Var2, "TORSO_P0_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=55;
break;
case 100:
StringCopy(&Var2, "TORSO_P0_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=110;
break;
case 101:
StringCopy(&Var2, "TORSO_P0_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=99;
break;
case 102:
StringCopy(&Var2, "TORSO_P0_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=49;
break;
case 103:
StringCopy(&Var2, "TORSO_P0_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=120;
break;
case 104:
StringCopy(&Var2, "TORSO_P0_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=45;
break;
case 105:
StringCopy(&Var2, "TORSO_P0_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=115;
break;
case 106:
StringCopy(&Var2, "TORSO_P0_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=105;
break;
case 107:
StringCopy(&Var2, "TORSO_P0_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=90;
break;
case 108:
StringCopy(&Var2, "TORSO_P0_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=95;
break;
case 109:
StringCopy(&Var2, "TORSO_P0_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=39;
break;
case 110:
StringCopy(&Var2, "TORSO_P0_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=95;
break;
case 111:
StringCopy(&Var2, "TORSO_P0_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=35;
break;
case 112:
StringCopy(&Var2, "TORSO_P0_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=95;
break;
case 113:
StringCopy(&Var2, "TORSO_P0_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=88;
break;
case 114:
StringCopy(&Var2, "TORSO_P0_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=60;
break;
case 115:
StringCopy(&Var2, "TORSO_P0_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=70;
break;
case 116:
StringCopy(&Var2, "TORSO_P0_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=80;
break;
case 117:
StringCopy(&Var2, "TORSO_P0_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=90;
break;
case 118:
StringCopy(&Var2, "TORSO_P0_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=80;
break;
case 119:
StringCopy(&Var2, "TORSO_P0_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=70;
break;
case 120:
StringCopy(&Var2, "TORSO_P0_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=95;
break;
case 121:
StringCopy(&Var2, "TORSO_P0_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=105;
break;
case 122:
StringCopy(&Var2, "TORSO_P0_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=95;
break;
case 123:
StringCopy(&Var2, "TORSO_P0_21_10", 16);
iVar3=21;
iVar4=10;
iVar1=110;
break;
case 124:
StringCopy(&Var2, "TORSO_P0_21_11", 16);
iVar3=21;
iVar4=11;
iVar1=98;
break;
case 125:
StringCopy(&Var2, "TORSO_P0_21_12", 16);
iVar3=21;
iVar4=12;
iVar1=88;
break;
case 126:
StringCopy(&Var2, "TORSO_P0_21_13", 16);
iVar3=21;
iVar4=13;
iVar1=98;
break;
case 127:
StringCopy(&Var2, "TORSO_P0_21_14", 16);
iVar3=21;
iVar4=14;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "TORSO_P0_21_15", 16);
iVar3=21;
iVar4=15;
iVar1=98;
break;
case 129:
StringCopy(&Var2, "TORSO_P0_22_0", 16);
iVar3=22;
iVar4=0;
break;
case 130:
StringCopy(&Var2, "TORSO_P0_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=4950;
break;
case 131:
StringCopy(&Var2, "TORSO_P0_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=4195;
break;
case 132:
StringCopy(&Var2, "TORSO_P0_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=3195;
break;
case 133:
StringCopy(&Var2, "TORSO_P0_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=2950;
break;
case 134:
StringCopy(&Var2, "TORSO_P0_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=3950;
break;
case 135:
StringCopy(&Var2, "TORSO_P0_23_0", 16);
iVar3=23;
iVar4=0;
iVar1=3200;
break;
case 136:
StringCopy(&Var2, "TORSO_P0_23_1", 16);
iVar3=23;
iVar4=1;
iVar1=3200;
break;
case 137:
StringCopy(&Var2, "TORSO_P0_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=3200;
break;
case 138:
StringCopy(&Var2, "TORSO_P0_23_3", 16);
iVar3=23;
iVar4=3;
iVar1=3200;
break;
case 139:
StringCopy(&Var2, "TORSO_P0_23_4", 16);
iVar3=23;
iVar4=4;
iVar1=3200;
break;
case 140:
StringCopy(&Var2, "TORSO_P0_23_5", 16);
iVar3=23;
iVar4=5;
iVar1=3200;
break;
case 141:
StringCopy(&Var2, "TORSO_P0_23_6", 16);
iVar3=23;
iVar4=6;
iVar1=3200;
break;
case 142:
StringCopy(&Var2, "TORSO_P0_23_7", 16);
iVar3=23;
iVar4=7;
iVar1=3200;
break;
case 143:
StringCopy(&Var2, "TORSO_P0_23_8", 16);
iVar3=23;
iVar4=8;
iVar1=3200;
break;
case 144:
StringCopy(&Var2, "TORSO_P0_23_9", 16);
iVar3=23;
iVar4=9;
iVar1=3200;
break;
case 145:
StringCopy(&Var2, "TORSO_P0_23_10", 16);
iVar3=23;
iVar4=10;
iVar1=3200;
break;
case 146:
StringCopy(&Var2, "TORSO_P0_23_11", 16);
iVar3=23;
iVar4=11;
iVar1=3200;
break;
case 147:
StringCopy(&Var2, "TORSO_P0_23_12", 16);
iVar3=23;
iVar4=12;
iVar1=3200;
break;
case 148:
StringCopy(&Var2, "TORSO_P0_23_13", 16);
iVar3=23;
iVar4=13;
iVar1=3200;
break;
case 149:
StringCopy(&Var2, "TORSO_P0_23_14", 16);
iVar3=23;
iVar4=14;
iVar1=3200;
break;
case 150:
StringCopy(&Var2, "TORSO_P0_23_15", 16);
iVar3=23;
iVar4=15;
iVar1=3200;
break;
case 151:
StringCopy(&Var2, "TORSO_P0_24_0", 16);
iVar3=24;
iVar4=0;
iVar1=1350;
break;
case 152:
StringCopy(&Var2, "TORSO_P0_24_1", 16);
iVar3=24;
iVar4=1;
iVar1=1400;
break;
case 153:
StringCopy(&Var2, "TORSO_P0_24_2", 16);
iVar3=24;
iVar4=2;
iVar1=1200;
break;
case 154:
StringCopy(&Var2, "TORSO_P0_24_3", 16);
iVar3=24;
iVar4=3;
iVar1=1250;
break;
case 155:
StringCopy(&Var2, "TORSO_P0_24_4", 16);
iVar3=24;
iVar4=4;
iVar1=1350;
break;
case 156:
StringCopy(&Var2, "TORSO_P0_24_5", 16);
iVar3=24;
iVar4=5;
iVar1=1300;
break;
case 157:
StringCopy(&Var2, "TORSO_P0_24_6", 16);
iVar3=24;
iVar4=6;
iVar1=1380;
break;
case 158:
StringCopy(&Var2, "TORSO_P0_24_7", 16);
iVar3=24;
iVar4=7;
iVar1=1340;
break;
case 159:
StringCopy(&Var2, "TORSO_P0_24_8", 16);
iVar3=24;
iVar4=8;
iVar1=1380;
break;
case 160:
StringCopy(&Var2, "TORSO_P0_24_9", 16);
iVar3=24;
iVar4=9;
iVar1=1250;
break;
case 161:
StringCopy(&Var2, "TORSO_P0_25_0", 16);
iVar3=25;
iVar4=0;
iVar1=840;
break;
case 162:
StringCopy(&Var2, "TORSO_P0_25_1", 16);
iVar3=25;
iVar4=1;
iVar1=840;
break;
case 163:
StringCopy(&Var2, "TORSO_P0_25_2", 16);
iVar3=25;
iVar4=2;
iVar1=840;
break;
case 164:
StringCopy(&Var2, "TORSO_P0_25_3", 16);
iVar3=25;
iVar4=3;
iVar1=840;
break;
case 165:
StringCopy(&Var2, "TORSO_P0_25_4", 16);
iVar3=25;
iVar4=4;
iVar1=840;
break;
case 166:
StringCopy(&Var2, "TORSO_P0_25_5", 16);
iVar3=25;
iVar4=5;
iVar1=840;
break;
case 167:
StringCopy(&Var2, "TORSO_P0_25_6", 16);
iVar3=25;
iVar4=6;
iVar1=840;
break;
case 168:
StringCopy(&Var2, "TORSO_P0_25_7", 16);
iVar3=25;
iVar4=7;
iVar1=840;
break;
case 169:
StringCopy(&Var2, "TORSO_P0_26_0", 16);
iVar3=26;
iVar4=0;
break;
case 170:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=27;
iVar4=0;
bVar0=true;
break;
case 171:
StringCopy(&Var2, "TORSO_P0_28_0", 16);
iVar3=28;
iVar4=0;
break;
case 172:
StringCopy(&Var2, "TORSO_P0_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=130;
break;
case 173:
StringCopy(&Var2, "TORSO_P0_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=110;
break;
case 174:
StringCopy(&Var2, "TORSO_P0_29_0", 16);
iVar3=29;
iVar4=0;
bVar0=true;
break;
case 175:
StringCopy(&Var2, "TORSO_P0_30_0", 16);
iVar3=30;
iVar4=0;
iVar1=290;
break;
case 176:
StringCopy(&Var2, "TORSO_P0_30_1", 16);
iVar3=30;
iVar4=1;
iVar1=320;
break;
case 177:
StringCopy(&Var2, "TORSO_P0_31_0", 16);
iVar3=31;
iVar4=0;
iVar1=59;
break;
case 178:
StringCopy(&Var2, "TORSO_P0_31_1", 16);
iVar3=31;
iVar4=1;
iVar1=55;
break;
case 179:
StringCopy(&Var2, "TORSO_P0_31_2", 16);
iVar3=31;
iVar4=2;
iVar1=59;
break;
case 180:
StringCopy(&Var2, "TORSO_P0_31_3", 16);
iVar3=31;
iVar4=3;
iVar1=49;
break;
default:
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_290(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P0_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=3500;
break;
case 3:
StringCopy(&Var2, "TORSO_P0_0_3", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "TORSO_P0_0_4", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "TORSO_P0_0_5", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "TORSO_P0_0_6", 16);
iVar3=0;
iVar4=6;
break;
case 7:
StringCopy(&Var2, "TORSO_P0_0_7", 16);
iVar3=0;
iVar4=7;
break;
case 8:
StringCopy(&Var2, "TORSO_P0_0_8", 16);
iVar3=0;
iVar4=8;
break;
case 9:
StringCopy(&Var2, "TORSO_P0_0_9", 16);
iVar3=0;
iVar4=9;
break;
case 10:
StringCopy(&Var2, "TORSO_P0_0_10", 16);
iVar3=0;
iVar4=10;
break;
case 11:
StringCopy(&Var2, "TORSO_P0_0_11", 16);
iVar3=0;
iVar4=11;
break;
case 12:
StringCopy(&Var2, "TORSO_P0_0_12", 16);
iVar3=0;
iVar4=12;
break;
case 13:
StringCopy(&Var2, "TORSO_P0_0_13", 16);
iVar3=0;
iVar4=13;
break;
case 14:
StringCopy(&Var2, "TORSO_P0_0_14", 16);
iVar3=0;
iVar4=14;
break;
case 15:
StringCopy(&Var2, "TORSO_P0_0_15", 16);
iVar3=0;
iVar4=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
iVar1=20;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=1;
iVar1=18;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=2;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=3;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P0_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=19;
break;
case 22:
StringCopy(&Var2, "TORSO_P0_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=20;
break;
case 23:
StringCopy(&Var2, "TORSO_P0_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=22;
break;
case 24:
StringCopy(&Var2, "TORSO_P0_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=18;
break;
case 25:
StringCopy(&Var2, "TORSO_P0_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=39;
break;
case 26:
StringCopy(&Var2, "TORSO_P0_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=32;
break;
case 27:
StringCopy(&Var2, "TORSO_P0_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=35;
break;
case 28:
StringCopy(&Var2, "TORSO_P0_2_11", 16);
iVar3=2;
iVar4=11;
iVar1=35;
break;
case 29:
StringCopy(&Var2, "TORSO_P0_2_12", 16);
iVar3=2;
iVar4=12;
iVar1=210;
break;
case 30:
StringCopy(&Var2, "TORSO_P0_2_13", 16);
iVar3=2;
iVar4=13;
iVar1=250;
break;
case 31:
StringCopy(&Var2, "TORSO_P0_2_14", 16);
iVar3=2;
iVar4=14;
iVar1=290;
break;
case 32:
StringCopy(&Var2, "TORSO_P0_2_15", 16);
iVar3=2;
iVar4=15;
iVar1=310;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "TORSO_P0_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=150;
break;
case 39:
StringCopy(&Var2, "TORSO_P0_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=160;
break;
case 40:
StringCopy(&Var2, "TORSO_P0_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=150;
break;
case 41:
StringCopy(&Var2, "TORSO_P0_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=150;
break;
case 42:
StringCopy(&Var2, "TORSO_P0_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=160;
break;
case 43:
StringCopy(&Var2, "TORSO_P0_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=160;
break;
case 44:
StringCopy(&Var2, "TORSO_P0_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "TORSO_P0_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "TORSO_P0_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=52;
break;
case 47:
StringCopy(&Var2, "TORSO_P0_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=55;
break;
case 48:
StringCopy(&Var2, "TORSO_P0_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=55;
break;
case 49:
StringCopy(&Var2, "TORSO_P0_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "TORSO_P0_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=58;
break;
case 51:
StringCopy(&Var2, "TORSO_P0_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=62;
break;
case 52:
StringCopy(&Var2, "TORSO_P0_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=65;
break;
case 53:
StringCopy(&Var2, "TORSO_P0_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=65;
break;
case 54:
StringCopy(&Var2, "TORSO_P0_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=68;
break;
case 55:
StringCopy(&Var2, "TORSO_P0_8_11", 16);
iVar3=8;
iVar4=11;
iVar1=68;
break;
case 56:
StringCopy(&Var2, "TORSO_P0_8_12", 16);
iVar3=8;
iVar4=12;
iVar1=55;
break;
case 57:
StringCopy(&Var2, "TORSO_P0_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=62;
break;
case 58:
StringCopy(&Var2, "TORSO_P0_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=58;
break;
case 59:
StringCopy(&Var2, "TORSO_P0_8_15", 16);
iVar3=8;
iVar4=15;
iVar1=58;
break;
default:
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_291(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P0_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "HAIR_P0_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P0_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P0_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
default:
func_238(iVar7, iParam0, 6, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_292(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=0;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=6;
break;
default:
func_238(iVar7, iParam0, 7, -1);
return;
break;
}
func_227(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_293(){
Global_78341[0 /*14*/].f_1=-1;
Global_78341[0 /*14*/].f_2=-1;
Global_78341[0 /*14*/].f_5=-1;
Global_78341[0 /*14*/].f_3=-1;
Global_78341[0 /*14*/].f_4=-1;
Global_78341[0 /*14*/].f_7=0;
Global_78341[0 /*14*/].f_6=0;
Global_78341[0 /*14*/].f_13=-1;
Global_78341[0 /*14*/].f_12=0;
Global_78341[0 /*14*/]=0;
StringCopy(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
}


void func_294(int iParam0, int iParam1, int iParam2, bool bParam3){
if(iParam2==-99){
return;
}
switch (iParam0){
case joaat("player_zero"):
if(!bParam3 || MISC::IS_BIT_SET(Global_113648.f_7231[1], 0)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_3816[0 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
}
break;
case joaat("player_two"):
if(!bParam3 || MISC::IS_BIT_SET(Global_113648.f_7231[3], 0)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_3816[1 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
}
if(!bParam3 || MISC::IS_BIT_SET(Global_113648.f_7231[4], 0)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_3816[2 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
}
break;
}}

int func_295(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
var uVar4;
int iVar5;
Global_78341[1 /*14*/]={
func_224(iParam0, iParam1, iParam2, -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(bParam3){
func_223(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 1, Global_78341[1 /*14*/].f_1, 1, 0);
if(iParam1==12){
iVar0=1;
if(iParam0==joaat("player_zero")){
if(iParam2==31){
iVar0=0;
}}
if(iVar0==1){
uVar3={
func_303(iParam0, iParam2) 
};
iVar1=0;
while (iVar1 <=14){
if((uVar3[iVar1] !=-99 && iVar1 !=12) && iVar1 !=14){
if(iVar1 !=13){
func_295(iParam0, iVar1, uVar3[iVar1], 1, 1);
func_307(iParam0, iVar1, uVar3[iVar1], 1);
}else{
uVar4={
func_296(iParam0, uVar3[iVar1]) 
};
iVar2=0;
while (iVar2 <=8){
func_295(iParam0, 14, uVar4[iVar2], 1, 1);
func_307(iParam0, 14, uVar4[iVar2], 1);
iVar2++;
}}
}
iVar1++;
}}}}else{
func_223(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 1, Global_78341[1 /*14*/].f_1, 0, 1);
}
if(iParam4==1 && bParam3==1){
switch (iParam0){
case joaat("player_zero"):
break;
case joaat("player_one"):
switch (iParam1){
case 3:
if(iParam2 >=176 && iParam2 <=191){
iVar5=(227 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 3, iVar5, 1, 0);
}elseif(iParam2 >=227 && iParam2 <=242){
iVar5=(176 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 3, iVar5, 1, 0);
}
break;
case 11:
if(iParam2 >=9 && iParam2 <=24){
iVar5=(25 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 11, iVar5, 1, 0);
}elseif(iParam2 >=25 && iParam2 <=40){
iVar5=(9 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 11, iVar5, 1, 0);
}
break;
case 8:
if(iParam2 >=27 && iParam2 <=42){
iVar5=(43 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 8, iVar5, 1, 0);
iVar5=(59 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 8, iVar5, 1, 0);
}elseif(iParam2 >=43 && iParam2 <=58){
iVar5=(27 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 8, iVar5, 1, 0);
iVar5=(59 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 8, iVar5, 1, 0);
}elseif(iParam2 >=59 && iParam2 <=74){
iVar5=(27 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 8, iVar5, 1, 0);
iVar5=(43 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 8, iVar5, 1, 0);
}
break;
case 14:
if(iParam2 >=64 && iParam2 <=79){
iVar5=(41 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 14, iVar5, 1, 0);
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 4:
if(iParam2 >=81 && iParam2 <=90){
iVar5=(94 + Global_78341[1 /*14*/].f_4);
func_295(iParam0, 4, iVar5, 1, 0);
}
break;
case 12:
if(iParam2==2){
func_295(iParam0, 14, 17, 1, 0);
}
break;
}
break;
}}
return 1;
}
return 0;
}


struct<10> func_296(int iParam0, int iParam1){
int iVar0;
struct<10> Var1;
Var1=9;
iVar0=0;
while (iVar0 <=8){
Var1[iVar0]=-99;
iVar0++;
}
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 31:
func_302(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_302(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_302(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_302(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_302(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_302(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_302(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_302(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_302(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_302(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_302(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_297(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_302(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_302(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_302(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_302(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_302(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_302(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_302(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_302(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_302(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_302(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_297(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_302(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_302(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_302(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_302(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_302(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_302(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_302(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_302(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_302(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_302(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_297(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_302(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_302(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_302(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_302(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_302(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_302(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_302(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_302(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_302(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_302(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_302(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_302(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_302(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_302(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_302(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_302(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_302(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_302(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_302(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_302(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_302(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_302(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_302(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_302(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_302(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_302(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_297(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_302(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_302(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_302(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_302(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_302(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_302(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_302(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_302(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_302(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_302(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_302(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_302(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_302(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_302(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_302(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_302(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_302(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_302(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_302(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_302(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_302(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_302(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_302(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_302(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_302(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_297(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_297(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<4> Var1;
struct<3> Var2;
int iVar3;
if(iParam2 !=0 && iParam2 !=-99){
(*iParam0)[0]=0;
(*iParam0)[1]=1;
(*iParam0)[2]=2;
(*iParam0)[3]=3;
(*iParam0)[4]=4;
(*iParam0)[5]=5;
(*iParam0)[6]=6;
(*iParam0)[7]=7;
(*iParam0)[8]=8;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
}elseif(iParam1==joaat("player_one")){
iVar0=1;
}elseif(iParam1==joaat("player_two")){
iVar0=2;
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar3=0;
while (iVar3 < Var1.f_3){
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 !=-1){
if((Var2.f_0 !=0 && Var2.f_0 !=-1) && Var2.f_0 !=joaat("0")){
(*iParam0)[Var2.f_2]=func_298(iParam1, Var2.f_0, 14, iVar0);
}elseif(Var2.f_1 !=-1){
(*iParam0)[Var2.f_2]=Var2.f_1;
}}
iVar3++;
}}}}

int func_298(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam2==12){
iVar2=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, 0);
iVar1=0;
while (iVar1 < iVar2){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar1, &Var0);
if(Var0.f_1==iParam1){
return (func_301(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_300(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_239(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_299(iParam0, func_239(iParam2)) + iVar4);
}}
return -99;
}

int func_299(int iParam0, int iParam1){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 5;
break;
case 2:
return 6;
break;
case 3:
return 181;
break;
case 4:
return 113;
break;
case 5:
return 14;
break;
case 6:
return 99;
break;
case 7:
return 1;
break;
case 8:
return 24;
break;
case 9:
return 20;
break;
case 10:
return 48;
break;
case 11:
return 45;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 5;
break;
case 2:
return 21;
break;
case 3:
return 318;
break;
case 4:
return 117;
break;
case 5:
return 7;
break;
case 6:
return 134;
break;
case 7:
return 1;
break;
case 8:
return 77;
break;
case 9:
return 12;
break;
case 10:
return 53;
break;
case 11:
return 63;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 6;
break;
case 2:
return 9;
break;
case 3:
return 242;
break;
case 4:
return 104;
break;
case 5:
return 7;
break;
case 6:
return 84;
break;
case 7:
return 1;
break;
case 8:
return 18;
break;
case 9:
return 17;
break;
case 10:
return 33;
break;
case 11:
return 1;
break;
}
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 91;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 92;
break;
case 8:
return 241;
break;
case 9:
return 46;
break;
case 10:
return 7;
break;
case 11:
return 237;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 92;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 55;
break;
case 8:
return 136;
break;
case 9:
return 36;
break;
case 10:
return 6;
break;
case 11:
return 256;
break;
}
break;
}
return -99;
}

int func_300(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 113;
break;
case joaat("player_one"):
return 175;
break;
case joaat("player_two"):
return 155;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 327;
break;
case joaat("mp_f_freemode_01"):
return 327;
break;
}
return -99;
}

int func_301(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 53;
break;
case joaat("player_one"):
return 47;
break;
case joaat("player_two"):
return 48;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 26;
break;
case joaat("mp_f_freemode_01"):
return 28;
break;
}
return -99;
}


void func_302(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
(*iParam0)[0]=iParam1;
(*iParam0)[1]=iParam2;
(*iParam0)[2]=iParam3;
(*iParam0)[3]=iParam4;
(*iParam0)[4]=iParam5;
(*iParam0)[5]=iParam6;
(*iParam0)[6]=iParam7;
(*iParam0)[7]=iParam8;
(*iParam0)[8]=iParam9;
}
struct<17> func_303(int iParam0, int iParam1){
int iVar0;
struct<17> Var1;
Var1=15;
iVar0=0;
while (iVar0 <=14){
Var1[iVar0]=-99;
iVar0++;
}
Var1.f_16=0;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
if(Global_113648.f_9087.f_99.f_58[120]){
func_306(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_306(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_306(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_306(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_306(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_306(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_306(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_306(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_306(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_306(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_306(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_306(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_306(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_306(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_306(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_306(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_306(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_306(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_306(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_306(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_306(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_306(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_306(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_306(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_306(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_306(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_306(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_306(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_306(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_306(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_306(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_306(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_306(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_306(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_306(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_306(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_306(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_306(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_306(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_306(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_306(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_306(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_306(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_306(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_306(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_306(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_306(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_306(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_306(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_306(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_306(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_306(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_306(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_306(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_304(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_306(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_306(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_306(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_306(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_306(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_306(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_306(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_306(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_306(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_306(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_306(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_306(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_306(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_306(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_306(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_306(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_306(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_306(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_306(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_306(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_306(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_306(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_306(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_306(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_306(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_306(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_306(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_306(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_306(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_306(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_306(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_306(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_306(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_306(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_306(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_306(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_306(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_306(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_306(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_306(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_306(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_306(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_306(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_306(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_306(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_306(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_306(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_304(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_306(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_306(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_306(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_306(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_306(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_306(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_306(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_306(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_306(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_306(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_306(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_306(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_306(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_306(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_306(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_306(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_306(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_306(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_306(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_306(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_306(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_306(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_306(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_306(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_306(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_306(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_306(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_306(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_306(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_306(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_306(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_306(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_306(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_306(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_306(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_306(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_306(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_306(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_306(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_306(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_306(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_306(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_306(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_306(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_306(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_306(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_306(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_306(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_304(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_306(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_306(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_306(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_306(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_306(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_306(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_306(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_306(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_306(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_306(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_306(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_306(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_306(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_306(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_306(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_306(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_306(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_306(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_306(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_306(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_306(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_306(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_306(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_306(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_306(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_306(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_304(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_306(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_306(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_306(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_306(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_306(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_306(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_306(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_306(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_306(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_306(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_306(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_306(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_306(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_306(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_306(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_306(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_306(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_306(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_306(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_306(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_306(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_306(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_306(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_306(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_306(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_306(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_306(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_306(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_304(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_304(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<5> Var1;
struct<3> Var2;
struct<2> Var3;
int iVar4;
(*uParam0)[0]=0;
(*uParam0)[2]=-99;
(*uParam0)[3]=0;
(*uParam0)[4]=0;
(*uParam0)[6]=0;
(*uParam0)[5]=0;
(*uParam0)[8]=0;
(*uParam0)[9]=0;
(*uParam0)[10]=0;
(*uParam0)[1]=0;
(*uParam0)[7]=0;
(*uParam0)[11]=0;
(*uParam0)[13]=-99;
(*uParam0)[14]=-99;
uParam0->f_16=0;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
(*uParam0)[13]=(10 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_one")){
iVar0=1;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_two")){
iVar0=2;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, 0);
FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar4=0;
while (iVar4 < Var1.f_4){
if(FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar4, &Var2)){
if((Var2.f_0 !=0 && Var2.f_0 !=-1) && Var2.f_0 !=joaat("0")){
if(Var2.f_2==10){
FILES::INIT_SHOP_PED_COMPONENT(&Var3);
FILES::GET_SHOP_PED_COMPONENT(Var2.f_0, &Var3);
if(Var2.f_0 !=Var3.f_1){
uParam0->f_16=1;
}}
if(Var2.f_2==10 && uParam0->f_16){
(*uParam0)[func_305(Var2.f_2)]=Var2.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_305(Var2.f_2)]=func_298(iParam1, Var2.f_0, func_305(Var2.f_2), iVar0);
}}elseif(Var2.f_1 !=-1){
(*uParam0)[func_305(Var2.f_2)]=Var2.f_1;
}}
iVar4++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_305(int iParam0){
switch (iParam0){
case 0:
return 0;
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
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}


void func_306(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
(*uParam0)[0]=iParam1;
(*uParam0)[2]=iParam2;
(*uParam0)[3]=iParam3;
(*uParam0)[4]=iParam4;
(*uParam0)[6]=iParam5;
(*uParam0)[5]=iParam6;
(*uParam0)[8]=iParam7;
(*uParam0)[9]=iParam8;
(*uParam0)[10]=iParam9;
(*uParam0)[1]=iParam10;
(*uParam0)[7]=iParam11;
(*uParam0)[11]=iParam12;
(*uParam0)[13]=iParam13;
(*uParam0)[14]=-99;
}

int func_307(int iParam0, int iParam1, int iParam2, bool bParam3){
Global_78341[1 /*14*/]={
func_224(iParam0, iParam1, iParam2, -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(bParam3){
func_223(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 0, Global_78341[1 /*14*/].f_1, 1, 0);
}else{
func_223(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 0, Global_78341[1 /*14*/].f_1, 0, 1);
}
return 1;
}
return 0;
}

int func_308(int iParam0){
if(func_66(iParam0)){
return func_309(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__309(int iParam0){
return Global_2028[iParam0 /*29*/];
}

int func_310(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1==12){
iVar0=0;
while (iVar0 <=53){
if(func_317(iParam0, iParam1, iVar0)){
return iVar0;
}
iVar0++;
}}elseif(iParam1==13){
iVar1=0;
while (iVar1 <=19){
if(func_317(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar1++;
}
return 31;
}elseif(iParam1==14){
if(iParam2==-1){
}else{
return func_313(iParam0, iParam2);
}}else{
return func_311(iParam0, iParam1);
}}
return -99;
}

int func_311(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_239(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_312(iParam0, iVar1, iVar2, iParam1);
}

int func_312(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_239(iParam3);
iVar1=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
iVar3=0;
while (iVar3 <=(iVar1 - 1)){
if(iVar3 !=iParam1){
iVar2=(iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
}else{
iVar2=(iVar2 + iParam2);
return iVar2;
}
iVar3++;
}
return -99;
}

int func_313(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
if(iVar0==-1){
return func_316(iParam1);
}
iVar1=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
return func_314(iParam0, iVar0, iVar1, iParam1);
}

int func_314(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_316(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_298(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_298(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
}}
iVar2=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
iVar4=0;
while (iVar4 <=(iVar2 - 1)){
iVar6=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
if(iVar4 !=iParam1){
iVar3=(iVar3 + iVar6);
}else{
iVar5=0;
while (iVar5 <=(iVar6 - 1)){
if(iVar4==iParam1 && iVar5==iParam2){
iVar3=(iVar3 + func_315(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_316(iParam3);
}

int func_315(int iParam0, int iParam1){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(uParam0);
switch (iVar0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 58;
break;
case 2:
return 112;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 82;
break;
case 2:
return 158;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 88;
break;
case 2:
return 154;
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
}
return -99;
}

int func_316(int iParam0){
switch (iParam0){
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
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
}
return 0;
}

int func_317(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
int iVar7;
var uVar8;
if(PED::IS_PED_INJURED(uParam0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78341[1 /*14*/]={
func_224(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar5={
func_303(iVar0, iParam2) 
};
iVar2=0;
while (iVar2 <=14){
if((uVar5[iVar2] !=-99 && iVar2 !=12) && iVar2 !=14){
if(!func_317(iParam0, iVar2, uVar5[iVar2])){
if(iVar2==13){
uVar6={
func_296(iVar0, uVar5[iVar2]) 
};
iVar3=0;
while (iVar3 <=8){
if(!func_317(iParam0, 14, uVar6[iVar3])){
iVar4=0;
while (iVar4 <=19){
Global_78341[2 /*14*/]={
func_224(iVar0, 14, iVar4, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar3){
if(func_317(iParam0, 14, iVar4)){
if(!func_318(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}
}
}
iVar4++;
}}
iVar3++;
}}else{
iVar1=func_311(iParam0, iVar2);
Global_78341[2 /*14*/]={
func_224(iVar0, iVar2, iVar1, -1) 
};
if(!func_318(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}}}}
iVar2++;
}
return 1;
}elseif(iParam1==13){
uVar8={
func_296(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 <=8){
if(!func_317(iParam0, 14, uVar8[iVar7])){
return 0;
}
iVar7++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}}elseif(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_239(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_239(iParam1))){
return 1;
}
return 0;
}

int func_318(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
var uVar0;
int iVar1;
if((*uParam4)[iParam2]==iParam3){
return 1;
}
if(((*uParam4)[iParam2]==-99 && iParam2 !=14) && iParam2 !=13){
return 1;
}
if(iParam2==13 || (iParam2==14 && (*uParam4)[13]==31)){
if((((((((iParam3==0 || iParam3==1) || iParam3==2) || iParam3==3) || iParam3==4) || iParam3==5) || iParam3==6) || iParam3==7) || iParam3==8){
return 1;
}}
if(iParam3==-99 || uParam5->f_1==-1){
return 1;
}
if(iParam2==14){
uVar0={
func_296(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_323(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_322(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_321(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=0){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_319(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_322(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_321(iParam0, iParam2, iParam3, -1)){
if((((iParam1==3 || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
if(iParam2==8){
if(iParam3==9){
if(iParam1==8 || iParam1==21){
return 1;
}}else{
return 0;
}}else{
return 0;
}}
if(iParam2==8){
if((*uParam4)[8] !=26){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=5 && iParam3 <=10){
return 0;
}}}elseif(iParam2==14){
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=26 && iParam3 <=39){
return 0;
}}}
return 1;
}elseif(func_319(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==3 || iParam1==3) || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
return 0;
}
return 1;
}elseif(iParam2==14){
if(iParam3 >=159 && iParam3 <=174){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==2){
if(iParam2==14 && iParam3==0){
return 1;
}}
if(func_322(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_321(iParam0, iParam2, iParam3, -1)){
if(((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==45) || iParam1==12){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=15){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_319(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_319(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 14:
if(iParam2==16){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 14:
if((iParam2==40 || (iParam2 >=41 && iParam2 <=56)) || (iParam2 >=64 && iParam2 <=79)){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 14:
if((iParam2 >=17 && iParam2 <=18) || (iParam2 >=71 && iParam2 <=86)){
return 1;
}
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam2, 1, 3), -1842686353, 0));
}
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_320(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_300(iParam0));
if(iVar1 < 0){
return -1;
}
iVar2=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
if(iVar2 <=iVar1){
return -1;
}
FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
return Var0.f_1;
}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var3);
iVar4=(iParam1 - func_299(iParam0, func_239(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_239(iParam2));
if(iVar5 <=iVar4){
return -1;
}
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar4, &Var3);
Global_78491.f_13[iParam2]=Var3.f_1;
Global_78491[iParam2]=iParam1;
Global_78491.f_26[iParam2]=iParam0;
return Var3.f_1;
}
return -1;
}

int func_321(int iParam0, int iParam1, int iParam2, int iParam3){
if(iParam0==joaat("player_zero")){
if(iParam1==6){
if(iParam2==10){
return 1;
}}elseif(iParam1==8){
if((iParam2==9 || iParam2==7) || iParam2==23){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=9 && iParam2 <=14){
return 1;
}}elseif(iParam1==14){
if((((((((((((((((iParam2==12 || iParam2==59) || iParam2==60) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || iParam2==37) || iParam2==38) || iParam2==39) || iParam2==40) || iParam2==41) || (iParam2 >=42 && iParam2 <=44)) || iParam2==54) || iParam2==55){
return 1;
}}}elseif(iParam0==joaat("player_one")){
if(iParam1==2){
if(iParam2==20){
return 1;
}}elseif(iParam1==8){
if((iParam2==3 || iParam2==5) || iParam2==9){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=5 && iParam2 <=10){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==82 || iParam2==10) || iParam2==26) || iParam2==27) || iParam2==28) || iParam2==29) || iParam2==30) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || (iParam2 >=37 && iParam2 <=39)){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==8){
if(iParam2==14 || iParam2==7){
return 1;
}}elseif(iParam1==9){
if(((iParam2==8 || (iParam2 >=9 && iParam2 <=14)) || iParam2==15) || iParam2==16){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==88 || iParam2==12) || iParam2==47) || iParam2==48) || iParam2==49) || iParam2==50) || iParam2==51) || iParam2==52) || iParam2==53) || iParam2==54) || iParam2==55) || iParam2==56) || iParam2==57) || (iParam2 >=58 && iParam2 <=60)){
return 1;
}}}elseif(iParam0==joaat("mp_m_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 1, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
if(iParam1==14){
if((((((((iParam2==58 || iParam2==61) || (iParam2 >=62 && iParam2 <=69)) || (iParam2 >=70 && iParam2 <=79)) || (iParam2 >=80 && iParam2 <=89)) || iParam2==90) || (iParam2 >=91 && iParam2 <=102)) || (iParam2 >=103 && iParam2 <=110)) || iParam2==111){
return 1;
}}
break;
case joaat("player_one"):
if(iParam1==14){
if(((((((((((iParam2 >=83 && iParam2 <=92) || iParam2==93) || iParam2==94) || (iParam2 >=95 && iParam2 <=101)) || (iParam2 >=102 && iParam2 <=111)) || (iParam2 >=112 && iParam2 <=121)) || (iParam2 >=122 && iParam2 <=131)) || (iParam2 >=132 && iParam2 <=139)) || (iParam2 >=140 && iParam2 <=149)) || (iParam2 >=150 && iParam2 <=156)) || iParam2==157){
return 1;
}}
break;
case joaat("player_two"):
if(iParam1==14){
if(((((((((iParam2==89 || (iParam2 >=90 && iParam2 <=99)) || (iParam2 >=100 && iParam2 <=109)) || iParam2==111) || iParam2==112) || (iParam2 >=113 && iParam2 <=122)) || (iParam2 >=123 && iParam2 <=132)) || (iParam2 >=133 && iParam2 <=142)) || (iParam2 >=143 && iParam2 <=152)) || iParam2==153){
return 1;
}}
break;
case joaat("mp_m_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 14, 3);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
case joaat("mp_f_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_323(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 8:
if(iParam2==15){
return 1;
}
break;
case 9:
if(iParam2==6){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 8:
if(iParam2==1 || iParam2==10){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 8:
if(iParam2==4){
return 1;
}
break;
}
break;
}
return 0;
}


bool func_324(int iParam0){
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


void func_325(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
struct<5> Var12;
if(!PED::IS_PED_INJURED(iParam0) || iParam5){
iVar0=func_522(iParam0);
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar3=0;
while (iVar3 < 12){
if(iVar3 !=1 || (iVar3==1 && !bParam2)){
if(bParam4){
if(uParam1->f_13[iVar3] !=0 && uParam1->f_13[iVar3] >=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3)){
uParam1->f_13[iVar3]=0;
}
if((*uParam1)[iVar3] !=0 && (*uParam1)[iVar3] >=PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3])){
(*uParam1)[iVar3]=0;
}}
PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
}
iVar3++;
}
iVar3=0;
while (iVar3 < 9){
if(bParam4){
if(uParam1->f_39[iVar3] !=-1 && uParam1->f_39[iVar3] !=255){
if(uParam1->f_39[iVar3] >=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3)){
uParam1->f_39[iVar3]=-1;
}elseif(uParam1->f_49[iVar3] >=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3])){
uParam1->f_49[iVar3]=0;
}}}
if(uParam1->f_39[iVar3] !=-1 && uParam1->f_39[iVar3] !=255){
PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false, 1);
}else{
PED::CLEAR_PED_PROP(iParam0, iVar3, 1);
}
iVar3++;
}
if(func_66(iVar0)){
Global_113648.f_2365.f_539[iVar0 /*65*/].f_59=uParam1->f_59;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_60=uParam1->f_60;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_61=uParam1->f_61;
if(func_519(iParam0, iVar1, &iVar2, 0)){
func_505(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_113648.f_2365.f_539[iVar0 /*65*/].f_62=uParam1->f_62;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=uParam1->f_63;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=uParam1->f_64;
if(func_503(iParam0, iVar1, &iVar2)){
func_505(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
bVar4=func_500(iParam0);
func_499(754, uParam1->f_60, Global_78338, 1, 0);
func_499(755, uParam1->f_61, Global_78338, 1, 0);
iVar5=func_312(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
if(iVar5 !=-99){
iVar6=-99;
if(iVar1==joaat("mp_m_freemode_01")){
iVar6=func_497(iVar5);
}elseif(iVar1==joaat("mp_f_freemode_01")){
iVar6=func_495(iVar5);
}
if(iVar6 !=-99 && iVar5 !=iVar6){
iVar5=iVar6;
}}
func_328(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
if(!bParam2){
iVar7=func_312(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
func_328(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
}
if(!bParam3){
iVar8=func_314(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
func_328(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
iVar9=uParam1->f_59;
if(iVar1==joaat("mp_m_freemode_01")){
iVar9=func_497(iVar9);
}else{
iVar9=func_495(iVar9);
}
func_499(753, iVar9, Global_78338, 1, 0);
func_499(2053, iVar9, Global_78338, 1, 0);
func_326(161, 1, -1, 1);
}
if(iVar1==joaat("mp_m_freemode_01") || iVar1==joaat("mp_f_freemode_01")){
iVar10=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
iVar11=FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
if(iVar10==joaat("dlc_mp_arena_m_berd_13_0") || iVar10==joaat("dlc_mp_arena_f_berd_13_0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("arena_draw_0"), 1)){
FILES::INIT_SHOP_PED_PROP(&Var12);
if(iVar10==joaat("dlc_mp_arena_m_berd_13_0")){
FILES::GET_SHOP_PED_QUERY_PROP(joaat("dlc_mp_arena_m_peyes_0_0"), &Var12);
}else{
FILES::GET_SHOP_PED_QUERY_PROP(joaat("dlc_mp_arena_f_peyes_0_0"), &Var12);
}
PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("arena_draw_0"), 1)){
PED::CLEAR_PED_PROP(iParam0, 1, 1);
}}}}


void func_326(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_327()){
iVar0=Global_2848282[iParam0 /*3*/][func_231(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_327(){
return 1;
return 0;
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
var uVar12;
var uVar13;
var uVar14;
var uVar15;
var uVar16;
int iVar17;
var uVar18;
int iVar19;
int iVar20;
int iVar21;
int iVar22;
int iVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
int iVar32;
int iVar33;
int iVar34;
int iVar35;
int iVar36;
int iVar37;
int iVar38;
int iVar39;
int iVar40;
int iVar41;
int iVar42;
int iVar43;
int iVar44;
int iVar45;
int iVar46;
int iVar47;
int iVar48;
int iVar49;
int iVar50;
int iVar51;
int iVar52;
int iVar53;
int iVar54;
var uVar55;
int iVar56;
int iVar57;
int iVar58;
int iVar59;
int iVar60;
int iVar61;
int iVar62;
int iVar63;
int iVar64;
int iVar65;
int iVar66;
var uVar67;
int iVar68;
int iVar69;
int iVar70;
int iVar71;
int iVar72;
int iVar73;
int iVar74;
int iVar75;
int iVar76;
int iVar77;
int iVar78;
var uVar79;
int iVar80;
int iVar81;
int iVar82;
int iVar83;
int iVar84;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((Global_1574992 !=4 && Global_1574992 !=5) && Global_1574992 !=7){
return 0;
}}
if(PED::IS_PED_INJURED(iParam0) || iParam2==-99){
return 0;
}
if(iParam0==PLAYER::PLAYER_PED_ID() && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_232==2){
if(!bParam12){
return 0;
}}
if(iParam10==-1){
iParam10=Global_78338;
}
Global_78339++;
iVar5=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar6=-99;
iVar7=-99;
iVar8=-99;
iVar9=-99;
iVar10=-1;
iVar11=-1;
if(iParam5==0){
Global_78341[1 /*14*/]={
func_462(iVar5, iParam1, iParam2, -1) 
};
if(!func_461(iParam3)){
Global_78339=(Global_78339 - 1);
return 0;
}
if(iParam1==11 && Global_78339 > 1){
}elseif(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 4)){
func_458(iVar5, iParam1, iParam2, 1);
}}
if(iParam1==12){
uVar12=Global_2883588;
uVar13=Global_2883589;
PED::CLEAR_ALL_PED_PROPS(iParam0, 1);
uVar14=15;
if(iParam5==1){
uVar14={
Global_78384 
};
}else{
uVar14={
func_303(iVar5, iParam2) 
};
}
iVar0=0;
while (iVar0 <=14){
if(uVar14[iVar0] !=-99){
if(iVar0==10 && uVar14.f_16){
Global_78341[1 /*14*/]={
func_462(iVar5, 10, 0, -1) 
};
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_239(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_239(iVar0)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_239(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_458(iVar5, 10, 0, 1);
}}else{
Global_78341[1 /*14*/]={
func_462(iVar5, iVar0, uVar14[iVar0], -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) || iVar0==13){
if(iVar0==13){
uVar15=9;
if(iParam5==1){
uVar15={
Global_78401 
};
}else{
uVar15={
func_296(iVar5, uVar14[iVar0]) 
};
}
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_462(iVar5, 14, uVar15[iVar1], -1) 
};
func_457(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_458(iVar5, iVar0, uVar14[iVar0], 1);
}
iVar1++;
}
}
elseif(iVar0 !=14 && iVar0 !=12){
if(iVar0 !=1){
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_239(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_239(iVar0)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_239(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}}else{
func_328(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_458(iVar5, iVar0, uVar14[iVar0], 1);
}
}}}}elseif(iVar0 !=12 && iVar0 !=14){
Global_78341[1 /*14*/]={
func_462(iVar5, iVar0, func_456(iParam0, iVar0, -1), -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3)){
uVar16={
func_303(iVar5, 0) 
};
func_328(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
iVar0++;
}
PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
Global_2883588=uVar12;
Global_2883589=uVar13;
if(iParam5==0){
iVar17=func_455();
if(iVar17 !=-1){
func_452(iVar17, 0, iParam10);
}
func_450(iParam0, 11, uVar14[11], iParam6, 0);
}}elseif(iParam1==13){
uVar18={
func_296(iVar5, iParam2) 
};
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_462(iVar5, 14, uVar18[iVar1], -1) 
};
func_457(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_458(iVar5, 14, uVar18[iVar1], 1);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_448(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_328(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}}
iVar1++;
}}elseif(iParam1==14){
func_457(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_458(iVar5, iParam1, iParam2, 1);
}
if(Global_78341[1 /*14*/].f_12==0){
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_hair"), 1)){
}elseif(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("hair_shrink"))){
func_328(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_462(iVar5, iParam1, iParam2, -1) 
};
}}
if(Global_78341[1 /*14*/].f_12==0){
func_441(iParam0);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_448(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_328(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}
iVar3=func_448(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_328(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}else{
if((iParam1==4 || iParam1==11) || iParam1==8){
iVar19=func_239(iParam1);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) !=Global_78341[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) !=Global_78341[1 /*14*/].f_4){
iVar20=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
iVar21=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
if(((iParam1==11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, 307252627, 0)) || (iParam1==8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1==4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, -2095729091, 0))){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
}
if((iParam1==11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, 307252627, 0)) || (iParam1==4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, -2095729091, 0))){
if(iVar5==joaat("mp_m_freemode_01")){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
}elseif(iVar5==joaat("mp_f_freemode_01")){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
}}}}
if(iParam1==11){
if(iParam5==0){
iVar22=-1;
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11)){
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 0);
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 1);
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 2);
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 3);
}
iVar23=func_311(iParam0, 11);
iVar24=func_311(iParam0, 8);
iVar25=func_311(iParam0, 4);
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("over_jacket"))){
if(iVar5==joaat("mp_m_freemode_01")){
iVar22=func_320(iVar5, iParam2, 11, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar22=func_320(iVar5, iParam2, 11, 4);
}
if((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("silk_robe"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("morph_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("gorka_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("cat_suit"), 0)){
}else{
iVar8=func_311(iParam0, 8);
}}
iVar26=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("gloves"), 0)){
iVar27=func_440(iVar5, iVar24, iVar23, iVar25);
if(iVar27==-99){
iVar27=func_448(iParam0, iVar5, 11, iVar23, 3, 0);
}
switch (iVar26){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar27=11;
iVar22=func_320(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("dress"), 0)){
iVar27=-99;
}
break;
}
if(iVar27 !=-99){
iVar28=0;
while (iVar28 < 18){
if(func_439(iVar5, iVar27, iVar28)==iVar26){
iVar10=iVar28;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar28++;
}}}
iVar22=-1;
if((iVar5==joaat("mp_f_freemode_01") && iParam2 >=256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iVar5, iParam2, 11, 4), joaat("vest"), 0)){
iVar23=func_311(iParam0, 11);
if(iVar23 >=256){
iVar22=func_320(iVar5, iVar23, 11, 4);
}
if(iVar23 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest_shirt"), 0)){
iVar29=func_437(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(iVar29 !=-99){
func_328(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_462(iVar5, iParam1, iParam2, -1) 
};
}}}elseif(func_436(iVar5, iParam2, -1)){
if(iVar5==joaat("mp_m_freemode_01")){
if(iVar23 >=237){
iVar22=func_320(iVar5, iVar23, 11, 3);
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(iVar23 >=256){
iVar22=func_320(iVar5, iVar23, 11, 4);
}}
iVar8=-99;
if(!func_436(iVar5, iVar23, -1)){
if((iVar5==joaat("mp_f_freemode_01") && iVar23 >=256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest_shirt"), 0))){
}
elseif((iVar5==joaat("mp_f_freemode_01") && iVar23 >=256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("apart_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("stunt_draw_9"), 0))){
}
else{
iVar30=func_435(iParam0, iParam2);
iVar31=func_437(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(iVar31 !=-99){
func_328(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_462(iVar5, iParam1, iParam2, -1) 
};
iVar8=-99;
}elseif(iVar30 !=-99 && (iParam0==PLAYER::PLAYER_PED_ID() || iParam0==Global_4539790)){
func_328(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_462(iVar5, iParam1, iParam2, -1) 
};
}else{
if(iVar5==joaat("mp_m_freemode_01")){
iVar32=func_434(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_462(iVar5, 11, iVar32, -1) 
};
iVar31=func_437(iVar5, iVar32, iParam2, Global_78341[1 /*14*/].f_4);
iVar33=func_320(iVar5, iParam2, 11, 3);
if((iVar31==-99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("biker_vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("open_short"), 0)){
iVar31=240;
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -1099375697, 0)){
iVar31=80;
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iVar5, iParam2, 11, 4), joaat("biker_vest"), 0)){
iVar31=120;
}
else{
iVar31=48;
}}
func_328(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_462(iVar5, iParam1, iParam2, -1) 
};
}
}}else{
Global_78341[1 /*14*/]={
func_462(iVar5, 11, iVar23, -1) 
};
iVar34=Global_78341[1 /*14*/].f_3;
Global_78341[1 /*14*/]={
func_462(iVar5, 11, iParam2, -1) 
};
iVar35=Global_78341[1 /*14*/].f_3;
if(iVar34 !=iVar35){
iVar37=func_435(iParam0, iParam2);
Global_78341[1 /*14*/]={
func_462(iVar5, 8, iVar24, -1) 
};
iVar36=Global_78341[1 /*14*/].f_4;
iVar38=func_433(iVar5, iVar24, iVar36);
if(iVar37 !=-99 && (iParam0==PLAYER::PLAYER_PED_ID() || iParam0==Global_4539790)){
iVar39=iVar37;
}elseif(iVar38==-99){
iVar39=iVar24;
if(iVar5==joaat("mp_m_freemode_01")){
iVar40=func_320(iVar5, iParam2, 11, 3);
if(((iParam2 >=96 && iParam2 <=107) || func_432(iVar40)==6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("biker_vest"), 0)){
iVar38=func_434(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_462(iVar5, 11, iVar38, -1) 
};
iVar39=func_437(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}
if(iVar5==joaat("mp_f_freemode_01") && ((iVar24==32 || iVar24==33) || iVar24==119)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iVar5, iParam2, 11, 4), joaat("jacket_only"), 0)){
iVar38=func_434(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_462(iVar5, 11, iVar38, -1) 
};
iVar39=func_437(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}
iVar41=-1;
if(iVar5==joaat("mp_m_freemode_01")){
iVar41=func_320(iVar5, iVar24, 8, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar41=func_320(iVar5, iVar24, 8, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("overcoat_accs"), 0)){
iVar38=func_434(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_462(iVar5, 11, iVar38, -1) 
};
iVar39=func_437(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}else{
iVar39=func_437(iVar5, iVar38, iParam2, iVar36);
if(iVar5==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iVar5, iParam2, 11, 3), joaat("low2_open_check"), 0)){
if(!func_431(iVar5, func_311(iParam0, 4), iVar38)){
iVar39=240;
}
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iVar5, iParam2, 11, 4), joaat("low2_open_check"), 0)){
if(!func_431(iVar5, func_311(iParam0, 4), iVar38)){
iVar39=48;
}
}}}
if(iVar39 !=-99){
func_328(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}elseif(iVar5==joaat("mp_m_freemode_01")){
iVar38=func_434(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_462(iVar5, 11, iVar38, -1) 
};
iVar39=func_437(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
if(iVar39==-99){
iVar39=240;
}
func_328(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}elseif(iVar5==joaat("mp_f_freemode_01")){
func_328(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_78341[1 /*14*/]={
func_462(iVar5, iParam1, iParam2, -1) 
};
}}}
func_428(iVar5, iParam2);
if(!bParam13){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
}}
func_450(iParam0, iParam1, iParam2, iParam6, 0);
if(iParam5==0){
iVar6=func_440(iVar5, func_456(iParam0, 8, -1), iParam2, func_456(iParam0, 4, -1));
}}elseif(iParam1==2){
if(iParam5==0){
if(iParam8==-1){
iParam8=func_230(2153, iParam10, 0);
}
if(iParam9==-1){
iParam9=func_230(2160, iParam10, 0);
}
PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
}
if(iParam7==0){
if(iParam2 !=-99){
iVar42=-99;
if(iVar5==joaat("mp_m_freemode_01")){
iVar42=func_497(iParam2);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar42=func_495(iParam2);
}
if(iVar42 !=-99 && iParam2 !=iVar42){
iParam2=iVar42;
}}
func_375(iParam0, iParam2, iParam10, bParam11);
}}elseif(iParam1==8){
iVar43=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("gloves"), 0)){
iVar44=func_311(iParam0, 11);
iVar45=func_311(iParam0, 4);
iVar46=func_440(iVar5, iParam2, iVar44, iVar45);
if(iVar46==-99){
iVar46=func_448(iParam0, iVar5, 11, iVar44, 3, 0);
}
switch (iVar43){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar46=11;
iVar47=func_320(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("dress"), 0)){
iVar46=-99;
}
break;
}
if(iVar46 !=-99){
iVar48=0;
while (iVar48 < 18){
if(func_439(iVar5, iVar46, iVar48)==iVar43){
iVar10=iVar48;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar48++;
}}}
func_450(iParam0, iParam1, iParam2, iParam6, 0);
iVar49=func_311(iParam0, 11);
if(func_436(iVar5, iVar49, -1)){
iVar50=func_433(iVar5, iParam2, Global_78341[1 /*14*/].f_4);
func_428(iVar5, iVar50);
}
if(iParam5==0){
iVar6=func_440(iVar5, iParam2, func_311(iParam0, 11), func_311(iParam0, 4));
}}elseif(iParam1==9){
if(iParam2 >=1 && iParam2 <=41){
iVar51=func_311(iParam0, 7);
if(!func_372(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99)){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_239(7), 0, 0, 0);
}}}elseif(iParam1==1){
if(((iVar5==joaat("mp_m_freemode_01") && iParam2 >=26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_head"), 0)) || ((iVar5==joaat("mp_f_freemode_01") && iParam2 >=26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_head"), 0))){
iVar52=func_230(2100, iParam10, 0);
iVar53=func_230(2101, iParam10, 0);
iVar54=func_230(2102, iParam10, 0);
uVar55=func_371(135, iParam10);
if(iVar5==joaat("mp_m_freemode_01")){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, uVar55, 0f, false);
}elseif(iVar5==joaat("mp_f_freemode_01")){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
}
iVar56=0;
while (iVar56 < 20){
PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
iVar56++;
}}else{
func_356(iParam0, iParam10);
}}elseif(iParam1==4){
iVar57=func_311(iParam0, 11);
iVar58=func_311(iParam0, 8);
if(iVar5==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iVar5, iVar57, 11, 3), joaat("low2_open_check"), 0)){
if(!func_431(iVar5, iParam2, func_433(iVar5, iVar58, 0))){
func_328(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_462(iVar5, iParam1, iParam2, -1) 
};
}}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iVar5, iVar57, 11, 4), joaat("low2_open_check"), 0)){
if(!func_431(iVar5, iParam2, func_433(iVar5, iVar58, 0))){
func_328(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_462(iVar5, iParam1, iParam2, -1) 
};
}}}
if(iParam5==0){
iVar6=func_440(iVar5, func_311(iParam0, 8), func_311(iParam0, 11), iParam2);
}
iVar59=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("gloves"), 0)){
iVar60=func_440(iVar5, iVar58, iVar57, iParam2);
if(iVar60==-99){
iVar60=func_448(iParam0, iVar5, 11, iVar57, 3, 0);
}
switch (iVar59){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar60=11;
iVar61=func_320(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("dress"), 0)){
iVar60=-99;
}
break;
}
if(iVar60 !=-99){
iVar62=0;
while (iVar62 < 18){
if(func_439(iVar5, iVar60, iVar62)==iVar59){
iVar10=iVar62;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar62++;
}}}}
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_239(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_239(iParam1)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_239(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_448(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_328(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1==10);
if(iVar2==3){
switch (Global_2883588){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar10=-1;
break;
}
}
elseif(iVar2==8){
if(iVar6 !=-99){
iVar6=func_440(iVar5, iVar3, func_311(iParam0, 11), func_311(iParam0, 4));
}
}}
iVar2++;
}
iVar3=func_448(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_328(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if((iParam1==11 || iParam1==8) || iParam1==4){
if(func_355(iParam0)){
iVar63=func_353(iParam0, iVar5, iParam1, iParam2);
if(iVar63 > 0){
iVar63=(iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
if(!func_352(iParam0, 9, iVar63)){
func_328(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}else{
func_328(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("over_jacket"))){
func_328(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iParam1==11 || iParam1==8){
iVar64=func_230(2042, -1, 0);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) !=0){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_346(iParam0, iVar64), func_345(iParam0, iVar64), func_344(iParam0, iVar64));
}
if(iParam0==PLAYER::PLAYER_PED_ID()){
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_346(PLAYER::PLAYER_PED_ID(), iVar64), func_345(PLAYER::PLAYER_PED_ID(), iVar64), 0);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_344(PLAYER::PLAYER_PED_ID(), iVar64));
func_342(PLAYER::PLAYER_ID(), iVar64);
}}
if(iParam1==7){
if((iVar5==joaat("mp_m_freemode_01") && iParam2 >=92) || (iVar5==joaat("mp_f_freemode_01") && iParam2 >=55)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("big_chain"), 0)){
func_328(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iVar5==joaat("mp_f_freemode_01") && (iParam1==11 || iParam1==4)){
if(iParam1==11){
iVar65=func_456(iParam0, 4, -1);
iVar66=iParam2;
}else{
iVar65=iParam2;
iVar66=func_456(iParam0, 11, -1);
}
if(func_341(iVar5, 11, iVar66, -1)){
if(!func_340(iVar5, 4, iVar65, -1)){
if(func_339(iVar5, 4, iVar65, &uVar67)){
func_328(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}elseif(func_340(iVar5, 4, iVar65, -1)){
if(func_338(iVar5, 4, iVar65, &uVar67)){
func_328(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iParam1==4 || iParam1==6){
iVar68=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
iVar69=PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
iVar70=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
iVar71=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
iVar72=PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
iVar73=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
iVar74=func_311(iParam0, 4);
iVar75=func_311(iParam0, 6);
if(func_337(iVar5, iVar70)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("alt_feet"), 0) !=func_336(iVar5, iVar74, iVar70)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==6){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar75=func_298(iVar5, iVar78, 6, 3);
iVar70=iVar78;
func_328(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar75=func_298(iVar5, iVar78, 6, 4);
iVar70=iVar78;
func_328(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("alt_legs"), 0) !=func_335(iVar5, iVar75, iVar73)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==4){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar74=func_298(iVar5, iVar78, 4, 3);
iVar73=iVar78;
func_328(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar74=func_298(iVar5, iVar78, 4, 4);
iVar73=iVar78;
func_328(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}}
if(func_337(iVar5, iVar73)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("alt_legs"), 0) !=func_335(iVar5, iVar75, iVar73)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==4){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar74=func_298(iVar5, iVar78, 4, 3);
iVar73=iVar78;
func_328(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar74=func_298(iVar5, iVar78, 4, 4);
iVar73=iVar78;
func_328(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("alt_feet"), 0) !=func_336(iVar5, iVar74, iVar70)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==6){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar75=func_298(iVar5, iVar78, 6, 3);
iVar70=iVar78;
func_328(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar75=func_298(iVar5, iVar78, 6, 4);
iVar70=iVar78;
func_328(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}}}
if(iParam1==11 || iParam1==1){
func_441(iParam0);
iVar81=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
iVar82=PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
iVar83=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("force_prop"), 0)){
iVar3=func_448(iParam0, iVar5, iParam1, iParam2, 14, 0);
if(iVar3 !=-99){
func_328(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar3=func_448(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_328(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}}
if(iParam1 !=2){
if(func_329(iParam0, &uVar4)){
func_328(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if(iVar6 !=-99 && !bParam13){
func_328(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar8 !=-99){
func_328(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar7 !=-99){
func_328(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar10 !=-1){
iVar84=func_439(iVar5, func_456(iParam0, 3, -1), iVar10);
if(iVar84 !=-1){
if(iVar5==joaat("mp_m_freemode_01")){
iVar9=func_298(iVar5, iVar84, 3, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar9=func_298(iVar5, iVar84, 3, 4);
}
if(iVar9 !=-99){
iVar9=(iVar9 + iVar11);
func_328(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
Global_78339=(Global_78339 - 1);
return 1;
}

int func_329(int iParam0, var uParam1){
int iVar0;
int iVar1;
*uParam1=func_456(PLAYER::PLAYER_PED_ID(), 2, -1);
if(func_230(754, Global_78338, 0) !=-99 && func_332()){
if(func_331()==4){
return 1;
}
if(func_230(754, Global_78338, 0)==0 && func_230(755, Global_78338, 0)==0){
if(func_330(161, Global_78338)){
if(func_230(2053, Global_78338, 0)==0){
return 0;
}}elseif(func_230(753, Global_78338, 0)==0){
return 0;
}}
iVar0=func_230(754, Global_78338, 0);
iVar1=func_230(755, Global_78338, 0);
if(!func_352(iParam0, iVar1, iVar0)){
if(func_330(161, Global_78338)){
*uParam1=func_230(2053, Global_78338, 0);
}else{
*uParam1=func_230(753, Global_78338, 0);
}
func_499(754, -99, Global_78338, 1, 0);
func_499(755, 2, Global_78338, 1, 0);
return 1;
}}
return 0;
}

int func_330(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_231(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_331(){
return Global_1574992;
}

int func_332(){
if(func_334() && func_333(0)){
return 1;
}
return 0;
}


var func__333(int iParam0){
return Global_1574538[iParam0];
}


var func__334(){
return func_333(func_232() + 1);
}

int func_335(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=-1;
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(iParam1 >=256){
iVar0=func_320(iParam0, iParam1, 6, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0)){
return 1;
}
return 0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("cowboy_boots"), 0)){
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("gun_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("gun_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("gorka_suit"), 0)){
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
if((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("pilot_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("cowboy_boots"), 0)){
return 1;
}}
break;
case joaat("mp_f_freemode_01"):
if(iParam1 >=256){
iVar0=func_320(iParam0, iParam1, 6, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0)){
return 1;
}
return 0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
if(((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("pilot_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_8"), 0)){
return 1;
}}
break;
}
return 0;
return 0;
}

int func_336(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=-1;
iVar1=-1;
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(iParam1 >=256){
iVar0=func_320(iParam0, iParam1, 4, 3);
iVar1=func_432(iVar0);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
iVar2=1;
if((((((((((((((((((((((((iParam1 >=32 && iParam1 <=47) || (iParam1 >=64 && iParam1 <=79)) || (iParam1 >=96 && iParam1 <=111)) || (iParam1 >=176 && iParam1 <=191)) || (iParam1 >=192 && iParam1 <=207)) || (iParam1 >=224 && iParam1 <=239)) || (iParam1 >=240 && iParam1 <=255)) || iVar1==2) || iVar1==4) || iVar1==6) || iVar1==11) || iVar1==12) || iVar1==14) || iVar1==15) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("skinny"), 0)) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_0"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_1"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1854729816, 0)){
iVar2=0;
}
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("battle_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("battle_draw_2"), 0)){
if((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0)){
iVar2=1;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0)){
iVar2=0;
}else{
iVar2=1;
}}
return iVar2;
}
break;
case joaat("mp_f_freemode_01"):
if(iParam1 >=256){
iVar0=func_320(iParam0, iParam1, 4, 4);
iVar1=func_432(iVar0);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0)){
return 0;
}}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0)){
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("biker_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("biker_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_1"), 0)){
return 1;
}
return 0;
}
if(((((((((((((((((((((((((((iParam1 >=16 && iParam1 <=31) || (iParam1 >=48 && iParam1 <=63)) || (iParam1 >=96 && iParam1 <=111)) || iVar1==1) || iVar1==3) || iVar1==6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1103045158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("dungarees"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("h3_draw_5"), 0)){
return 1;
}}
break;
}
return 0;
}

int func_337(int iParam0, int iParam1){
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("has_alt_version"), 0)){
return 1;
}
break;
case joaat("mp_f_freemode_01"):
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("has_alt_version"), 0)){
return 1;
}
break;
}
return 0;
}

int func_338(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_320(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_298(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_339(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_320(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_298(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_340(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 4, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress_legs"), 0)){
return 1;
}}
break;
}
break;
}
return 0;
}

int func_341(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 11:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_320(iParam0, iParam2, 11, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress"), 0);
}
break;
}
break;
}
return 0;
}


void func_342(int iParam0, int iParam1){
int iVar0;
iVar0=func_343(iParam1);
if(iVar0 !=joaat("p_parachute_s")){
PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
}else{
PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
}}

int func_343(int iParam0){
if(iParam0 > 66){
return joaat("reh_p_para_bag_reh_s_01a");
}elseif(iParam0 > 63){
return joaat("p_para_bag_tr_s_01a");
}elseif(iParam0 > 61){
return joaat("vw_p_para_bag_vine_s");
}elseif(iParam0 > 51){
return joaat("lts_p_para_bag_pilot2_s");
}elseif(iParam0 > 46){
return joaat("p_para_bag_xmas_s");
}elseif(iParam0 > 26){
return joaat("lts_p_para_bag_lts_s");
}elseif(iParam0 > 0){
return joaat("lts_p_para_bag_pilot2_s");
}
return joaat("p_parachute_s");
}

int func_344(int iParam0, int iParam1){
return 0;
}

int func_345(int iParam0, int iParam1){
switch (iParam1){
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
return 9;
break;
case 11:
return 10;
break;
case 12:
return 11;
break;
case 13:
return 12;
break;
case 14:
return 13;
break;
case 15:
return 14;
break;
case 16:
return 15;
break;
case 17:
return 16;
break;
case 18:
return 17;
break;
case 19:
return 18;
break;
case 20:
return 19;
break;
case 21:
return 20;
break;
case 22:
return 21;
break;
case 23:
return 22;
break;
case 24:
return 23;
break;
case 25:
return 24;
break;
case 26:
return 25;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 2;
break;
case 30:
return 3;
break;
case 31:
return 4;
break;
case 32:
return 5;
break;
case 33:
return 6;
break;
case 34:
return 7;
break;
case 35:
return 8;
break;
case 36:
return 9;
break;
case 37:
return 10;
break;
case 38:
return 11;
break;
case 39:
return 12;
break;
case 40:
return 13;
break;
case 41:
return 14;
break;
case 42:
return 15;
break;
case 43:
return 16;
break;
case 44:
return 17;
break;
case 45:
return 18;
break;
case 46:
return 19;
break;
case 47:
return 0;
break;
case 48:
return 1;
break;
case 49:
return 2;
break;
case 50:
return 3;
break;
case 51:
return 4;
break;
case 52:
return 0;
break;
case 53:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 2;
break;
case 56:
return 3;
break;
case 57:
return 4;
break;
case 58:
return 5;
break;
case 59:
return 6;
break;
case 60:
return 7;
break;
case 61:
return 8;
break;
case 62:
return 0;
break;
case 63:
return 1;
break;
case 64:
return 0;
break;
case 65:
return 1;
break;
case 66:
return 2;
break;
case 67:
return 0;
break;
}
return 0;
}


var func__346(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar2=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
bVar3=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=false;
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
iVar5=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
iVar6=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
if(((((((bVar3 !=Global_78530 || iParam1 !=Global_78531) || iVar4 !=Global_78532) || iVar5 !=Global_78533) || iVar6 !=Global_78534) || iVar0 !=Global_78535) || iVar1 !=Global_78536) || iVar2 !=Global_78537){
Global_78530=bVar3;
Global_78531=iParam1;
Global_78532=iVar4;
Global_78533=iVar5;
Global_78534=iVar6;
Global_78535=iVar0;
Global_78536=iVar1;
Global_78537=iVar2;
Global_78538=func_347(iParam0, iParam1);
}
return Global_78538;
}

int func_347(int iParam0, int iParam1){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=0){
bVar1=true;
}
iVar2=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar3=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("over_jacket"), 8)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_351(iParam0, iParam1, 1);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)){
return func_351(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_351(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_351(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_351(iParam0, iParam1, 10);
}}else{
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8)){
return func_351(iParam0, iParam1, 6);
}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_351(iParam0, iParam1, 7);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_351(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_351(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_351(iParam0, iParam1, 10);
}}
return func_351(iParam0, iParam1, 9);
}
if(func_350(iParam0)){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}
if(iVar0 > 15){
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 98087521, 0)){
return func_351(iParam0, iParam1, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -135391604, 0)){
return func_351(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1398721900, 0)){
return func_351(iParam0, iParam1, 2);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0)){
return func_351(iParam0, iParam1, 3);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0)){
return func_351(iParam0, iParam1, 4);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0)){
return func_351(iParam0, iParam1, 5);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1868675094, 0)){
return func_351(iParam0, iParam1, 6);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1500122155, 0)){
return func_351(iParam0, iParam1, 7);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0)){
return func_351(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -226291902, 0)){
return func_351(iParam0, iParam1, 9);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 607416996, 0)){
return func_351(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hipster_dress"), 0)){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -405912369, 0)){
return func_351(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0)){
if(bVar1){
return func_351(iParam0, iParam1, 5);
}else{
return func_351(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
return func_351(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_gear"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hooded_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
return func_351(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
return func_351(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
return func_351(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
return func_351(iParam0, iParam1, 10);
}elseif(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
iVar5=func_349(iVar4, 0);
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar5){
case 0:
return func_351(iParam0, iParam1, 1);
break;
case 2:
return func_351(iParam0, iParam1, 8);
break;
default:
iVar0=func_432(iVar4);
break;
}}else{
switch (iVar5){
case 2:
return func_351(iParam0, iParam1, 6);
break;
default:
iVar0=func_432(iVar4);
break;
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_bomb"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_gear"), 0)){
iVar6=func_348(iVar4, 0);
switch (iVar6){
case 4:
return func_351(iParam0, iParam1, 7);
break;
case 5:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 7);
}
break;
case 6:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 7);
}
break;
case 7:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 7);
}
break;
case 11:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 7);
}
break;
case 12:
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}
break;
case 13:
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 9);
}
break;
case 14:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 9);
}
break;
default:
iVar0=func_432(iVar4);
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("xmas2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 2);
}}elseif(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}elseif(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 1);
}elseif(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 8);
}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_3"), 0)){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 2);
}}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 1);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_sweat"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_sweat"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 5);
}}elseif(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 8);
}elseif(bVar1){
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}elseif(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 6);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_7"), 0)){
if(iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 1);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 5);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 2);
}}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -872449705, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 144417099, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 2);
}}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}else{
return func_351(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 6);
}}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 2);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_22"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 2);
}}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}elseif(bVar1){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}elseif(bVar1){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}elseif(bVar1){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_13"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_16"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_27"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_28"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_23"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smug_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
iVar0=7;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("assault_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 0);
}else{
return func_351(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 3);
}else{
return func_351(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 9);
}else{
return func_351(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 10);
}else{
return func_351(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("vest_shirt"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tails_jacket"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 7);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)){
return func_351(iParam0, iParam1, 6);
}else{
iVar7=iVar0;
iVar0=func_432(iVar4);
}}
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar0){
case 0:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 2:
if(bVar1){
return func_351(iParam0, iParam1, 6);
}else{
return func_351(iParam0, iParam1, 6);
}
break;
case 3:
if(bVar1){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 2);
}
break;
case 4:
if(bVar1){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 2);
}
break;
case 5:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 1);
}
break;
case 7:
if(bVar1){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 2);
}
break;
case 8:
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 9:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 10:
if(bVar1){
return func_351(iParam0, iParam1, 2);
}else{
return func_351(iParam0, iParam1, 2);
}
break;
case 11:
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 1);
}
break;
case 12:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_351(iParam0, iParam1, 6);
}else{
return func_351(iParam0, iParam1, 1);
}
break;
case 14:
if(bVar1){
return func_351(iParam0, iParam1, 5);
}else{
return func_351(iParam0, iParam1, 5);
}
break;
case 15:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 4);
}
break;
}}else{
switch (iVar0){
case 0:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_351(iParam0, iParam1, 6);
}else{
return func_351(iParam0, iParam1, 6);
}
break;
case 2:
if(bVar1){
return func_351(iParam0, iParam1, 3);
}else{
return func_351(iParam0, iParam1, 2);
}
break;
case 3:
if(bVar1){
return func_351(iParam0, iParam1, 5);
}else{
return func_351(iParam0, iParam1, 4);
}
break;
case 4:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 5:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_351(iParam0, iParam1, 6);
}else{
return func_351(iParam0, iParam1, 6);
}
break;
case 7:
if(bVar1){
return func_351(iParam0, iParam1, 6);
}else{
return func_351(iParam0, iParam1, 6);
}
break;
case 8:
if(bVar1){
return func_351(iParam0, iParam1, 6);
}else{
return func_351(iParam0, iParam1, 6);
}
break;
case 9:
return func_351(iParam0, iParam1, 1);
break;
case 10:
if(bVar1){
return func_351(iParam0, iParam1, 6);
}else{
return func_351(iParam0, iParam1, 6);
}
break;
case 11:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 12:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
case 14:
if(bVar1){
return func_351(iParam0, iParam1, 7);
}else{
return func_351(iParam0, iParam1, 3);
}
break;
case 15:
if(bVar1){
return func_351(iParam0, iParam1, 1);
}else{
return func_351(iParam0, iParam1, 0);
}
break;
}}
return func_351(iParam0, iParam1, 0);
return 0;
}

int func_348(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_0"), iParam1)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_1"), iParam1)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_2"), iParam1)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_3"), iParam1)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_4"), iParam1)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_5"), iParam1)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_6"), iParam1)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_7"), iParam1)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_8"), iParam1)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_9"), iParam1)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_10"), iParam1)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_11"), iParam1)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_12"), iParam1)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_13"), iParam1)){
iVar0=13;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_14"), iParam1)){
iVar0=14;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_15"), iParam1)){
iVar0=15;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_16"), iParam1)){
iVar0=16;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_17"), iParam1)){
iVar0=17;
}
return iVar0;
}

int func_349(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_0"), iParam1)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_1"), iParam1)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_2"), iParam1)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_3"), iParam1)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_4"), iParam1)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_5"), iParam1)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_6"), iParam1)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_7"), iParam1)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_8"), iParam1)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_9"), iParam1)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_10"), iParam1)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_11"), iParam1)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1)){
iVar0=13;
}
return iVar0;
}

int func_350(int iParam0){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("dungarees"))){
return 1;
}
return 0;
}

int func_351(int iParam0, int iParam1, int iParam2){
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 1;
break;
case 1:
return 2;
break;
case 2:
return 3;
break;
case 3:
return 4;
break;
case 4:
return 5;
break;
case 5:
return 6;
break;
case 6:
return 7;
break;
case 7:
return 8;
break;
case 8:
return 19;
break;
case 9:
return 48;
break;
case 10:
return 62;
break;
}
break;
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
case 22:
case 23:
case 24:
case 25:
case 26:
switch (iParam2){
case 0:
return 10;
break;
case 1:
return 11;
break;
case 2:
return 12;
break;
case 3:
return 13;
break;
case 4:
return 14;
break;
case 5:
return 15;
break;
case 6:
return 16;
break;
case 7:
return 17;
break;
case 8:
return 18;
break;
case 9:
return 49;
break;
case 10:
return 64;
break;
}
break;
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
case 42:
case 43:
case 44:
case 45:
case 46:
switch (iParam2){
case 0:
return 21;
break;
case 1:
return 22;
break;
case 2:
return 23;
break;
case 3:
return 24;
break;
case 4:
return 25;
break;
case 5:
return 26;
break;
case 6:
return 27;
break;
case 7:
return 28;
break;
case 8:
return 29;
break;
case 9:
return 50;
break;
case 10:
return 65;
break;
}
break;
case 47:
case 48:
case 49:
case 50:
case 51:
switch (iParam2){
case 0:
return 31;
break;
case 1:
return 32;
break;
case 2:
return 33;
break;
case 3:
return 34;
break;
case 4:
return 35;
break;
case 5:
return 36;
break;
case 6:
return 37;
break;
case 7:
return 38;
break;
case 8:
return 39;
break;
case 9:
return 51;
break;
case 10:
return 66;
break;
}
break;
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 60:
case 61:
switch (iParam2){
case 0:
return 52;
break;
case 1:
return 53;
break;
case 2:
return 54;
break;
case 3:
return 55;
break;
case 4:
return 56;
break;
case 5:
return 57;
break;
case 6:
return 58;
break;
case 7:
return 59;
break;
case 8:
return 60;
break;
case 9:
return 61;
break;
case 10:
return 69;
break;
}
break;
case 62:
case 63:
switch (iParam2){
case 0:
return 70;
break;
case 1:
return 71;
break;
case 2:
return 72;
break;
case 3:
return 73;
break;
case 4:
return 74;
break;
case 5:
return 75;
break;
case 6:
return 76;
break;
case 7:
return 77;
break;
case 8:
return 78;
break;
case 9:
return 79;
break;
case 10:
return 80;
break;
}
break;
case 64:
case 65:
case 66:
switch (iParam2){
case 0:
return 89;
break;
case 1:
return 90;
break;
case 2:
return 91;
break;
case 3:
return 92;
break;
case 4:
return 93;
break;
case 5:
return 94;
break;
case 6:
return 95;
break;
case 7:
return 96;
break;
case 8:
return 97;
break;
case 9:
return 98;
break;
case 10:
return 99;
break;
}
break;
case 67:
switch (iParam2){
case 0:
return 100;
break;
case 1:
return 101;
break;
case 2:
return 102;
break;
case 3:
return 103;
break;
case 4:
return 104;
break;
case 5:
return 105;
break;
case 6:
return 106;
break;
case 7:
return 107;
break;
case 8:
return 108;
break;
case 9:
return 109;
break;
case 10:
return 110;
break;
}
break;
}
return 0;
}

int func_352(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
var uVar8;
var uVar9;
int iVar10;
var uVar11;
int iVar12;
int iVar13;
var uVar14;
var uVar15;
int iVar16;
struct<5> Var17;
var uVar18;
if(PED::IS_PED_INJURED(iParam0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78341[1 /*14*/]={
func_462(iVar0, iParam1, iParam2, -1) 
};
uVar2=Global_2883588;
uVar3=Global_2883589;
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar8={
func_303(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 < 7){
switch (iVar7){
case 0:
iVar4=1;
break;
case 1:
iVar4=4;
break;
case 2:
iVar4=6;
break;
case 3:
iVar4=7;
break;
case 4:
iVar4=8;
break;
case 5:
iVar4=11;
break;
case 6:
iVar4=13;
break;
}
if(uVar8[iVar4] !=-99){
if(!func_352(iParam0, iVar4, uVar8[iVar4])){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
if(iVar4==13){
uVar9={
func_296(iVar0, uVar8[iVar4]) 
};
iVar5=0;
while (iVar5 <=8){
if(!func_352(iParam0, 14, uVar9[iVar5])){
iVar6=0;
while (iVar6 <=19){
Global_78341[2 /*14*/]={
func_462(iVar0, 14, iVar6, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar5){
if(func_352(iParam0, 14, iVar6)){
if(!func_318(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78341[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}
}
}
iVar6++;
}}
iVar5++;
}}else{
iVar1=func_311(iParam0, iVar4);
Global_78341[2 /*14*/]={
func_462(iVar0, iVar4, iVar1, -1) 
};
if(!func_318(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78341[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}}}
iVar7++;
}
if((uVar8[10] !=0 && uVar8[10] !=joaat("0")) && uVar8.f_16){
if(func_230(1759, Global_78338, 0) !=uVar8[10]){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}
Global_2883588=uVar2;
Global_2883589=uVar3;
return 1;
}elseif(iParam1==13){
uVar11={
func_296(iVar0, iParam2) 
};
iVar10=0;
while (iVar10 <=8){
if(!func_352(iParam0, 14, uVar11[iVar10])){
return 0;
}
iVar10++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}
if(((Global_78341[1 /*14*/].f_12==0 && MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("helmet"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0){
iVar16=FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
iVar12=0;
while (iVar12 < iVar16){
FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
if(iVar13 !=0 && iVar13 !=joaat("0")){
FILES::INIT_SHOP_PED_PROP(&Var17);
FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
if(Var17.f_3==PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1) && Var17.f_4==PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)){
return 1;
}}
iVar12++;
}}}else{
if(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_239(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_239(iParam1))){
return 1;
}
if(iParam1==4){
Global_78340++;
if(Global_78340==1){
if(func_341(iVar0, 11, func_311(iParam0, 11), -1)){
if(func_339(iVar0, 4, iParam2, &uVar18)){
return func_352(iParam0, 4, uVar18);
}}elseif(func_338(iVar0, 4, iParam2, &uVar18)){
return func_352(iParam0, 4, uVar18);
}}
Global_78340=(Global_78340 - 1);
}}
return 0;
}

int func_353(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
var uVar10;
int iVar11;
if(func_350(iParam0)){
return -99;
}
if(func_354(iParam0)){
return -99;
}
if(iParam2==11){
if(iParam1==joaat("mp_m_freemode_01")){
if(((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=16 && iParam3 <=31)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=140 && iParam3 <=155)) || (iParam3 >=188 && iParam3 <=203)){
return 1;
}elseif(iParam3 >=32 && iParam3 <=47){
return 6;
}elseif(((iParam3 >=48 && iParam3 <=63) || (iParam3 >=64 && iParam3 <=79)) || (iParam3 >=108 && iParam3 <=123)){
return 11;
}elseif(iParam3 >=96 && iParam3 <=107){
return 41;
}elseif(iParam3 >=156 && iParam3 <=171){
return 36;
}elseif(iParam3 >=172 && iParam3 <=187){
return 31;
}elseif(iParam3 >=204 && iParam3 <=219){
return 16;
}elseif((iParam3 >=220 && iParam3 <=235) || (iParam3 >=124 && iParam3 <=139)){
return 26;
}elseif(iParam3==236){
return 21;
}elseif(iParam3 >=237){
iVar0=func_320(iParam1, iParam3, 11, 3);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==9){
if(iVar3 !=0 && iVar3 !=joaat("0")){
return func_298(iParam1, iVar3, 9, 3);
}else{
return uVar4;
}
}
iVar2++;
}}
return -99;
}}elseif(iParam1==joaat("mp_f_freemode_01")){
if((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=64 && iParam3 <=79)) || (iParam3 >=176 && iParam3 <=191)) || (iParam3 >=192 && iParam3 <=207)) || (iParam3 >=208 && iParam3 <=223)) || (iParam3 >=240 && iParam3 <=255)){
return 1;
}elseif(((iParam3 >=16 && iParam3 <=31) || (iParam3 >=112 && iParam3 <=127)) || (iParam3 >=128 && iParam3 <=143)){
return 16;
}elseif(iParam3 >=32 && iParam3 <=47){
return 6;
}elseif(iParam3 >=48 && iParam3 <=63){
return 11;
}elseif((iParam3 >=96 && iParam3 <=111) || (iParam3 >=160 && iParam3 <=175)){
return 21;
}elseif(iParam3 >=224 && iParam3 <=239){
return 26;
}elseif(iParam3 >=144 && iParam3 <=159){
return 0;
}elseif(iParam3 >=80 && iParam3 <=95){
return 31;
}elseif(iParam3 >=256){
iVar6=func_320(iParam1, iParam3, 11, 4);
if(iVar6 !=-1){
iVar7=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar6);
iVar8=0;
while (iVar8 < iVar7){
FILES::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
if(iVar11==9){
if(iVar9 !=0 && iVar9 !=joaat("0")){
return func_298(iParam1, iVar9, 9, 4);
}else{
return uVar10;
}
}
iVar8++;
}}
return -99;
}}}
return -99;
}

int func_354(int iParam0){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("x17_draw_6"))){
return 1;
}
return 0;
}

int func_355(int iParam0){
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=0 && !FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 9, -138631194)){
return 1;
}}
return 0;
}


void func_356(int iParam0, int iParam1){
struct<10> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
float fVar7;
float fVar8;
float fVar9;
bool bVar10;
int iVar11;
if(!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0)){}
if(func_370()){
return;
}
PED::GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
iVar1=func_230(2097, iParam1, 0);
iVar2=func_230(2098, iParam1, 0);
iVar3=func_230(2099, iParam1, 0);
iVar4=func_230(2100, iParam1, 0);
iVar5=func_230(2101, iParam1, 0);
iVar6=func_230(2102, iParam1, 0);
fVar7=func_371(134, iParam1);
fVar8=func_371(135, iParam1);
fVar9=func_371(136, iParam1);
bVar10=func_330(160, iParam1);
if(((((((((Var0.f_0 !=iVar1 || Var0.f_1 !=iVar2) || Var0.f_2 !=iVar3) || Var0.f_3 !=iVar4) || Var0.f_4 !=iVar5) || Var0.f_5 !=iVar6) || Var0.f_6 !=fVar7) || Var0.f_7 !=fVar8) || Var0.f_8 !=fVar9) || Var0.f_9 !=bVar10){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
iVar11=func_230(2103, iParam1, 0);
if(iVar11 > 0){
func_357(iParam0, iParam1, 0);
}}}


void func_357(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
var uVar10;
var uVar11;
var uVar12;
int iVar13;
int iVar14;
var uVar15;
iVar0=0;
while (iVar0 < 20){
iVar1=iVar0;
iVar2=func_369(iVar1);
if(!bParam2){
fVar3=func_371(iVar2, iParam1);
}else{
fVar3=func_368(iVar2, iParam1);
}
PED::SET_PED_MICRO_MORPH(iParam0, iVar1, fVar3);
iVar0++;
}
iVar4=0;
while (iVar4 < 13){
iVar5=func_367(iVar4);
iVar6=func_366(iVar5);
iVar7=func_365(iVar5);
if(iVar6 !=-1 && iVar7 !=-1){
if(!bParam2){
uVar10=func_364(iVar6, iParam1);
uVar11=func_371(iVar7, iParam1);
}else{
uVar10=func_363(iVar6, iParam1);
uVar11=func_368(iVar7, iParam1);
}
PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, uVar10, uVar11);
iVar8=func_362(iVar5);
iVar9=func_361(iVar5);
if(iVar8 !=-1){
if(!bParam2){
iVar13=func_230(iVar8, iParam1, 0);
iVar14=func_230(iVar9, iParam1, 0);
}else{
iVar13=func_360(iVar8, iParam1);
iVar14=func_360(iVar9, iParam1);
}
func_359(iVar13, &uVar12, &uVar15);
PED::SET_PED_HEAD_OVERLAY_TINT(iParam0, iVar5, uVar15, uVar12, iVar14);
}}
iVar4++;
}
func_358(&iParam0, iParam1, bParam2);
}


void func_358(int iParam0, int iParam1, bool bParam2){
float fVar0;
if(!bParam2){
fVar0=func_371(157, iParam1);
}else{
fVar0=func_368(157, iParam1);
}
if(*iParam0==PLAYER::PLAYER_PED_ID()){}
PED::SET_HEAD_BLEND_EYE_COLOR(*iParam0, round(fVar0));
}


void func_359(int iParam0, var uParam1, var uParam2){
int iVar0;
*uParam1=shift_right(iParam0, 16);
iVar0=iParam0 & 65535;
*uParam2=iVar0;
}

int func_360(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2805029[iParam0 /*3*/][func_231(iParam1)];
if(HUD::GET_MENU_PED_INT_STAT(uVar0, &uVar1)){
return uVar1;
}
return 0;
}

int func_361(int iParam0){
switch (iParam0){
case 2:
return 2161;
case 1:
return 2162;
case 5:
return 2163;
case 8:
return 2164;
case 10:
return 2159;
default:
}
return -1;
}

int func_362(int iParam0){
switch (iParam0){
case 2:
return 2154;
case 1:
return 2155;
case 5:
return 2156;
case 8:
return 2157;
case 10:
return 2158;
default:
}
return -1;
}

int func_363(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
if(iParam1==-1){
iParam1=func_232();
}
iVar1=0;
iVar2=0;
if(iParam0 >=384 && iParam0 < 457){
iVar1=STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
iVar2=((iParam0 - 384) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 384)) * 8) * 8;
}elseif(iParam0 >=457 && iParam0 < 513){
iVar1=STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
iVar2=((iParam0 - 457) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 457)) * 8) * 8;
}elseif(iParam0 >=1281 && iParam0 < 1305){
iVar1=STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
iVar2=((iParam0 - 1281) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1281)) * 8) * 8;
}elseif(iParam0 >=1305 && iParam0 < 1361){
iVar1=STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
iVar2=((iParam0 - 1305) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1305)) * 8) * 8;
}elseif(iParam0 >=1393 && iParam0 < 2919){
iVar1=STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
iVar2=((iParam0 - 1393) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1393)) * 8) * 8;
}elseif(iParam0 >=1361 && iParam0 < 1393){
iVar1=STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
iVar2=((iParam0 - 1361) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 1361)) * 8) * 8;
}elseif(iParam0 >=3879 && iParam0 < 4143){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
iVar2=((iParam0 - 3879) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 3879)) * 8) * 8;
}elseif(iParam0 >=4143 && iParam0 < 4207){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
iVar2=((iParam0 - 4143) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 4143)) * 8) * 8;
}elseif(iParam0 >=4399 && iParam0 < 6028){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
iVar2=((iParam0 - 4399) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 4399)) * 8) * 8;
}elseif(iParam0 >=6413 && iParam0 < 7262){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
iVar2=((iParam0 - 6413) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 6413)) * 8) * 8;
}elseif(iParam0 >=7262 && iParam0 < 7313){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
iVar2=((iParam0 - 7262) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7262)) * 8) * 8;
}elseif(iParam0 >=7681 && iParam0 < 9361){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
iVar2=((iParam0 - 7681) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7681)) * 8) * 8;
}elseif(iParam0 >=9553 && iParam0 < 15265){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
iVar2=((iParam0 - 9553) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 9553)) * 8) * 8;
}elseif(iParam0 >=15265 && iParam0 < 15369){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
iVar2=((iParam0 - 15265) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 15265)) * 8) * 8;
}elseif(iParam0 >=7641 && iParam0 < 7681){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
iVar2=((iParam0 - 7641) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7641)) * 8) * 8;
}elseif(iParam0 >=7313 && iParam0 < 7321){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
iVar2=((iParam0 - 7313) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 7313)) * 8) * 8;
}elseif(iParam0 >=16010 && iParam0 < 18098){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
iVar2=((iParam0 - 16010) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 16010)) * 8) * 8;
}elseif(iParam0 >=18162 && iParam0 < 19018){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
iVar2=((iParam0 - 18162) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 18162)) * 8) * 8;
}elseif(iParam0 >=19018 && iParam0 < 22066){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
iVar2=((iParam0 - 19018) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 19018)) * 8) * 8;
}elseif(iParam0 >=22194 && iParam0 < 24962){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
iVar2=((iParam0 - 22194) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 22194)) * 8) * 8;
}elseif(iParam0 >=25538 && iParam0 < 26810){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
iVar2=((iParam0 - 25538) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 25538)) * 8) * 8;
}elseif(iParam0 >=27258 && iParam0 < 28098){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
iVar2=((iParam0 - 27258) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 27258)) * 8) * 8;
}elseif(iParam0 >=28483 && iParam0 < 30227){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
iVar2=((iParam0 - 28483) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 28483)) * 8) * 8;
}elseif(iParam0 >=30483 && iParam0 < 30515){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
iVar2=((iParam0 - 30483) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 30483)) * 8) * 8;
}elseif(iParam0 >=30707 && iParam0 < 31707){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
iVar2=((iParam0 - 30707) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 30707)) * 8) * 8;
}elseif(iParam0 >=32475 && iParam0 < 34123){
iVar1=STATS::GET_PACKED_NG_INT_STAT_KEY((iParam0 - 32475), 0, 1, iParam1, "_FIXERPSTAT_INT");
iVar2=((iParam0 - 32475) - STATS::PACKED_STAT_GET_INT_STAT_INDEX((iParam0 - 32475)) * 8) * 8;
}
if(!HUD::GET_MENU_PED_MASKED_INT_STAT(iVar1, &iVar0, iVar2, 8)){
iVar0=0;
}
if(iParam0==384){}
return iVar0;
}


var func__364(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_232();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_365(int iParam0){
switch (iParam0){
case 3:
return 90;
case 7:
return 93;
case 0:
return 87;
case 6:
return 92;
case 2:
return 89;
case 1:
return 88;
case 4:
return 91;
case 8:
return 158;
case 9:
return 159;
case 5:
return 160;
case 10:
return 163;
case 11:
return 161;
case 12:
return 162;
default:
}
return -1;
}

int func_366(int iParam0){
switch (iParam0){
case 3:
return 450;
case 7:
return 453;
case 0:
return 447;
case 6:
return 452;
case 2:
return 449;
case 1:
return 448;
case 4:
return 451;
case 8:
return 3940;
case 9:
return 3941;
case 5:
return 3942;
case 10:
return 3943;
case 11:
return 3944;
case 12:
return 3945;
default:
}
return -1;
}

int func_367(int iParam0){
switch (iParam0){
case 0:
return 7;
case 1:
return 3;
case 2:
return 9;
case 3:
return 6;
case 4:
return 0;
case 5:
return 4;
case 6:
return 5;
case 7:
return 2;
case 8:
return 1;
case 9:
return 8;
case 10:
return 10;
case 11:
return 11;
case 12:
return 12;
default:
}
return -1;
}


float func_368(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2847606[iParam0 /*3*/][func_231(iParam1)];
if(HUD::GET_MENU_PED_FLOAT_STAT(uVar0, &uVar1)){
return uVar1;
}
return 0f;
}

int func_369(int iParam0){
switch (iParam0){
case 0:
return 137;
case 1:
return 138;
case 2:
return 139;
case 3:
return 140;
case 4:
return 141;
case 5:
return 142;
case 6:
return 143;
case 7:
return 144;
case 8:
return 145;
case 9:
return 146;
case 10:
return 147;
case 11:
return 148;
case 12:
return 149;
case 13:
return 150;
case 14:
return 151;
case 15:
return 152;
case 16:
return 153;
case 17:
return 154;
case 18:
return 155;
case 19:
return 156;
default:
}
return -1;
}

int func_370(){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2639783.f_60) && !Global_2639783.f_59==0){
return 1;
}
return 0;
}


float func_371(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2847606[iParam0 /*3*/][func_231(iParam1)];
if(STATS::STAT_GET_FLOAT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0f;
}

int func_372(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
int iVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
int iVar19;
int iVar20;
struct<7> Var21;
int iVar22;
if(iParam0==joaat("mp_m_freemode_01")){
iVar1=-1;
iVar2=-1;
if(Global_4539502==iParam1){
iVar2=Global_4539501;
iVar1=Global_4539500;
}elseif(iParam1 >=92){
iVar2=func_320(iParam0, iParam1, 7, 3);
iVar1=func_432(iVar2);
Global_4539502=iParam1;
Global_4539501=iVar2;
Global_4539500=iVar1;
}
iVar3=-1;
iVar4=-1;
if(Global_4539505==iParam3){
iVar4=Global_4539504;
iVar3=Global_4539503;
}elseif(iParam3 >=237){
iVar4=func_320(iParam0, iParam3, 11, 3);
iVar3=func_432(iVar4);
Global_4539505=iParam3;
Global_4539504=iVar4;
Global_4539503=iVar3;
}
iVar5=-1;
iVar6=-1;
if(Global_4539508==iParam4){
iVar6=Global_4539507;
iVar5=Global_4539506;
}elseif(iParam4 >=241){
iVar6=func_320(iParam0, iParam4, 8, 3);
iVar5=func_432(iVar6);
Global_4539508=iParam4;
Global_4539507=iVar6;
Global_4539506=iVar5;
}
iVar7=-1;
iVar8=-1;
if(Global_4539511==iParam10){
iVar8=Global_4539510;
iVar7=Global_4539509;
}elseif(iParam10 >=26){
iVar8=func_320(iParam0, iParam10, 1, 3);
iVar7=func_432(iVar8);
Global_4539511=iParam10;
Global_4539510=iVar8;
Global_4539509=iVar7;
}
if(iParam3 !=-99){
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("morph_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("scuba_gear"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gorka_suit"), 0)){
if(iParam1 !=0){
return 0;
}}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("headscarf"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("smug_draw_6"), 0)){
if(iParam1 !=0){
return 0;
}}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("hoop_necklace"), 0)){
if(func_436(iParam0, iParam3, -1)){
return 0;
}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
if(iParam1 !=0 && !(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("pilot_suit"), 0))){
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("epsilon_chain_alt"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_0"), 0)){
return 1;
}else{
return 0;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("epsilon_chain"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_0"), 0)){
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("epsilon_chain_alt"), 0)){
if(iParam4==240){
return 1;
}else{
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 91564168, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 91564168, 0)){
return 1;
}else{
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 91564168, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 91564168, 0)){
return 1;
}else{
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1536943816, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -589305886, 0)){
return 1;
}else{
return 0;
}}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -120244486, 0)){
if(iParam9 !=-99){
iVar9=-1;
if(iParam9 >=327){
iVar9=func_320(iParam0, iParam9, 14, 3);
}
if(((iParam9 >=27 && iParam9 <=34) || (iParam9 >=75 && iParam9 <=82)) || (iParam9 >=107 && iParam9 <=114)){
return 0;
}
switch (iVar9){
case 1411612772:
case 1399488226:
case 1103092621:
case 798340921:
case 495850282:
case -1972900644:
case 2016102499:
case 1719477511:
case 288210625:
case -882756821:
case -1242625979:
case -1358792084:
case joaat("dlc_mp_exec_m_phead_1_0"):
case joaat("dlc_mp_beach_m_head0_0"):
case joaat("dlc_mp_beach_m_head0_1"):
case joaat("dlc_mp_beach_m_head0_2"):
case joaat("dlc_mp_beach_m_head0_3"):
case joaat("dlc_mp_beach_m_head0_4"):
case joaat("dlc_mp_beach_m_head0_5"):
case joaat("dlc_mp_stunt_m_phead_10_0"):
case joaat("dlc_mp_stunt_m_phead_10_1"):
case joaat("dlc_mp_stunt_m_phead_10_2"):
case joaat("dlc_mp_stunt_m_phead_10_3"):
case joaat("dlc_mp_stunt_m_phead_10_4"):
case joaat("dlc_mp_stunt_m_phead_10_5"):
case joaat("dlc_mp_stunt_m_phead_10_6"):
case joaat("dlc_mp_stunt_m_phead_10_7"):
case joaat("dlc_mp_stunt_m_phead_10_8"):
case joaat("dlc_mp_stunt_m_phead_10_9"):
case joaat("dlc_mp_stunt_m_phead_10_10"):
case joaat("dlc_mp_stunt_m_phead_10_11"):
case joaat("dlc_mp_stunt_m_phead_10_12"):
case joaat("dlc_mp_stunt_m_phead_10_13"):
case joaat("dlc_mp_stunt_m_phead_10_14"):
case joaat("dlc_mp_stunt_m_phead_10_15"):
case joaat("dlc_mp_stunt_m_phead_10_16"):
case joaat("dlc_mp_stunt_m_phead_10_17"):
case joaat("dlc_mp_stunt_m_phead_10_18"):
case joaat("dlc_mp_stunt_m_phead_10_19"):
case joaat("dlc_mp_stunt_m_phead_10_20"):
case joaat("dlc_mp_gr_m_phead_7_0"):
case joaat("dlc_mp_gr_m_phead_7_1"):
case joaat("dlc_mp_gr_m_phead_7_2"):
case joaat("dlc_mp_gr_m_phead_7_3"):
case joaat("dlc_mp_gr_m_phead_7_4"):
case joaat("dlc_mp_gr_m_phead_7_5"):
case joaat("dlc_mp_gr_m_phead_7_6"):
case joaat("dlc_mp_gr_m_phead_7_7"):
case joaat("dlc_mp_gr_m_phead_7_8"):
case joaat("dlc_mp_gr_m_phead_7_9"):
case joaat("dlc_mp_gr_m_phead_7_10"):
return 0;
break;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("headscarf"), 0)){
return 0;
}}}
if(iParam3 !=-99){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("scarf"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jacket_scarf"), 0)){
if(((((((((((((((((((((((((((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("block_scarfs"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
return 0;
}elseif(func_374(iParam0, iParam3)){
}else{
return 0;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("block_scarfs"), 0)){
return 0;
}elseif(func_374(iParam0, iParam3)){
return 0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -120244486, 0)){
if(((((((((((((iParam3 >=188 && iParam3 <=203) || (iParam3 >=220 && iParam3 <=235)) || iVar3==12) || iVar3==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
return 0;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("headscarf"), 0)){
return 0;
}}}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("luxe_scarf"), 0)){
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_1"), 0)){
}else{
return 0;
}}}
if((iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("scarf"), 0)) || (iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("big_chain"), 0))){
if(iParam11 !=-99){
iVar10=-1;
if(iParam11 >=256){
iVar10=func_320(iParam0, iParam11, 4, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("dungarees"), 0)){
return 0;
}}}
if(iParam3 !=-99){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("bead_necklace"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("sweat_vest"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)){
return 1;
}else{
return 0;
}}}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("chain"), 0)){
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("big_chain"), 0)){
if((iParam3 >=96 && iParam3 <=107) || iVar3==6){
return 0;
}}
if(iParam3==236){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("alt_chain"), 0)){
return 0;
}}elseif(((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >=172 && iParam3 <=187) || (iParam3 >=188 && iParam3 <=203)) || (iParam3 >=204 && iParam3 <=219)) || (iParam3 >=220 && iParam3 <=235)) || iVar3==11) || iVar3==12) || iVar3==13) || iVar3==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("block_chains"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tux_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("xmas2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("scruffy_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jacket_only"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
return 0;
}elseif(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("alt_chain"), 0)){
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=64 && iParam4 <=79)) || (iParam4 >=96 && iParam4 <=111)) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=192 && iParam4 <=207)) || (iParam4 >=208 && iParam4 <=223)) || iVar5==3) || iVar5==4) || iVar5==6) || iVar5==7) || iVar5==12) || iVar5==13) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("block_chains"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("stunt_draw_2"), 0)){
return 0;
}}}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("big_chain"), 0)){
if(iParam8 !=-99){
return 0;
}}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("pilot_suit"), 0)){
if(iParam9 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1)){
}elseif(iParam2==14 || (iParam2==1 && iParam10 !=0)){
return 0;
}}elseif((iParam9 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1)) && iParam1 !=0){
return 0;
}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1119006951, 0)){
if(iParam3 !=-99){
if(((((((((((((((((((((((((((((((((((((((((((iParam3 >=140 && iParam3 <=155) || (iParam3 >=188 && iParam3 <=203)) || (iParam3 >=204 && iParam3 <=219)) || (iParam3 >=220 && iParam3 <=235)) || iVar3==9) || iVar3==12) || iVar3==13) || iVar3==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_bomb"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smug_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("assault_draw_0"), 0)){
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((((((((((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=64 && iParam4 <=79)) || (iParam4 >=96 && iParam4 <=111)) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=144 && iParam4 <=159)) || (iParam4 >=160 && iParam4 <=175)) || (iParam4 >=176 && iParam4 <=191)) || (iParam4 >=192 && iParam4 <=207)) || (iParam4 >=208 && iParam4 <=223)) || iVar5==3) || iVar5==4) || iVar5==6) || iVar5==7) || iVar5==9) || iVar5==10) || iVar5==11) || iVar5==12) || iVar5==13) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("vest_shirt"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("closed_collar"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("open_collar"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_shirt"), 0)){
return 0;
}}}
if((iParam1 >=1 && iParam1 <=3) || iVar1==1){
if(iParam5 !=-99){
if(iParam5 !=15){
return 0;
}}
if(iParam3 !=-99){
if(iParam3 !=236){
return 0;
}}
if(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("outfit_checks"), 0)){
return 0;
}}elseif((iParam1 >=4 && iParam1 <=6) || iVar1==2){
if(iParam3 !=-99){
if((((((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=16 && iParam3 <=31)) || (iParam3 >=32 && iParam3 <=47)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=124 && iParam3 <=139)) || iVar3==0) || iVar3==1) || iVar3==2) || iVar3==5) || iVar3==8){
}else{
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((iParam4 >=0 && iParam4 <=15) || (iParam4 >=16 && iParam4 <=31)) || (iParam4 >=32 && iParam4 <=47)) || (iParam4 >=80 && iParam4 <=95)) || (iParam4 >=128 && iParam4 <=143)) || iParam4==240) || iVar5==0) || iVar5==1) || iVar5==2) || iVar5==5) || iVar5==8) || iVar5==15){
}else{
return 0;
}}elseif(iParam8 !=-99){
if(!(iParam8 >=1 && iParam8 <=41)){
}else{
return 0;
}}}elseif((iParam1 >=10 && iParam1 <=25) || iVar1==4){
if(iParam3 !=-99){
if((((((((((((((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=16 && iParam3 <=31)) || (iParam3 >=32 && iParam3 <=47)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=124 && iParam3 <=139)) || (iParam3 >=140 && iParam3 <=155)) || (iParam3 >=172 && iParam3 <=187)) || (iParam3 >=204 && iParam3 <=219)) || iParam3==236) || iVar3==0) || iVar3==1) || iVar3==2) || iVar3==5) || iVar3==8) || iVar3==9) || iVar3==11) || iVar3==13) || iVar3==15){
}else{
return 0;
}}}elseif((iParam1 >=32 && iParam1 <=37) || iVar1==6){
if(iParam3 !=-99){
if((((iParam3 >=96 && iParam3 <=107) || (iParam3 >=156 && iParam3 <=171)) || iVar3==6) || iVar3==10){
}else{
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("high_roller_tie"), 0)){
if(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0)){
}else{
return 0;
}}}elseif(((((iParam1 >=41 && iParam1 <=56) || (iParam1 >=73 && iParam1 <=88)) || iVar1==10) || iVar1==12) || (iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tie"), 0))){
if(iParam3 !=-99){
if(((iParam3 >=204 && iParam3 <=219) || func_436(iParam0, iParam3, -1)) || iVar3==13){
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("sweat_vest"), 0)){
return 0;
}}else{
return 0;
}}elseif(iParam4 !=-99){
if((((((iParam4 >=160 && iParam4 <=175) || (iParam4 >=208 && iParam4 <=223)) || iVar5==10) || iVar5==13) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_shirt"), 0))){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0)){
return 0;
}}else{
iVar0=func_311(iParam6, 11);
if((iVar0 >=204 && iVar0 <=219) || (iVar0 >=237 && func_432(func_320(iParam0, iVar0, 11, 3))==13)){
return 1;
}
if(iParam7==1){
if((iParam4 >=176 && iParam4 <=191) || iVar5==11){
return 1;
}}
return 0;
}}}elseif((iParam1 >=57 && iParam1 <=72) || iVar1==11){
if(iParam3 !=-99){
if(((((iParam3 >=204 && iParam3 <=219) || (iParam3 >=172 && iParam3 <=187)) || func_436(iParam0, iParam3, -1)) || iVar3==13) || iVar3==11){
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("sweat_vest"), 0)){
return 0;
}}else{
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((((((((iParam4 >=64 && iParam4 <=79) || (iParam4 >=96 && iParam4 <=111)) || (iParam4 >=160 && iParam4 <=175)) || (iParam4 >=208 && iParam4 <=223)) || iVar5==4) || iVar5==6) || iVar5==10) || iVar5==13) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("vest_shirt"), 0))) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_vest"), 0))) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_shirt"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6==joaat("dlc_mp_val_m_accs0_0")) || iVar6==joaat("dlc_mp_val_m_accs0_1")) || iVar6==joaat("dlc_mp_val_m_accs0_2")) || iVar6==joaat("dlc_mp_val_m_accs0_3")) || iVar6==joaat("dlc_mp_val_m_accs0_4")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0)){
return 0;
}}else{
iVar0=func_311(iParam6, 11);
if((iVar0 >=204 && iVar0 <=219) || (iVar0 >=237 && func_432(func_320(iParam0, iVar0, 11, 3))==13)){
return 1;
}
if(iParam7==1){
if((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=176 && iParam4 <=191)) || iVar5==3) || iVar5==7) || iVar5==11){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
return 1;
}
}}
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("vest_tie"), 0)){
if(iParam3 !=-99){
if((((((((((((((((((((((iParam3 >=172 && iParam3 <=187) || iVar3==11) || iVar4==-27166014) || iVar4==-273228435) || iVar4==-2118057713) || iVar4==-1809078812) || iVar4==-1522415600) || iVar4==-1212584705) || iVar4==-886664231) || iVar4==-646500230) || iVar4==-290891042) || iVar4==15400801) || iVar4==-485413449) || iVar4==-254359230) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_0"), 0)) || iVar4==joaat("dlc_mp_busi_m_jbib4_0")) || iVar4==joaat("dlc_mp_busi_m_jbib4_1")) || iVar4==joaat("dlc_mp_busi_m_jbib4_2")) || iVar4==joaat("dlc_mp_val_m_jbib0_0")) || iVar4==joaat("dlc_mp_val_m_jbib0_1")) || iVar4==joaat("dlc_mp_val_m_jbib0_2")) || iVar4==joaat("dlc_mp_val_m_jbib0_3")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("sweat_vest"), 0)){
}else{
return 0;
}}else{
return 0;
}}elseif(iParam4 !=-99){
if(((((((((((iParam4 >=64 && iParam4 <=79) || (iParam4 >=96 && iParam4 <=111)) || iVar5==4) || iVar5==6) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("vest_shirt"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6==joaat("dlc_mp_val_m_accs0_0")) || iVar6==joaat("dlc_mp_val_m_accs0_1")) || iVar6==joaat("dlc_mp_val_m_accs0_2")) || iVar6==joaat("dlc_mp_val_m_accs0_3")) || iVar6==joaat("dlc_mp_val_m_accs0_4")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0)){
return 0;
}}else{
if(iParam7==1){
if((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=176 && iParam4 <=191)) || iVar5==3) || iVar5==7) || iVar5==11){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
return 1;
}
}}
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_tie"), 0)){
if(iParam3 !=-99){
if(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tux_jacket"), 0)){
}else{
return 0;
}}elseif(iParam4 !=-99){
if(((iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_vest"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_tie_alt"), 0)) || (((iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_shirt"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_tie_alt"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0))){
}else{
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("loose_bowtie"), 0)){
if(iParam4 !=-99){
if(((((((((((((((((((((((((((((((((((((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=176 && iParam4 <=191)) || iVar6==joaat("dlc_mp_val_m_accs0_0")) || iVar6==joaat("dlc_mp_val_m_accs0_1")) || iVar6==joaat("dlc_mp_val_m_accs0_2")) || iVar6==joaat("dlc_mp_val_m_accs0_3")) || iVar6==joaat("dlc_mp_val_m_accs0_4")) || iVar6==joaat("dlc_mp_busi2_m_accs1_0")) || iVar6==joaat("dlc_mp_busi2_m_accs1_1")) || iVar6==joaat("dlc_mp_busi2_m_accs1_2")) || iVar6==joaat("dlc_mp_busi2_m_accs1_3")) || iVar6==joaat("dlc_mp_busi2_m_accs1_4")) || iVar6==joaat("dlc_mp_busi2_m_accs1_5")) || iVar6==joaat("dlc_mp_busi2_m_accs1_6")) || iVar6==joaat("dlc_mp_busi2_m_accs1_7")) || iVar6==joaat("dlc_mp_busi2_m_accs1_8")) || iVar6==joaat("dlc_mp_busi2_m_accs1_9")) || iVar6==joaat("dlc_mp_busi2_m_accs1_10")) || iVar6==joaat("dlc_mp_busi2_m_accs1_11")) || iVar6==joaat("dlc_mp_busi2_m_accs1_12")) || iVar6==joaat("dlc_mp_busi2_m_accs1_13")) || iVar6==joaat("dlc_mp_busi2_m_accs1_14")) || iVar6==joaat("dlc_mp_busi2_m_accs1_15")) || iVar6==joaat("dlc_mp_ind_m_special_0_0")) || iVar6==joaat("dlc_mp_ind_m_special_0_1")) || iVar6==joaat("dlc_mp_ind_m_special_2_0")) || iVar6==joaat("dlc_mp_ind_m_special_2_1")) || iVar6==joaat("dlc_mp_ind_m_special_2_2")) || iVar6==joaat("dlc_mp_ind_m_special_2_3")) || iVar6==joaat("dlc_mp_ind_m_special_2_4")) || iVar6==joaat("dlc_mp_ind_m_special_2_5")) || iVar6==joaat("dlc_mp_ind_m_special_2_6")) || iVar6==joaat("dlc_mp_ind_m_special_2_7")) || iVar6==joaat("dlc_mp_ind_m_special_2_8")) || iVar6==joaat("dlc_mp_biker_m_special_9_0")) || iVar6==joaat("dlc_mp_biker_m_special_9_1")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("heist_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("draw_11"), 0)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
}else{
return 0;
}}else{
if(iParam7==1){
if((((((iParam4 >=64 && iParam4 <=79) || (iParam4 >=96 && iParam4 <=111)) || (iParam4 >=160 && iParam4 <=175)) || iVar5==4) || iVar5==6) || iVar5==10){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
return 1;
}
}}
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("loose_tie"), 0)){
if(iParam3 !=-99){
if(((((iParam3 >=64 && iParam3 <=79) || (iParam3 >=156 && iParam3 <=171)) || iVar3==4) || iVar3==10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("open_jacket"), 0)){
}else{
return 0;
}}elseif(iParam4 !=-99){
if(((((((((((((((((((((((((((iParam4 >=176 && iParam4 <=191) || iVar6==joaat("dlc_mp_val_m_accs0_0")) || iVar6==joaat("dlc_mp_val_m_accs0_1")) || iVar6==joaat("dlc_mp_val_m_accs0_2")) || iVar6==joaat("dlc_mp_val_m_accs0_3")) || iVar6==joaat("dlc_mp_val_m_accs0_4")) || iVar6==joaat("dlc_mp_busi2_m_accs1_0")) || iVar6==joaat("dlc_mp_busi2_m_accs1_1")) || iVar6==joaat("dlc_mp_busi2_m_accs1_2")) || iVar6==joaat("dlc_mp_busi2_m_accs1_3")) || iVar6==joaat("dlc_mp_busi2_m_accs1_4")) || iVar6==joaat("dlc_mp_busi2_m_accs1_5")) || iVar6==joaat("dlc_mp_busi2_m_accs1_6")) || iVar6==joaat("dlc_mp_busi2_m_accs1_7")) || iVar6==joaat("dlc_mp_busi2_m_accs1_8")) || iVar6==joaat("dlc_mp_busi2_m_accs1_9")) || iVar6==joaat("dlc_mp_busi2_m_accs1_10")) || iVar6==joaat("dlc_mp_busi2_m_accs1_11")) || iVar6==joaat("dlc_mp_busi2_m_accs1_12")) || iVar6==joaat("dlc_mp_busi2_m_accs1_13")) || iVar6==joaat("dlc_mp_busi2_m_accs1_14")) || iVar6==joaat("dlc_mp_busi2_m_accs1_15")) || iVar6==joaat("dlc_mp_ind_m_special_0_0")) || iVar6==joaat("dlc_mp_ind_m_special_0_1")) || iVar6==joaat("dlc_mp_biker_m_special_9_0")) || iVar6==joaat("dlc_mp_biker_m_special_9_1")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("heist_draw_5"), 0)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
}else{
return 0;
}}else{
if(iParam7==1){
if((iParam4 >=160 && iParam4 <=175) || iVar5==10){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
return 1;
}
}}
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("slack_tie"), 0)){
if(iParam3 !=-99){
if(((((iParam3 >=64 && iParam3 <=79) || (iParam3 >=188 && iParam3 <=203)) || iVar3==12) || iVar3==4) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("open_jacket"), 0)){
}else{
return 0;
}}elseif(iParam4 !=-99){
if(((iParam4 >=192 && iParam4 <=207) || func_373(iVar6)) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("draw_12"), 0))){
}else{
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("scarf"), 0)){
if(iParam3 !=-99){
if((iParam3 >=172 && iParam3 <=187) || iVar3==11){
return 0;
}elseif((iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_4"), 0)) || (iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_16"), 0))){
return 0;
}elseif(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
return 0;
}}
if(iParam8 !=-99){
if(!(iParam8 >=1 && iParam8 <=41)){
}else{
return 0;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("headscarf"), 0)){
return 0;
}}}}elseif(iParam0==joaat("mp_f_freemode_01")){
iVar11=-1;
iVar12=-1;
if(Global_4539502==iParam1){
iVar12=Global_4539501;
iVar11=Global_4539500;
}elseif(iParam1 >=55){
iVar12=func_320(iParam0, iParam1, 7, 4);
iVar11=func_432(iVar12);
Global_4539502=iParam1;
Global_4539501=iVar12;
Global_4539500=iVar11;
}
iVar13=-1;
iVar14=-1;
if(Global_4539505==iParam3){
iVar14=Global_4539504;
iVar13=Global_4539503;
}elseif(iParam3 >=256){
iVar14=func_320(iParam0, iParam3, 11, 4);
iVar13=func_432(iVar14);
Global_4539505=iParam3;
Global_4539504=iVar14;
Global_4539503=iVar13;
}
iVar15=-1;
iVar16=-1;
if(Global_4539508==iParam4){
iVar16=Global_4539507;
iVar15=Global_4539506;
}elseif(iParam4 >=136){
iVar16=func_320(iParam0, iParam4, 8, 4);
iVar15=func_432(iVar16);
Global_4539508=iParam4;
Global_4539507=iVar16;
Global_4539506=iVar15;
}
iVar17=-1;
iVar18=-1;
if(Global_4539511==iParam10){
iVar18=Global_4539510;
iVar17=Global_4539509;
}elseif(iParam10 >=26){
iVar18=func_320(iParam0, iParam10, 1, 4);
iVar17=func_432(iVar18);
Global_4539511=iParam10;
Global_4539510=iVar18;
Global_4539509=iVar17;
}
iVar19=-1;
if(iParam9 >=327){
iVar19=func_320(iParam0, iParam9, 14, 4);
}
if(iParam3 !=-99){
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("morph_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("scuba_gear"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("cat_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("gorka_suit"), 0)){
if(iParam1 !=0){
return 0;
}}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("smug_draw_6"), 0)){
if(((((((iParam1==0 || (iParam1 >=13 && iParam1 <=18)) || iVar11==3) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("cuff"), 0))) || (iParam1 >=19 && iParam1 <=24)) || iVar11==4) || (iParam1 >=25 && iParam1 <=30)) || iVar11==5){
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0)){
if((((iParam1 >=1 && iParam1 <=12) || iVar11==1) || iVar11==2) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("earring"), 0))){
return 0;
}}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("hoop_necklace"), 0)){
if(func_436(iParam0, iParam3, -1)){
return 0;
}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("pilot_suit"), 0)){
if(iParam1 !=0 && !(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("pilot_suit"), 0))){
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("epsilon_chain_alt"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("arena_draw_0"), 0)){
return 1;
}else{
return 0;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("epsilon_chain"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("arena_draw_0"), 0)){
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("epsilon_chain_alt"), 0)){
if(iParam4==66){
return 1;
}else{
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 91564168, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 91564168, 0)){
return 1;
}else{
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 91564168, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 91564168, 0)){
return 1;
}else{
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1536943816, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -148268191, 0)){
return 1;
}else{
return 0;
}}}
if((iVar12==joaat("DLC_MP_APA_F_TEETH_0_0") || iVar12==653911448) || iVar12==-1519558015){
if(iParam9 !=-99){
switch (iVar19){
case 1446628467:
case -1938048778:
case 2041418586:
case -1342898200:
case 2026483804:
case -1977527541:
case -1670449242:
case -1385031204:
case -1088111295:
case -1530918836:
case -1221415631:
case -629869643:
case joaat("dlc_mp_exec_f_phead_1_0"):
case joaat("dlc_mp_stunt_f_phead_10_0"):
case joaat("dlc_mp_stunt_f_phead_10_1"):
case joaat("dlc_mp_stunt_f_phead_10_2"):
case joaat("dlc_mp_stunt_f_phead_10_3"):
case joaat("dlc_mp_stunt_f_phead_10_4"):
case joaat("dlc_mp_stunt_f_phead_10_5"):
case joaat("dlc_mp_stunt_f_phead_10_6"):
case joaat("dlc_mp_stunt_f_phead_10_7"):
case joaat("dlc_mp_stunt_f_phead_10_8"):
case joaat("dlc_mp_stunt_f_phead_10_9"):
case joaat("dlc_mp_stunt_f_phead_10_10"):
case joaat("dlc_mp_stunt_f_phead_10_11"):
case joaat("dlc_mp_stunt_f_phead_10_12"):
case joaat("dlc_mp_stunt_f_phead_10_13"):
case joaat("dlc_mp_stunt_f_phead_10_14"):
case joaat("dlc_mp_stunt_f_phead_10_15"):
case joaat("dlc_mp_stunt_f_phead_10_16"):
case joaat("dlc_mp_stunt_f_phead_10_17"):
case joaat("dlc_mp_stunt_f_phead_10_18"):
case joaat("dlc_mp_stunt_f_phead_10_19"):
case joaat("dlc_mp_stunt_f_phead_10_20"):
case joaat("dlc_mp_gr_f_phead_7_0"):
case joaat("dlc_mp_gr_f_phead_7_1"):
case joaat("dlc_mp_gr_f_phead_7_2"):
case joaat("dlc_mp_gr_f_phead_7_3"):
case joaat("dlc_mp_gr_f_phead_7_4"):
case joaat("dlc_mp_gr_f_phead_7_5"):
case joaat("dlc_mp_gr_f_phead_7_6"):
case joaat("dlc_mp_gr_f_phead_7_7"):
case joaat("dlc_mp_gr_f_phead_7_8"):
case joaat("dlc_mp_gr_f_phead_7_9"):
case joaat("dlc_mp_gr_f_phead_7_10"):
return 0;
break;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0)){
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("over_jacket"), 0)){
return 0;
}}
if(iParam3 !=-99){
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("scarf"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("jacket_scarf"), 0)){
if((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("block_scarfs"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("air_draw_0"), 0)){
return 0;
}elseif(func_374(iParam0, iParam3)){
}else{
return 0;
}}elseif(func_374(iParam0, iParam3) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("block_scarfs"), 0)){
return 0;
}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0)){
return 0;
}}}
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("luxe_scarf"), 0)){
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe2_draw_1"), 0)){
}else{
return 0;
}}}elseif(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("scarf"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("block_scarfs"), 0)){
return 0;
}}elseif(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("chain"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("block_chains"), 0)){
return 0;
}}
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("pilot_suit"), 0)){
if(iParam9 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1)){
}elseif(iParam2==14 || (iParam2==1 && iParam10 !=0)){
return 0;
}}elseif((iParam9 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1)) && iParam1 !=0){
return 0;
}
if((((iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("scarf"), 0)) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("big_chain"), 0))) || (iParam1 >=43 && iParam1 <=48)) || iVar11==8){
if(iParam11 !=-99){
iVar20=-1;
if(iParam11 >=256){
iVar20=func_320(iParam0, iParam11, 4, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("dungarees"), 0)){
return 0;
}}}
if(iVar12 !=-1 && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tie"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("bowtie"), 0))){
if(iParam2==11){
if((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_9"), 0)) || (iParam3 >=112 && iParam3 <=127)) || iVar13==7){
}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 144417099, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("bowtie"), 0)){
}else{
return 0;
}}else{
return 0;
}}elseif(iParam2==8){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("open_collar"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("closed_collar"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tie"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_9"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_tie"), 0)){
}else{
return 0;
}
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_tie"), 0)){
return 0;
}}}else{
return 0;
}}}
if(iParam9 !=-99){
if((iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("earring"), 1)) || (iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("block_earrings"), 1))){
if((((iParam1 >=1 && iParam1 <=12) || iVar11==1) || iVar11==2) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("earring"), 0))){
return 0;
}}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("hoop_necklace"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("dress"), 0)){
return 1;
}}
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("chain"), 0)){
if(iParam3 !=-99){
if(((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("block_chains"), 0)){
return 0;
}elseif(func_436(iParam0, iParam3, -1)){
}elseif((((((((((((((((((((iParam3 >=32 && iParam3 <=47) || (iParam3 >=176 && iParam3 <=191)) || iVar13==2) || iVar13==11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("exec_draw_14"), 0)) || iVar14==joaat("dlc_mp_ind_f_jbib_1_0")) || iVar14==joaat("dlc_mp_ind_f_jbib_1_1")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smug_draw_5"), 0)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_chain"), 0)){
return 0;
}}elseif(((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=144 && iParam3 <=159)) || (iParam3 >=224 && iParam3 <=239)) || iVar13==3) || iVar13==9) || iVar13==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("dress"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest_shirt"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("pilot_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("xmas2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1103045158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 891044832, 0)){
return 0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_chain"), 0)){
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >=71 && iParam4 <=86) || iVar15==11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("OFF_SHOULDER_ACCS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_11"), 0)) || iVar16==joaat("dlc_mp_heist_f_special_12_0")) || iVar16==joaat("dlc_mp_heist_f_special_12_1")) || iVar16==joaat("dlc_mp_hips_f_accs3_0")) || iVar16==joaat("dlc_mp_hips_f_accs3_1")) || iVar16==joaat("dlc_mp_hips_f_accs3_2")) || iVar16==joaat("dlc_mp_hips_f_accs3_3")) || iVar16==joaat("dlc_mp_val_f_accs0_0")) || iVar16==joaat("dlc_mp_val_f_accs0_1")) || iVar16==joaat("dlc_mp_val_f_accs0_2")) || iVar16==joaat("dlc_mp_val_f_accs1_0")) || iVar16==joaat("dlc_mp_val_f_accs1_1")) || iVar16==joaat("dlc_mp_val_f_accs1_2")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("apart_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("smug_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("block_chains"), 0)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_chain"), 0)){
return 0;
}}elseif(((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("vest_shirt"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1353777856, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("apart_draw_1"), 0)){
return 0;
}elseif(func_433(iParam0, iParam4, 0) !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_chain"), 0)){
return 0;
}}}
if(iParam8 !=-99){
if(!(iParam8 >=1 && iParam8 <=31)){
}else{
return 0;
}}}
if(iParam3 !=-99){
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("bead_necklace"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_21"), 0)){
return 1;
}else{
return 0;
}}}
if(((iParam1 >=13 && iParam1 <=18) || iVar11==3) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("cuff"), 0))){
if(iParam3 !=-99){
if(((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=112 && iParam3 <=127)) || (iParam3 >=160 && iParam3 <=175)) || iVar13==3) || iVar13==7) || iVar13==10) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("long_sleeve"), 0))){
return 0;
}}elseif(iParam4 !=-99){
if(iParam4 >=136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0)){
return 0;
}}elseif(iParam9 !=-99){
if(iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("cuff"), 1)){
return 0;
}}}elseif((iParam1 >=19 && iParam1 <=24) || iVar11==4){
if(iParam3 !=-99){
if(((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=112 && iParam3 <=127)) || (iParam3 >=160 && iParam3 <=175)) || iVar13==3) || iVar13==7) || iVar13==10) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("long_sleeve"), 0))){
return 0;
}}elseif(iParam4 !=-99){
if(iParam4 >=136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0)){
return 0;
}}elseif(iParam9 !=-99){
if(iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("cuff"), 1)){
FILES::GET_SHOP_PED_PROP(iVar19, &Var21);
if(Var21.f_6==7){
return 0;
}}}}elseif((iParam1 >=25 && iParam1 <=30) || iVar11==5){
if(iParam3 !=-99){
if(((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=112 && iParam3 <=127)) || (iParam3 >=160 && iParam3 <=175)) || iVar13==3) || iVar13==7) || iVar13==10) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("long_sleeve"), 0))){
return 0;
}}elseif(iParam4 !=-99){
if(iParam4 >=136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_320(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0)){
return 0;
}}elseif(iParam9 !=-99){
if(iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("cuff"), 1)){
return 0;
}}}elseif((iParam1 >=31 && iParam1 <=36) || iVar11==6){
if(iParam3 !=-99){
if((((((((((((((((((((((((((((((((((((((((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=144 && iParam3 <=159)) || (iParam3 >=224 && iParam3 <=239)) || iVar13==3) || iVar13==9) || iVar13==14) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest_shirt"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_3"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_4"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_0"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("exec_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("biker_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("biker_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("biker_draw_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("morph_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("assault_draw_0"), 0)){
return 0;
}}}elseif(((iParam1 >=37 && iParam1 <=42) || iVar11==7) || (iParam1 >=55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("long_necklace"), 0))){
if(iParam3 !=-99){
if(((((((((((((((((((((((((((((((((((((((((((((iParam3 >=32 && iParam3 <=47) || (iParam3 >=48 && iParam3 <=63)) || (iParam3 >=144 && iParam3 <=159)) || (iParam3 >=224 && iParam3 <=239)) || iVar13==2) || iVar13==3) || iVar13==9) || iVar13==14) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_3"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("draw_0"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_4"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_0"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_3"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest_shirt"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("exec_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("biker_draw_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("block_chains"), 0)){
return 0;
}elseif(((((((((((iParam3 >=112 && iParam3 <=127) || (iParam3 >=160 && iParam3 <=175)) || (iParam3 >=192 && iParam3 <=207)) || iVar13==7) || iVar13==10) || iVar13==12) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("long_sleeve"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)){
if(iParam1 >=55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("long_necklace"), 0)){
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("vest_shirt"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("long_necklace"), 0)){
return 0;
}}elseif(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_4"), 0)){
return 0;
}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("ALT_SPECIAL_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("alt_special_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("alt_special_6"), 0)){
return 0;
}}elseif(iParam9 !=-99){
if(iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("cuff"), 1)){
return 0;
}}}elseif((iParam1 >=43 && iParam1 <=48) || iVar11==8){
if(iParam3 !=-99){
if((((((((((((((((((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=32 && iParam3 <=47)) || (iParam3 >=64 && iParam3 <=79)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=144 && iParam3 <=159)) || (iParam3 >=176 && iParam3 <=191)) || (iParam3 >=192 && iParam3 <=207)) || (iParam3 >=208 && iParam3 <=223)) || (iParam3 >=240 && iParam3 <=255)) || iVar13==0) || iVar13==2) || iVar13==4) || iVar13==5) || iVar13==9) || iVar13==11) || iVar13==12) || iVar13==13) || iVar13==15) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("dress"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_sweat"), 0))){
}else{
return 0;
}}}elseif((iParam1 >=49 && iParam1 <=54) || iVar11==9){
if(iParam3 !=-99){
if((((((((((((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=64 && iParam3 <=79)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=176 && iParam3 <=191)) || (iParam3 >=192 && iParam3 <=207)) || (iParam3 >=208 && iParam3 <=223)) || (iParam3 >=240 && iParam3 <=255)) || iVar13==0) || iVar13==4) || iVar13==5) || iVar13==11) || iVar13==12) || iVar13==13) || iVar13==15) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("dress"), 0))){
}else{
return 0;
}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("sweat_vest"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("basic_vest"), 0)){
return 0;
}elseif(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_4"), 0)){
return 0;
}}
if(iParam8 !=-99){
if(!(iParam8 >=1 && iParam8 <=31)){
}else{
return 0;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0)){
return 0;
}}}elseif(iParam1 >=55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("high_roller_tie"), 0)){
if(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("high_roller_shirt"), 0)){
}else{
return 0;
}}}elseif(iParam1 >=55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("braces"), 0)){
if(iParam3 !=-99){
if(iVar14 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)){
return 1;
}else{
return 0;
}}
if(iParam11 !=-99){
iVar22=-1;
if(iParam11 >=256){
iVar22=func_320(iParam0, iParam11, 4, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("high_waist"), 0)){
return 1;
}else{
return 0;
}}}}
return 1;
}

int func_373(int iParam0){
if(iParam0 !=-1){
return 0;
}
switch (iParam0){
case joaat("dlc_mp_busi_m_accs4_0"):
case joaat("dlc_mp_busi_m_accs5_0"):
case joaat("dlc_mp_busi_m_accs4_1"):
case joaat("dlc_mp_busi_m_accs5_1"):
case joaat("dlc_mp_busi_m_accs4_2"):
case joaat("dlc_mp_busi_m_accs5_2"):
case joaat("dlc_mp_busi_m_accs4_3"):
case joaat("dlc_mp_busi_m_accs5_3"):
case joaat("dlc_mp_busi_m_accs4_4"):
case joaat("dlc_mp_busi_m_accs5_4"):
case joaat("dlc_mp_busi_m_accs4_5"):
case joaat("dlc_mp_busi_m_accs5_5"):
case joaat("dlc_mp_busi_m_accs4_6"):
case joaat("dlc_mp_busi_m_accs5_6"):
case joaat("dlc_mp_busi_m_accs4_7"):
case joaat("dlc_mp_busi_m_accs5_7"):
case joaat("dlc_mp_busi_m_accs4_8"):
case joaat("dlc_mp_busi_m_accs5_8"):
case joaat("dlc_mp_busi_m_accs4_9"):
case joaat("dlc_mp_busi_m_accs5_9"):
case joaat("dlc_mp_busi_m_accs4_10"):
case joaat("dlc_mp_busi_m_accs5_10"):
case joaat("dlc_mp_busi_m_accs4_11"):
case joaat("dlc_mp_busi_m_accs5_11"):
case joaat("dlc_mp_busi_m_accs4_12"):
case joaat("dlc_mp_busi_m_accs5_12"):
case joaat("dlc_mp_busi_m_accs4_13"):
case joaat("dlc_mp_busi_m_accs5_13"):
case joaat("dlc_mp_busi_m_accs4_14"):
case joaat("dlc_mp_busi_m_accs5_14"):
case joaat("dlc_mp_busi_m_accs4_15"):
case joaat("dlc_mp_busi_m_accs5_15"):
return 1;
break;
}
return 0;
}

int func_374(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(iParam0==joaat("mp_m_freemode_01")){
iVar0=func_320(iParam0, iParam1, 11, 3);
if(iVar0 !=-1){
if(((((((((((((((((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("jan_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("jan_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("use_jacket_scarf"), 0)){
return 1;
}}
if(iVar0 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_pyjamas"), 0)){
return 1;
}}
return func_436(iParam0, iParam1, -1);
}elseif(iParam0==joaat("mp_f_freemode_01")){
iVar1=func_320(iParam0, iParam1, 11, 4);
iVar2=-1;
if(iVar1 !=-1){
iVar2=func_432(iVar1);
}
if(((((((((((((((((((((((((((((((((((((iParam1 >=16 && iParam1 < 32) || (iParam1 >=48 && iParam1 < 64)) || (iParam1 >=96 && iParam1 < 112)) || (iParam1 >=112 && iParam1 < 128)) || (iParam1 >=128 && iParam1 < 144)) || (iParam1 >=144 && iParam1 < 160)) || (iParam1 >=160 && iParam1 < 176)) || (iParam1 >=224 && iParam1 < 240)) || iVar2==1) || iVar2==3) || iVar2==6) || iVar2==7) || iVar2==8) || iVar2==9) || iVar2==10) || iVar2==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("air_draw_0"), 0)){
return 1;
}}
return 0;
}


void func_375(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
func_427(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
iVar1=func_426(iVar0, iParam1);
if(iVar1 !=-1){
if(iParam2==-1){
iParam2=Global_78338;
}
func_452(iVar1, 1, iParam2);
}
func_376(iParam0, bParam3, 0, -1);
}


void func_376(int iParam0, bool bParam1, bool bParam2, int iParam3){
int iVar0;
struct<9> Var1;
int iVar2;
bool bVar3;
bool bVar4;
bool bVar5;
int iVar6;
int iVar7;
int iVar8;
struct<8> Var9;
int iVar10;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=Global_78338;
PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
iVar2=func_425(iParam0);
bVar3=func_420(iParam0, 0);
bVar4=func_412(iParam0);
bVar5=func_411(iParam0, iParam3);
if(bParam1){
bVar4=true;
}
if(bParam2){
bVar4=false;
}
iVar6=0;
while (iVar6 < 127){
if(func_408(iVar6, iVar0)){
if(func_403(&Var1, iVar6, iVar2, iParam0, -1)){
if(func_400(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
}}}
iVar6++;
}
if(func_408(123, iVar0)){
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) !=7){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
}}
iVar8=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
iVar7=0;
while (iVar7 < iVar8){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0)){
iVar10=(129 + iVar7);
if(func_408(iVar10, iVar0)){
if(func_400(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5)){
if(!func_378(Var9.f_2, Var9.f_3, iVar10)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
func_377(iParam0, Var9.f_2, Var9.f_3);
}
}}}}
iVar7++;
}}}


void func_377(int iParam0, int iParam1, int iParam2){
switch (iParam1){
case 1841427399:
switch (iParam2){
case -507124931:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1841427399, -435695677);
break;
case -2045170715:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1841427399, 1684098164);
break;
}
break;
case joaat("mpsecurity_overlays"):
switch (iParam2){
case -1698823936:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpsecurity_overlays"), -1282588017);
break;
case 543067199:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpsecurity_overlays"), 884393080);
break;
}
break;
case joaat("mptuner_overlays"):
switch (iParam2){
case -129339642:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1959383570);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case 887263619:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case -598443208:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -1160700813);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case -619123295:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case -2139930425:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case 991513037:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 847416951);
break;
case -675149090:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 847416951);
break;
case 2021781367:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -1625184579);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -436866133:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case 457275657:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 429414924);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -250832592:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -798760789:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -1634791241:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -2021672848);
break;
case -1227437948:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -2021672848);
break;
}
break;
case joaat("mpheist4_overlays"):
switch (iParam2){
case joaat("MP_Heist4_Tee_039_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_M"));
break;
case joaat("MP_Heist4_Tee_041_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_M"));
break;
case joaat("MP_Heist4_Tee_043_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_M"));
break;
case joaat("MP_Heist4_Tee_049_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_M"));
break;
case joaat("MP_Heist4_Tee_051_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_M"));
break;
case joaat("MP_Heist4_Tee_055_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_M"));
break;
case joaat("MP_Heist4_Tee_057_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_M"));
break;
case joaat("MP_Heist4_Tee_059_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_M"));
break;
case joaat("MP_Heist4_Tee_061_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_M"));
break;
case joaat("MP_Heist4_Tee_063_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_M"));
break;
case joaat("MP_Heist4_Tee_065_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_M"));
break;
case joaat("MP_Heist4_Tee_039_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_F"));
break;
case joaat("MP_Heist4_Tee_041_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_F"));
break;
case joaat("MP_Heist4_Tee_043_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_F"));
break;
case joaat("MP_Heist4_Tee_049_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_F"));
break;
case joaat("MP_Heist4_Tee_051_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_F"));
break;
case joaat("MP_Heist4_Tee_055_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_F"));
break;
case joaat("MP_Heist4_Tee_057_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_F"));
break;
case joaat("MP_Heist4_Tee_059_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_F"));
break;
case joaat("MP_Heist4_Tee_061_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_F"));
break;
case joaat("MP_Heist4_Tee_063_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_F"));
break;
case joaat("MP_Heist4_Tee_065_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_F"));
break;
}
break;
case joaat("mpVinewood_overlays"):
switch (iParam2){
case joaat("CasinoTop_M_0"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
break;
case joaat("CasinoTop_M_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
break;
case joaat("CasinoTop_M_2"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
break;
case joaat("CasinoTop_M_3"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
break;
case joaat("CasinoTop_M_4"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
break;
case joaat("CasinoTop_M_5"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
break;
case joaat("CasinoTop_M_6"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
break;
case joaat("CasinoTop_M_7"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
break;
case joaat("CasinoTop_M_8"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
break;
case joaat("CasinoTop_M_9"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
break;
case joaat("CasinoTop_M_10"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
break;
case joaat("CasinoTop_M_11"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
break;
case joaat("CasinoTop_M_12"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
break;
case joaat("CasinoTop_M_13"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
break;
case joaat("CasinoTop_M_14"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
break;
case joaat("CasinoTop_M_15"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
break;
case joaat("CasinoTop_M_16"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
break;
case joaat("CasinoTop_M_17"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
break;
case joaat("CasinoTop_M_18"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
break;
case joaat("CasinoTop_M_19"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
break;
case joaat("CasinoTop_M_20"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
break;
case joaat("CasinoTop_M_21"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
break;
case joaat("CasinoTop_M_22"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
break;
case joaat("CasinoTop_M_23"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
break;
case joaat("CasinoTop_M_24"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
break;
case joaat("CasinoTop_M_25"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
break;
case joaat("CasinoTop_M_26"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
break;
case joaat("CasinoTop_M_27"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
break;
case joaat("CasinoTop_M_28"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
break;
case joaat("CasinoTop_M_29"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
break;
case joaat("CasinoTop_M_30"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
break;
case joaat("CasinoTop_M_31"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
break;
case joaat("CasinoTop_M_32"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
break;
case joaat("CasinoTop_M_33"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
break;
case joaat("CasinoTop_M_34"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
break;
case joaat("CasinoTop_M_35"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
break;
case joaat("CasinoTop_M_36"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
break;
case joaat("CasinoTop_M_37"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
break;
case joaat("CasinoTop_M_38"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
break;
case joaat("CasinoTop_M_39"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
break;
case joaat("CasinoTop_M_40"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
break;
case joaat("CasinoTop_M_41"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
break;
case joaat("CasinoTop_M_42"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
break;
case joaat("CasinoTop_M_43"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
break;
case joaat("CasinoTop_M_44"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
break;
}
switch (iParam2){
case joaat("CasinoTop_F_0"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
break;
case joaat("CasinoTop_F_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
break;
case joaat("CasinoTop_F_2"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
break;
case joaat("CasinoTop_F_3"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
break;
case joaat("CasinoTop_F_4"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
break;
case joaat("CasinoTop_F_5"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
break;
case joaat("CasinoTop_F_6"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
break;
case joaat("CasinoTop_F_7"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
break;
case joaat("CasinoTop_F_8"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
break;
case joaat("CasinoTop_F_9"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
break;
case joaat("CasinoTop_F_10"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
break;
case joaat("CasinoTop_F_11"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
break;
case joaat("CasinoTop_F_12"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
break;
case joaat("CasinoTop_F_13"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
break;
case joaat("CasinoTop_F_14"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
break;
case joaat("CasinoTop_F_15"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
break;
case joaat("CasinoTop_F_16"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
break;
case joaat("CasinoTop_F_17"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
break;
case joaat("CasinoTop_F_18"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
break;
case joaat("CasinoTop_F_19"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
break;
case joaat("CasinoTop_F_20"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
break;
case joaat("CasinoTop_F_21"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
break;
case joaat("CasinoTop_F_22"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
break;
case joaat("CasinoTop_F_23"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
break;
case joaat("CasinoTop_F_24"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
break;
case joaat("CasinoTop_F_25"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
break;
case joaat("CasinoTop_F_26"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
break;
case joaat("CasinoTop_F_27"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
break;
case joaat("CasinoTop_F_28"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
break;
case joaat("CasinoTop_F_29"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
break;
case joaat("CasinoTop_F_30"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
break;
case joaat("CasinoTop_F_31"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
break;
case joaat("CasinoTop_F_32"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
break;
case joaat("CasinoTop_F_33"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
break;
case joaat("CasinoTop_F_34"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
break;
case joaat("CasinoTop_F_35"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
break;
case joaat("CasinoTop_F_36"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
break;
case joaat("CasinoTop_F_37"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
break;
case joaat("CasinoTop_F_38"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
break;
case joaat("CasinoTop_F_39"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
break;
case joaat("CasinoTop_F_40"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
break;
case joaat("CasinoTop_F_41"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
break;
case joaat("CasinoTop_F_42"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
break;
case joaat("CasinoTop_F_43"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
break;
case joaat("CasinoTop_F_44"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
break;
}
break;
case joaat("mpBattle_overlays"):
switch (iParam2){
case joaat("MP_Battle_Clothing_000_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
break;
}
switch (iParam2){
case joaat("MP_Battle_Clothing_000_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
break;
}
break;
case joaat("mpSmuggler_overlays"):
switch (iParam2){
case joaat("M_TankTop_Smug_5_3_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
break;
case joaat("M_TankTop_Smug_5_17_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
break;
case joaat("M_TankTop_Smug_5_10_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
break;
case joaat("M_TankTop_Smug_5_11_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
break;
case joaat("M_TankTop_Smug_5_12_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
break;
case joaat("M_TankTop_Smug_5_13_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
break;
case joaat("M_TankTop_Smug_5_20_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
break;
case joaat("M_TankTop_Smug_5_21_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
break;
case joaat("M_TankTop_Smug_5_23_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
break;
case joaat("M_TankTop_Smug_5_22_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
break;
case joaat("M_TankTop_Smug_5_5_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
break;
case joaat("M_TankTop_Smug_5_18_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
break;
case joaat("M_TankTop_Smug_5_0_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
break;
case joaat("M_TankTop_Smug_5_3_b"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
break;
case joaat("M_TankTop_Smug_5_25_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
break;
case joaat("M_TankTop_Smug_5_7_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
break;
case joaat("M_TankTop_Smug_5_4_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
break;
case joaat("M_TankTop_Smug_5_1_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
break;
case joaat("M_TankTop_Smug_5_9_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
break;
}
switch (iParam2){
case joaat("F_TankTop_Smug_5_3_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
break;
case joaat("F_TankTop_Smug_5_17_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
break;
case joaat("F_TankTop_Smug_5_10_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
break;
case joaat("F_TankTop_Smug_5_11_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
break;
case joaat("F_TankTop_Smug_5_12_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
break;
case joaat("F_TankTop_Smug_5_13_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
break;
case joaat("F_TankTop_Smug_5_20_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
break;
case joaat("F_TankTop_Smug_5_21_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
break;
case joaat("F_TankTop_Smug_5_23_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
break;
case joaat("F_TankTop_Smug_5_22_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
break;
case joaat("F_TankTop_Smug_5_5_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
break;
case joaat("F_TankTop_Smug_5_18_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
break;
case joaat("F_TankTop_Smug_5_0_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
break;
case joaat("F_TankTop_Smug_5_3_b"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
break;
case joaat("F_TankTop_Smug_5_25_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
break;
case joaat("F_TankTop_Smug_5_7_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
break;
case joaat("F_TankTop_Smug_5_4_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
break;
case joaat("F_TankTop_Smug_5_1_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
break;
case joaat("F_TankTop_Smug_5_9_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
break;
}
break;
case joaat("mpGunrunning_overlays"):
switch (iParam2){
case joaat("MP_Gunrunning_Award_020_M_ALT"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
break;
case joaat("MP_Gunrunning_Award_020_F_ALT"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
break;
}
break;
case joaat("mpExecutive_overlays"):
switch (iParam2){
case joaat("MP_Securoserv_000_Mb"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
break;
case joaat("MP_Securoserv_000_Fb"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
break;
}
break;
case joaat("mpHeist_overlays"):
switch (iParam2){
case joaat("MP_Elite_M_Tshirt_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
break;
case joaat("MP_Elite_F_Tshirt_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
break;
}
break;
case joaat("mpLuxe2_overlays"):
switch (iParam2){
case joaat("MP_LUXE_TAT_029_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_M"));
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_M"));
break;
case joaat("MP_LUXE_TAT_029_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_F"));
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_F"));
break;
}
break;
}}

int func_378(int iParam0, int iParam1, int iParam2){
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
int iVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
int iVar19;
switch (iParam0){
case 1841427399:
switch (iParam1){
case -507124931:
case -2045170715:
if(func_399(36717, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-507124931);
break;
case -187038898:
case 524638244:
if(func_399(36767, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-187038898);
break;
case 1797082704:
case -757817895:
if(func_399(36766, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1797082704);
break;
case 1959890413:
case 1506629605:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1959890413);
break;
case 1167984459:
case 568901597:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1167984459);
break;
case 1006005360:
case 1403427788:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1006005360);
break;
case -1295693571:
case -1940685798:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1295693571);
break;
case -1825141795:
case 1441861967:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1825141795);
break;
case 61080464:
case -1941007133:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==61080464);
break;
case -1622071979:
case -1216457341:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1622071979);
break;
case -899024637:
case 141030546:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-899024637);
break;
case -569499773:
case 2065160600:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-569499773);
break;
case -665339429:
case 222569387:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-665339429);
break;
case 858185772:
case -1269669251:
if(Global_262145.f_34056){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==858185772);
break;
}
break;
}
switch (iParam0){
case 987639353:
switch (iParam1){
case 1529075272:
case 28812113:
if(func_399(34505, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1529075272);
break;
case 1769388797:
case 183205348:
if(func_399(34375, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1769388797);
break;
}
break;
}
switch (iParam0){
case joaat("mptuner_overlays"):
switch (iParam1){
case -129339642:
case 2021781367:
if(func_394(116, -1) >=func_393(116, 5, 9) || func_399(31760, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-129339642);
break;
case 887263619:
case -436866133:
if(func_392(123, -1) || func_399(31761, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==887263619);
break;
case -598443208:
case 457275657:
if(func_392(124, -1) || func_399(31762, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-598443208);
break;
case -619123295:
case -250832592:
if(func_392(125, -1) || func_399(31763, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-619123295);
break;
case -2139930425:
case -798760789:
if(func_392(126, -1) || func_399(31764, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-2139930425);
break;
case 991513037:
case -1634791241:
if(func_399(31768, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==991513037);
break;
case -675149090:
case -1227437948:
if(func_399(31769, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-675149090);
break;
case -1686814509:
case -1408179706:
if(func_399(31770, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1686814509);
break;
case 2138708412:
case -1894139601:
if(func_399(31771, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==2138708412);
break;
case 205793848:
case -786254870:
if(func_399(31772, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==205793848);
break;
case 1325175663:
case -773154515:
if(func_399(31773, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1325175663);
break;
case -368088972:
case 1778247767:
if(func_399(31774, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-368088972);
break;
case -1771053026:
case -648092145:
if(func_399(31775, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1771053026);
break;
}
break;
}
switch (iParam0){
case joaat("mpheist4_overlays"):
switch (iParam1){
case joaat("MP_Heist4_Tee_030_M"):
case joaat("MP_Heist4_Tee_030_F"):
if(func_399(30533, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_030_M"));
break;
case joaat("MP_Heist4_Tee_032_M"):
case joaat("MP_Heist4_Tee_032_F"):
if(func_399(30534, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_032_M"));
break;
case joaat("MP_Heist4_Tee_028_M"):
case joaat("MP_Heist4_Tee_028_F"):
if(func_399(30535, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_028_M"));
break;
case joaat("MP_Heist4_Tee_029_M"):
case joaat("MP_Heist4_Tee_029_F"):
if(func_399(30536, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_029_M"));
break;
case joaat("MP_Heist4_Tee_031_M"):
case joaat("MP_Heist4_Tee_031_F"):
if(func_399(30537, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_031_M"));
break;
case joaat("MP_Heist4_Tee_022_M"):
case joaat("MP_Heist4_Tee_022_F"):
if(func_399(30538, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_022_M"));
break;
case joaat("MP_Heist4_Tee_023_M"):
case joaat("MP_Heist4_Tee_023_F"):
if(func_399(30539, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_023_M"));
break;
case joaat("MP_Heist4_Tee_020_M"):
case joaat("MP_Heist4_Tee_020_F"):
if(func_399(30540, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_020_M"));
break;
case joaat("MP_Heist4_Tee_021_M"):
case joaat("MP_Heist4_Tee_021_F"):
if(func_399(30541, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_021_M"));
break;
case joaat("MP_Heist4_Tee_003_M"):
case joaat("MP_Heist4_Tee_003_F"):
if(func_399(30542, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_003_M"));
break;
case joaat("MP_Heist4_Tee_004_M"):
case joaat("MP_Heist4_Tee_004_F"):
if(func_399(30543, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_004_M"));
break;
case joaat("MP_Heist4_Tee_005_M"):
case joaat("MP_Heist4_Tee_005_F"):
if(func_399(30544, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_005_M"));
break;
case joaat("MP_Heist4_Tee_006_M"):
case joaat("MP_Heist4_Tee_006_F"):
if(func_399(30545, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_006_M"));
break;
case joaat("MP_Heist4_Tee_027_M"):
case joaat("MP_Heist4_Tee_027_F"):
if(func_399(30546, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_027_M"));
break;
case joaat("MP_Heist4_Tee_026_M"):
case joaat("MP_Heist4_Tee_026_F"):
if(func_399(30547, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_026_M"));
break;
case joaat("MP_Heist4_Tee_025_M"):
case joaat("MP_Heist4_Tee_025_F"):
if(func_399(30548, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_025_M"));
break;
case joaat("MP_Heist4_Tee_024_M"):
case joaat("MP_Heist4_Tee_024_F"):
if(func_399(30549, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_024_M"));
break;
case joaat("MP_Heist4_Tee_002_M"):
case joaat("MP_Heist4_Tee_002_F"):
if(func_399(30550, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_002_M"));
break;
case joaat("MP_Heist4_Tee_001_M"):
case joaat("MP_Heist4_Tee_001_F"):
if(func_399(30551, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_001_M"));
break;
case joaat("MP_Heist4_Tee_000_M"):
case joaat("MP_Heist4_Tee_000_F"):
if(func_399(30552, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_000_M"));
break;
case joaat("MP_Heist4_Tee_007_M"):
case joaat("MP_Heist4_Tee_007_F"):
if(func_399(30553, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_007_M"));
break;
case joaat("MP_Heist4_Tee_008_M"):
case joaat("MP_Heist4_Tee_008_F"):
if(func_399(30554, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_008_M"));
break;
case joaat("MP_Heist4_Tee_009_M"):
case joaat("MP_Heist4_Tee_009_F"):
if(func_399(30555, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_009_M"));
break;
case joaat("MP_Heist4_Tee_010_M"):
case joaat("MP_Heist4_Tee_010_F"):
if(func_399(30556, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_010_M"));
break;
case joaat("MP_Heist4_Tee_011_M"):
case joaat("MP_Heist4_Tee_011_F"):
if(func_399(30557, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_011_M"));
break;
case joaat("MP_Heist4_Tee_012_M"):
case joaat("MP_Heist4_Tee_012_F"):
if(func_399(30524, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_012_M"));
break;
case joaat("MP_Heist4_Tee_013_M"):
case joaat("MP_Heist4_Tee_013_F"):
if(func_399(30525, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_013_M"));
break;
case joaat("MP_Heist4_Tee_014_M"):
case joaat("MP_Heist4_Tee_014_F"):
if(func_399(30526, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_014_M"));
break;
case joaat("MP_Heist4_Tee_015_M"):
case joaat("MP_Heist4_Tee_015_F"):
if(func_399(30527, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_015_M"));
break;
case joaat("MP_Heist4_Tee_016_M"):
case joaat("MP_Heist4_Tee_016_F"):
if(func_399(30528, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_016_M"));
break;
case joaat("MP_Heist4_Tee_017_M"):
case joaat("MP_Heist4_Tee_017_F"):
if(func_399(30529, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_017_M"));
break;
case joaat("MP_Heist4_Tee_018_M"):
case joaat("MP_Heist4_Tee_018_F"):
if(func_399(30530, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_018_M"));
break;
case joaat("MP_Heist4_Tee_019_M"):
case joaat("MP_Heist4_Tee_019_F"):
if(func_399(30531, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_019_M"));
break;
case joaat("MP_Heist4_Tee_033_M"):
case joaat("MP_Heist4_Tee_033_F"):
if(func_399(30532, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_033_M"));
break;
case joaat("MP_Heist4_Tee_045_M"):
case joaat("MP_Heist4_Tee_045_F"):
if(func_399(30570, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_045_M"));
break;
case joaat("MP_Heist4_Tee_046_M"):
case joaat("MP_Heist4_Tee_046_F"):
if(func_399(30571, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_046_M"));
break;
case joaat("MP_Heist4_Tee_048_M"):
case joaat("MP_Heist4_Tee_048_F"):
if(func_399(30568, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_048_M"));
break;
case joaat("MP_Heist4_Tee_047_M"):
case joaat("MP_Heist4_Tee_047_F"):
if(func_399(30569, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_047_M"));
break;
case joaat("MP_Heist4_Tee_049_M"):
case joaat("MP_Heist4_Tee_049_F"):
if(func_399(30634, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_049_M"));
break;
case joaat("MP_Heist4_Tee_051_M"):
case joaat("MP_Heist4_Tee_051_F"):
if(func_399(30635, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_051_M"));
break;
case joaat("MP_Heist4_Tee_053_M"):
case joaat("MP_Heist4_Tee_053_F"):
if(func_399(30636, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_053_M"));
break;
case joaat("MP_Heist4_Tee_054_M"):
case joaat("MP_Heist4_Tee_054_F"):
if(func_399(30637, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_054_M"));
break;
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_055_F"):
if(func_399(30703, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_055_M"));
break;
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_057_F"):
if(func_399(30704, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_057_M"));
break;
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_059_F"):
if(func_399(30700, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_059_M"));
break;
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_061_F"):
if(func_399(30701, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_061_M"));
break;
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_063_F"):
if(func_399(30702, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_063_M"));
break;
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Heist4_Tee_065_F"):
if(func_399(30699, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_065_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case -1265443416:
case 676807987:
if(func_399(30260, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1265443416);
break;
case 1888753218:
case 272160153:
if(func_399(30261, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1888753218);
break;
case -552467991:
case 1593344440:
if(func_399(30262, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-552467991);
break;
case -1655919948:
case 546222390:
if(func_399(30263, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1655919948);
break;
case -917106601:
case 1983375900:
if(func_399(30264, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-917106601);
break;
case 1595446967:
case -620589387:
if(func_399(30265, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1595446967);
break;
case -530593323:
case 383923929:
if(func_399(30266, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-530593323);
break;
case 561619447:
case -1703406594:
if(func_399(30267, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==561619447);
break;
case -1913656173:
case -398286533:
if(func_399(30268, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1913656173);
break;
case -1766901922:
case -80478106:
if(func_399(30269, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1766901922);
break;
case 2091781849:
case 1835331655:
if(func_399(30270, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==2091781849);
break;
case 1824588341:
case -1650596870:
if(func_399(30271, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1824588341);
break;
case 242597641:
case 1231926496:
if(func_399(30272, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==242597641);
break;
case 566785691:
case -1506181253:
if(func_399(30273, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==566785691);
break;
case -2091312957:
case -1737145605:
if(func_399(30274, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-2091312957);
break;
case -2079214831:
case 1673851512:
if(func_399(30275, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-2079214831);
break;
case 1359156274:
case 1023339598:
if(func_399(30276, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1359156274);
break;
case 1904247246:
case -163738770:
if(func_399(30277, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1904247246);
break;
case -1351518396:
case 1863218823:
if(func_399(30278, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1351518396);
break;
case -797874817:
case 333966447:
if(func_399(30279, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-797874817);
break;
case -385507297:
case 1412626052:
if(func_399(30280, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-385507297);
break;
case 2011910758:
case -39100956:
if(func_399(30281, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==2011910758);
break;
case -1953985443:
case 1631533003:
if(func_399(30282, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1953985443);
break;
case -1124222352:
case 1493430918:
if(func_399(30283, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1124222352);
break;
case -1806994767:
case -196693334:
if(func_399(30284, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1806994767);
break;
case -1445761968:
case 553507495:
if(func_399(30285, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1445761968);
break;
case -89186417:
case 2003474700:
if(func_399(30286, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-89186417);
break;
case -308083083:
case 1121792228:
if(func_399(30287, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-308083083);
break;
case 667714507:
case -1424651669:
if(func_399(30288, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==667714507);
break;
case -1610210252:
case -1454164346:
if(func_399(30289, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1610210252);
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case -417116499:
case -779574408:
if(func_399(28255, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-417116499);
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case 1246110729:
case -1361908447:
if(func_392(89, -1) || func_399(30254, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==1246110729);
break;
case 461575135:
case 1250161120:
if(func_392(90, -1) || func_399(30255, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==461575135);
break;
case -386163163:
case 1288201657:
if(func_392(92, -1) || func_399(30256, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-386163163);
break;
case -1414541879:
case 111412152:
if((((func_392(89, -1) && func_392(90, -1)) && func_392(92, -1)) && func_392(91, -1)) || func_399(30257, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==-1414541879);
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_001_F"):
case joaat("mpHeist3_Tee_001_M"):
if(func_392(78, -1) || func_399(28199, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_001_M"));
break;
case joaat("mpHeist3_Tee_000_F"):
case joaat("mpHeist3_Tee_000_M"):
if(((func_392(77, -1) && func_392(78, -1)) && func_394(92, -1) >=func_393(92, 5, 9)) || func_399(28200, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_000_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_007_F"):
case joaat("mpHeist3_Tee_008_F"):
case joaat("mpHeist3_Tee_009_F"):
case joaat("mpHeist3_Tee_007_M"):
case joaat("mpHeist3_Tee_008_M"):
case joaat("mpHeist3_Tee_009_M"):
if(((func_394(93, -1) >=func_393(93, 5, 9) && func_392(79, -1)) && func_392(80, -1)) || func_399(28204, -1)){
return 0;
}
return !func_395(iParam2, iParam1, ((iParam1==joaat("mpHeist3_Tee_007_M") || iParam1==joaat("mpHeist3_Tee_008_M")) || iParam1==joaat("mpHeist3_Tee_009_M")));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_004_F"):
case joaat("mpHeist3_Tee_004_M"):
if(func_392(81, -1) || func_399(28206, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_004_M"));
break;
case joaat("mpHeist3_Tee_005_F"):
case joaat("mpHeist3_Tee_005_M"):
if(func_394(94, -1) >=func_393(94, 5, 9) || func_399(28207, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_005_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_006_F"):
case joaat("mpHeist3_Tee_006_M"):
if(((func_392(84, -1) && func_392(85, -1)) && func_394(97, -1) >=func_393(97, 5, 9)) || func_399(28212, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_006_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_002_F"):
case joaat("mpHeist3_Tee_002_M"):
if(func_399(28249, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_002_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_013_F"):
case joaat("mpHeist3_Tee_013_M"):
if(func_399(28183, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_013_M"));
break;
case joaat("mpHeist3_Tee_014_F"):
case joaat("mpHeist3_Tee_014_M"):
if(func_399(28182, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_014_M"));
break;
case joaat("mpHeist3_Tee_015_F"):
case joaat("mpHeist3_Tee_015_M"):
if(func_399(28184, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_015_M"));
break;
case joaat("mpHeist3_Tee_016_F"):
case joaat("mpHeist3_Tee_016_M"):
if(func_399(28181, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_016_M"));
break;
case joaat("mpHeist3_Tee_017_F"):
case joaat("mpHeist3_Tee_017_M"):
if(func_399(28178, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_017_M"));
break;
case joaat("mpHeist3_Tee_018_F"):
case joaat("mpHeist3_Tee_018_M"):
if(func_399(28177, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_018_M"));
break;
case joaat("mpHeist3_Tee_019_F"):
case joaat("mpHeist3_Tee_019_M"):
if(func_399(28176, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_019_M"));
break;
case joaat("mpHeist3_Tee_020_F"):
case joaat("mpHeist3_Tee_020_M"):
if(func_399(28180, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_020_M"));
break;
case joaat("mpHeist3_Tee_021_F"):
case joaat("mpHeist3_Tee_021_M"):
if(func_399(28179, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_021_M"));
break;
case joaat("mpHeist3_Tee_022_F"):
case joaat("mpHeist3_Tee_022_M"):
if(((((((((func_399(28176, -1) && func_399(28177, -1)) && func_399(28178, -1)) && func_399(28179, -1)) && func_399(28180, -1)) && func_399(28181, -1)) && func_399(28182, -1)) && func_399(28183, -1)) && func_399(28184, -1)) || func_399(28221, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_022_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_023_F"):
case joaat("mpHeist3_Tee_023_M"):
if(func_399(28191, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_023_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_011_F"):
case joaat("mpHeist3_Tee_011_M"):
if(func_399(28190, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_011_M"));
break;
case joaat("mpHeist3_Tee_012_F"):
case joaat("mpHeist3_Tee_012_M"):
if(func_399(28189, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_012_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_003_F"):
case joaat("mpHeist3_Tee_003_M"):
if(func_388(0, 1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_003_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_010_F"):
case joaat("mpHeist3_Tee_010_M"):
if((((((((((((((((((func_392(77, -1) && func_392(78, -1)) && func_394(92, -1) >=func_393(92, 5, 9)) && func_394(93, -1) >=func_393(93, 5, 9)) && func_392(79, -1)) && func_392(80, -1)) && func_392(81, -1)) && func_394(94, -1) >=func_393(94, 5, 9)) && func_394(95, -1) >=func_393(95, 5, 9)) && func_392(82, -1)) && func_392(83, -1)) && func_394(96, -1) >=func_393(96, 5, 9)) && func_392(84, -1)) && func_392(85, -1)) && func_394(97, -1) >=func_393(97, 5, 9)) && func_392(86, -1)) && func_392(87, -1)) && func_392(88, -1)) || func_399(28222, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_010_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpVinewood_overlays"):
switch (iParam1){
case joaat("MP_Vinewood_Tat_023_M"):
case joaat("MP_Vinewood_Tat_023_F"):
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Vinewood_Tat_023_M"));
break;
case joaat("MP_Vinewood_Tat_030_M"):
case joaat("MP_Vinewood_Tat_030_F"):
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Vinewood_Tat_030_M"));
break;
case joaat("CasinoTop_M_21"):
case joaat("CasinoTop_F_21"):
if(func_399(27109, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("CasinoTop_M_21"));
break;
case joaat("CasinoTop_M_23"):
case joaat("CasinoTop_F_23"):
if(func_399(27110, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("CasinoTop_M_23"));
break;
case joaat("CasinoTop_M_2"):
case joaat("CasinoTop_F_2"):
if(func_399(27111, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("CasinoTop_M_2"));
break;
case joaat("CasinoTop_M_4"):
case joaat("CasinoTop_F_4"):
if(func_399(27112, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("CasinoTop_M_4"));
break;
case joaat("CasinoTop_M_6"):
case joaat("CasinoTop_F_6"):
if(func_399(27113, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("CasinoTop_M_6"));
break;
case joaat("CasinoTop_M_10"):
case joaat("CasinoTop_F_10"):
if(func_399(27114, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("CasinoTop_M_10"));
break;
case joaat("CasinoTop_M_22"):
case joaat("CasinoTop_F_22"):
if(func_399(27115, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("CasinoTop_M_22"));
break;
}
break;
case joaat("mpChristmas2018_overlays"):
switch (iParam1){
case joaat("MP_Christmas2018_Tee_000_M"):
case joaat("MP_Christmas2018_Tee_000_F"):
if(func_399(25032, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_000_M"));
break;
case joaat("MP_Christmas2018_Tee_001_M"):
case joaat("MP_Christmas2018_Tee_001_F"):
if(func_399(25033, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_001_M"));
break;
case joaat("MP_Christmas2018_Tee_002_M"):
case joaat("MP_Christmas2018_Tee_002_F"):
if(func_399(25034, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_002_M"));
break;
case joaat("MP_Christmas2018_Tee_003_M"):
case joaat("MP_Christmas2018_Tee_003_F"):
if(func_399(25035, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_003_M"));
break;
case joaat("MP_Christmas2018_Tee_004_M"):
case joaat("MP_Christmas2018_Tee_004_F"):
if(func_399(25036, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_004_M"));
break;
case joaat("MP_Christmas2018_Tee_005_M"):
case joaat("MP_Christmas2018_Tee_005_F"):
if(func_399(25037, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_005_M"));
break;
case joaat("MP_Christmas2018_Tee_006_M"):
case joaat("MP_Christmas2018_Tee_006_F"):
if(func_399(25038, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_006_M"));
break;
case joaat("MP_Christmas2018_Tee_007_M"):
case joaat("MP_Christmas2018_Tee_007_F"):
if(func_399(25039, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_007_M"));
break;
case joaat("MP_Christmas2018_Tee_008_M"):
case joaat("MP_Christmas2018_Tee_008_F"):
if(func_399(25040, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_008_M"));
break;
case joaat("MP_Christmas2018_Tee_009_M"):
case joaat("MP_Christmas2018_Tee_009_F"):
if(func_399(25041, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_009_M"));
break;
case joaat("MP_Christmas2018_Tee_010_M"):
case joaat("MP_Christmas2018_Tee_010_F"):
if(func_399(25042, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_010_M"));
break;
case joaat("MP_Christmas2018_Tee_011_M"):
case joaat("MP_Christmas2018_Tee_011_F"):
if(func_399(25043, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_011_M"));
break;
case joaat("MP_Christmas2018_Tee_012_M"):
case joaat("MP_Christmas2018_Tee_012_F"):
if(func_399(25044, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_012_M"));
break;
case joaat("MP_Christmas2018_Tee_013_M"):
case joaat("MP_Christmas2018_Tee_013_F"):
if(func_399(25045, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_013_M"));
break;
case joaat("MP_Christmas2018_Tee_014_M"):
case joaat("MP_Christmas2018_Tee_014_F"):
if(func_399(25046, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_014_M"));
break;
case joaat("MP_Christmas2018_Tee_015_M"):
case joaat("MP_Christmas2018_Tee_015_F"):
if(func_399(25047, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_015_M"));
break;
case joaat("MP_Christmas2018_Tee_016_M"):
case joaat("MP_Christmas2018_Tee_016_F"):
if(func_399(25048, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_016_M"));
break;
case joaat("MP_Christmas2018_Tee_017_M"):
case joaat("MP_Christmas2018_Tee_017_F"):
if(func_399(25049, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_017_M"));
break;
case joaat("MP_Christmas2018_Tee_018_M"):
case joaat("MP_Christmas2018_Tee_018_F"):
if(func_399(25050, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_018_M"));
break;
case joaat("MP_Christmas2018_Tee_019_M"):
case joaat("MP_Christmas2018_Tee_019_F"):
if(func_399(25051, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_019_M"));
break;
case joaat("MP_Christmas2018_Tee_020_M"):
case joaat("MP_Christmas2018_Tee_020_F"):
if(func_399(25052, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_020_M"));
break;
case joaat("MP_Christmas2018_Tee_021_M"):
case joaat("MP_Christmas2018_Tee_021_F"):
if(func_399(25053, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_021_M"));
break;
case joaat("MP_Christmas2018_Tee_022_M"):
case joaat("MP_Christmas2018_Tee_022_F"):
if(func_399(25054, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_022_M"));
break;
case joaat("MP_Christmas2018_Tee_023_M"):
case joaat("MP_Christmas2018_Tee_023_F"):
if(func_399(25055, -1)){
return 0;
}
if(func_399(27077, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_023_M"));
break;
case joaat("MP_Christmas2018_Tee_024_M"):
case joaat("MP_Christmas2018_Tee_024_F"):
if(func_399(25056, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_024_M"));
break;
case joaat("MP_Christmas2018_Tee_025_M"):
case joaat("MP_Christmas2018_Tee_025_F"):
if(func_399(25057, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_025_M"));
break;
case joaat("MP_Christmas2018_Tee_026_M"):
case joaat("MP_Christmas2018_Tee_026_F"):
if(func_399(25058, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_026_M"));
break;
case joaat("MP_Christmas2018_Tee_027_M"):
case joaat("MP_Christmas2018_Tee_027_F"):
if(func_399(25059, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_027_M"));
break;
case joaat("MP_Christmas2018_Tee_028_M"):
case joaat("MP_Christmas2018_Tee_028_F"):
if(func_399(25060, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_028_M"));
break;
case joaat("MP_Christmas2018_Tee_029_M"):
case joaat("MP_Christmas2018_Tee_029_F"):
if(func_399(25061, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_029_M"));
break;
case joaat("MP_Christmas2018_Tee_030_M"):
case joaat("MP_Christmas2018_Tee_030_F"):
if(func_399(25062, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_030_M"));
break;
case joaat("MP_Christmas2018_Tee_031_M"):
case joaat("MP_Christmas2018_Tee_031_F"):
if(func_399(25063, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_031_M"));
break;
case joaat("MP_Christmas2018_Tee_032_M"):
case joaat("MP_Christmas2018_Tee_032_F"):
if(func_399(25064, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_032_M"));
break;
case joaat("MP_Christmas2018_Tee_033_M"):
case joaat("MP_Christmas2018_Tee_033_F"):
if(func_399(25065, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_033_M"));
break;
case joaat("MP_Christmas2018_Tee_034_M"):
case joaat("MP_Christmas2018_Tee_034_F"):
if(func_399(25066, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_034_M"));
break;
case joaat("MP_Christmas2018_Tee_035_M"):
case joaat("MP_Christmas2018_Tee_035_F"):
if(func_399(25067, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_035_M"));
break;
case joaat("MP_Christmas2018_Tee_036_M"):
case joaat("MP_Christmas2018_Tee_036_F"):
if(func_399(25068, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_036_M"));
break;
case joaat("MP_Christmas2018_Tee_037_M"):
case joaat("MP_Christmas2018_Tee_037_F"):
if(func_399(25069, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_037_M"));
break;
case joaat("MP_Christmas2018_Tee_038_M"):
case joaat("MP_Christmas2018_Tee_038_F"):
if(func_399(25070, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_038_M"));
break;
case joaat("MP_Christmas2018_Tee_039_M"):
case joaat("MP_Christmas2018_Tee_039_F"):
if(func_399(25071, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_039_M"));
break;
case joaat("MP_Christmas2018_Tee_040_M"):
case joaat("MP_Christmas2018_Tee_040_F"):
if(func_399(25072, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_040_M"));
break;
case joaat("MP_Christmas2018_Tee_041_M"):
case joaat("MP_Christmas2018_Tee_041_F"):
if(func_399(25073, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_041_M"));
break;
case joaat("MP_Christmas2018_Tee_042_M"):
case joaat("MP_Christmas2018_Tee_042_F"):
if(func_399(25074, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_042_M"));
break;
case joaat("MP_Christmas2018_Tee_043_M"):
case joaat("MP_Christmas2018_Tee_043_F"):
if(func_399(25075, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_043_M"));
break;
case joaat("MP_Christmas2018_Tee_044_M"):
case joaat("MP_Christmas2018_Tee_044_F"):
if(func_399(25076, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_044_M"));
break;
case joaat("MP_Christmas2018_Tee_045_M"):
case joaat("MP_Christmas2018_Tee_045_F"):
if(func_399(25077, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_045_M"));
break;
case joaat("MP_Christmas2018_Tee_046_M"):
case joaat("MP_Christmas2018_Tee_046_F"):
if(func_399(25078, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_046_M"));
break;
case joaat("MP_Christmas2018_Tee_047_M"):
case joaat("MP_Christmas2018_Tee_047_F"):
if(func_399(25079, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_047_M"));
break;
case joaat("MP_Christmas2018_Tee_048_M"):
case joaat("MP_Christmas2018_Tee_048_F"):
if(func_399(25080, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_048_M"));
break;
case joaat("MP_Christmas2018_Tee_049_M"):
case joaat("MP_Christmas2018_Tee_049_F"):
if(func_399(25081, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_049_M"));
break;
case joaat("MP_Christmas2018_Tee_050_M"):
case joaat("MP_Christmas2018_Tee_050_F"):
if(func_399(25082, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_050_M"));
break;
case joaat("MP_Christmas2018_Tee_051_M"):
case joaat("MP_Christmas2018_Tee_051_F"):
if(func_399(25083, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_051_M"));
break;
case joaat("MP_Christmas2018_Tee_052_M"):
case joaat("MP_Christmas2018_Tee_052_F"):
if(func_399(25084, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_052_M"));
break;
case joaat("MP_Christmas2018_Tee_053_M"):
case joaat("MP_Christmas2018_Tee_053_F"):
if(func_399(25085, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_053_M"));
break;
case joaat("MP_Christmas2018_Tee_054_M"):
case joaat("MP_Christmas2018_Tee_054_F"):
if(func_399(25086, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_054_M"));
break;
case joaat("MP_Christmas2018_Tee_055_M"):
case joaat("MP_Christmas2018_Tee_055_F"):
if(func_399(25087, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_055_M"));
break;
case joaat("MP_Christmas2018_Tee_056_M"):
case joaat("MP_Christmas2018_Tee_056_F"):
if(func_399(25088, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_056_M"));
break;
case joaat("MP_Christmas2018_Tee_057_M"):
case joaat("MP_Christmas2018_Tee_057_F"):
if(func_399(25089, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_057_M"));
break;
case joaat("MP_Christmas2018_Tee_058_M"):
case joaat("MP_Christmas2018_Tee_058_F"):
if(func_399(25090, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_058_M"));
break;
case joaat("MP_Christmas2018_Tee_059_M"):
case joaat("MP_Christmas2018_Tee_059_F"):
if(func_399(25091, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_059_M"));
break;
case joaat("MP_Christmas2018_Tee_060_M"):
case joaat("MP_Christmas2018_Tee_060_F"):
if(func_399(25092, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_060_M"));
break;
case joaat("MP_Christmas2018_Tee_061_M"):
case joaat("MP_Christmas2018_Tee_061_F"):
if(func_399(25093, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_061_M"));
break;
case joaat("MP_Christmas2018_Tee_062_M"):
case joaat("MP_Christmas2018_Tee_062_F"):
if(func_399(25094, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_062_M"));
break;
case joaat("MP_Christmas2018_Tee_063_M"):
case joaat("MP_Christmas2018_Tee_063_F"):
if(func_399(25095, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_063_M"));
break;
case joaat("MP_Christmas2018_Tee_064_M"):
case joaat("MP_Christmas2018_Tee_064_F"):
if(func_399(25096, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_064_M"));
break;
case joaat("MP_Christmas2018_Tee_065_M"):
case joaat("MP_Christmas2018_Tee_065_F"):
if(func_399(25097, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_065_M"));
break;
case joaat("MP_Christmas2018_Tee_066_M"):
case joaat("MP_Christmas2018_Tee_066_F"):
if(func_399(25098, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_066_M"));
break;
case joaat("MP_Christmas2018_Tee_067_M"):
case joaat("MP_Christmas2018_Tee_067_F"):
if(func_399(25099, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_067_M"));
break;
case joaat("MP_Christmas2018_Tat_000_M"):
case joaat("MP_Christmas2018_Tat_000_F"):
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tat_000_M"));
break;
}
break;
case joaat("mpBattle_overlays"):
switch (iParam1){
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Battle_Clothing_000_F"):
if(func_399(22108, -1) || func_399(25006, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_000_M"));
break;
case joaat("MP_Battle_Clothing_002_M"):
case joaat("MP_Battle_Clothing_002_F"):
if(func_399(9481, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_002_M"));
break;
case joaat("MP_Battle_Clothing_003_M"):
case joaat("MP_Battle_Clothing_003_F"):
if(func_399(9470, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_003_M"));
break;
case joaat("MP_Battle_Clothing_004_M"):
case joaat("MP_Battle_Clothing_004_F"):
if(func_399(9475, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_004_M"));
break;
case joaat("MP_Battle_Clothing_005_M"):
case joaat("MP_Battle_Clothing_005_F"):
if(func_399(9472, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_005_M"));
break;
case joaat("MP_Battle_Clothing_006_M"):
case joaat("MP_Battle_Clothing_006_F"):
if(func_399(9465, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_006_M"));
break;
case joaat("MP_Battle_Clothing_007_M"):
case joaat("MP_Battle_Clothing_007_F"):
if(func_399(9463, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_007_M"));
break;
case joaat("MP_Battle_Clothing_008_M"):
case joaat("MP_Battle_Clothing_008_F"):
if(func_399(9464, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_008_M"));
break;
case joaat("MP_Battle_Clothing_009_M"):
case joaat("MP_Battle_Clothing_009_F"):
if(func_399(9468, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_009_M"));
break;
case joaat("MP_Battle_Clothing_010_M"):
case joaat("MP_Battle_Clothing_010_F"):
if(func_399(9469, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_010_M"));
break;
case joaat("MP_Battle_Clothing_011_M"):
case joaat("MP_Battle_Clothing_011_F"):
if(func_399(9479, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_011_M"));
break;
case joaat("MP_Battle_Clothing_012_M"):
case joaat("MP_Battle_Clothing_012_F"):
if(func_399(9473, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_012_M"));
break;
case joaat("MP_Battle_Clothing_013_M"):
case joaat("MP_Battle_Clothing_013_F"):
if(func_399(9480, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_013_M"));
break;
case joaat("MP_Battle_Clothing_014_M"):
case joaat("MP_Battle_Clothing_014_F"):
if(func_399(9476, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_014_M"));
break;
case joaat("MP_Battle_Clothing_015_M"):
case joaat("MP_Battle_Clothing_015_F"):
if(func_399(9477, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_015_M"));
break;
case joaat("MP_Battle_Clothing_016_M"):
case joaat("MP_Battle_Clothing_016_F"):
if(func_399(9471, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_016_M"));
break;
case joaat("MP_Battle_Clothing_017_M"):
case joaat("MP_Battle_Clothing_017_F"):
if(func_399(9474, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_017_M"));
break;
case joaat("MP_Battle_Clothing_018_M"):
case joaat("MP_Battle_Clothing_018_F"):
if(func_399(9467, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_018_M"));
break;
case joaat("MP_Battle_Clothing_019_M"):
case joaat("MP_Battle_Clothing_019_F"):
if(func_399(9478, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_019_M"));
break;
case joaat("MP_Battle_Clothing_020_M"):
case joaat("MP_Battle_Clothing_020_F"):
if(func_399(9462, -1)){
return 0;
}
if(iParam1==joaat("MP_Battle_Clothing_020_M")){
if(func_399(27085, -1)){
return 0;
}}elseif(func_399(27084, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_020_M"));
break;
case joaat("MP_Battle_Clothing_021_M"):
case joaat("MP_Battle_Clothing_021_F"):
if(func_399(9466, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_021_M"));
break;
case joaat("MP_Battle_Clothing_022_M"):
case joaat("MP_Battle_Clothing_022_F"):
if(func_399(22126, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_022_M"));
break;
case joaat("MP_Battle_Clothing_023_M"):
case joaat("MP_Battle_Clothing_023_F"):
if(func_399(22127, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_023_M"));
break;
case joaat("MP_Battle_Clothing_024_M"):
case joaat("MP_Battle_Clothing_024_F"):
if(func_399(22128, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_024_M"));
break;
case joaat("MP_Battle_Clothing_025_M"):
case joaat("MP_Battle_Clothing_025_F"):
if(func_399(22124, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_025_M"));
break;
case joaat("MP_Battle_Clothing_026_M"):
case joaat("MP_Battle_Clothing_026_F"):
if(func_399(22130, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_026_M"));
break;
case joaat("MP_Battle_Clothing_027_M"):
case joaat("MP_Battle_Clothing_027_F"):
if(func_399(22125, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_027_M"));
break;
case joaat("MP_Battle_Clothing_028_M"):
case joaat("MP_Battle_Clothing_028_F"):
if(func_399(22129, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_028_M"));
break;
case joaat("MP_Battle_Clothing_029_M"):
case joaat("MP_Battle_Clothing_029_F"):
if(func_399(22131, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_029_M"));
break;
case joaat("MP_Battle_Clothing_030_M"):
case joaat("MP_Battle_Clothing_030_F"):
if(func_399(22132, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_030_M"));
break;
}
switch (iParam1){
case joaat("MP_Battle_Clothing_031_M"):
case joaat("MP_Battle_Clothing_031_F"):
if(func_399(22147, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_031_M"));
break;
case joaat("MP_Battle_Clothing_032_M"):
case joaat("MP_Battle_Clothing_032_F"):
if(func_399(22148, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_032_M"));
break;
case joaat("MP_Battle_Clothing_033_M"):
case joaat("MP_Battle_Clothing_033_F"):
if(func_399(22149, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_033_M"));
break;
case joaat("MP_Battle_Clothing_034_M"):
case joaat("MP_Battle_Clothing_034_F"):
if(func_399(22150, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_034_M"));
break;
case joaat("MP_Battle_Clothing_035_M"):
case joaat("MP_Battle_Clothing_035_F"):
if(func_399(22151, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_035_M"));
break;
case joaat("MP_Battle_Clothing_036_M"):
case joaat("MP_Battle_Clothing_036_F"):
if(func_399(22152, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_036_M"));
break;
case joaat("MP_Battle_Clothing_037_M"):
case joaat("MP_Battle_Clothing_037_F"):
if(func_399(22153, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_037_M"));
break;
case joaat("MP_Battle_Clothing_038_M"):
case joaat("MP_Battle_Clothing_038_F"):
if(func_399(22154, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_038_M"));
break;
case joaat("MP_Battle_Clothing_039_M"):
case joaat("MP_Battle_Clothing_039_F"):
if(func_399(22155, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_039_M"));
break;
case joaat("MP_Battle_Clothing_040_M"):
case joaat("MP_Battle_Clothing_040_F"):
if(func_399(22156, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_040_M"));
break;
case joaat("MP_Battle_Clothing_041_M"):
case joaat("MP_Battle_Clothing_041_F"):
if(func_399(22157, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_041_M"));
break;
case joaat("MP_Battle_Clothing_042_M"):
case joaat("MP_Battle_Clothing_042_F"):
if(func_399(22158, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_042_M"));
break;
case joaat("MP_Battle_Clothing_043_M"):
case joaat("MP_Battle_Clothing_043_F"):
if(func_399(22159, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_043_M"));
break;
case joaat("MP_Battle_Clothing_044_M"):
case joaat("MP_Battle_Clothing_044_F"):
if(func_399(22160, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_044_M"));
break;
case joaat("MP_Battle_Clothing_045_M"):
case joaat("MP_Battle_Clothing_045_F"):
if(func_399(22161, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_045_M"));
break;
case joaat("MP_Battle_Clothing_046_M"):
case joaat("MP_Battle_Clothing_046_F"):
if(func_399(22162, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_046_M"));
break;
case joaat("MP_Battle_Clothing_047_M"):
case joaat("MP_Battle_Clothing_047_F"):
if(func_399(22163, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_047_M"));
break;
case joaat("MP_Battle_Clothing_048_M"):
case joaat("MP_Battle_Clothing_048_F"):
if(func_399(22164, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_048_M"));
break;
case joaat("MP_Battle_Clothing_049_M"):
case joaat("MP_Battle_Clothing_049_F"):
if(func_399(22165, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_049_M"));
break;
case joaat("MP_Battle_Clothing_050_M"):
case joaat("MP_Battle_Clothing_050_F"):
if(func_399(22166, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_050_M"));
break;
case joaat("MP_Battle_Clothing_051_M"):
case joaat("MP_Battle_Clothing_051_F"):
if(func_399(22167, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_051_M"));
break;
case joaat("MP_Battle_Clothing_052_M"):
case joaat("MP_Battle_Clothing_052_F"):
if(func_399(22168, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_052_M"));
break;
case joaat("MP_Battle_Clothing_053_M"):
case joaat("MP_Battle_Clothing_053_F"):
if(func_399(22169, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_053_M"));
break;
case joaat("MP_Battle_Clothing_054_M"):
case joaat("MP_Battle_Clothing_054_F"):
if(func_399(22170, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_054_M"));
break;
case joaat("MP_Battle_Clothing_055_M"):
case joaat("MP_Battle_Clothing_055_F"):
if(func_399(22171, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_055_M"));
break;
case joaat("MP_Battle_Clothing_056_M"):
case joaat("MP_Battle_Clothing_056_F"):
if(func_399(22172, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_056_M"));
break;
case joaat("MP_Battle_Clothing_057_M"):
case joaat("MP_Battle_Clothing_057_F"):
if(func_399(22173, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_057_M"));
break;
case joaat("MP_Battle_Clothing_058_M"):
case joaat("MP_Battle_Clothing_058_F"):
if(func_399(22174, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_058_M"));
break;
case joaat("MP_Battle_Clothing_059_M"):
case joaat("MP_Battle_Clothing_059_F"):
if(func_399(22175, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_059_M"));
break;
case joaat("MP_Battle_Clothing_060_M"):
case joaat("MP_Battle_Clothing_060_F"):
if(func_399(22176, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_060_M"));
break;
case joaat("MP_Battle_Clothing_061_M"):
case joaat("MP_Battle_Clothing_061_F"):
if(func_399(22177, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_061_M"));
break;
case joaat("MP_Battle_Clothing_062_M"):
case joaat("MP_Battle_Clothing_062_F"):
if(func_399(22178, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_062_M"));
break;
}
break;
case joaat("mpGunrunning_overlays"):
switch (iParam1){
case joaat("MP_Gunrunning_Award_019_M"):
case joaat("MP_Gunrunning_Award_025_F"):
if(func_399(15426, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_019_M"));
break;
case joaat("MP_Gunrunning_Award_020_M"):
case joaat("MP_Gunrunning_Award_020_F"):
if(func_399(15422, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_020_M"));
break;
case joaat("MP_Gunrunning_Award_020_M_ALT"):
case joaat("MP_Gunrunning_Award_020_F_ALT"):
if(func_399(15423, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_020_M_ALT"));
break;
case joaat("MP_Gunrunning_Award_021_M"):
case joaat("MP_Gunrunning_Award_021_F"):
if(func_399(15421, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_021_M"));
break;
case joaat("MP_Gunrunning_Award_022_M"):
case joaat("MP_Gunrunning_Award_026_F"):
if(func_399(15427, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_022_M"));
break;
case joaat("MP_Gunrunning_Award_023_M"):
case joaat("MP_Gunrunning_Award_023_F"):
if(func_399(15419, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_023_M"));
break;
case joaat("MP_Gunrunning_Award_024_M"):
case joaat("MP_Gunrunning_Award_024_F"):
if(func_399(15420, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_024_M"));
break;
}
switch (iParam1){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
if(func_399(15394, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_000_M"));
break;
case joaat("MP_Gunrunning_Award_001_M"):
case joaat("MP_Gunrunning_Award_001_F"):
if(func_330(209, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_001_M"));
break;
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
if(func_399(15406, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_002_M"));
break;
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
if(func_399(15395, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_003_M"));
break;
case joaat("MP_Gunrunning_Award_004_M"):
case joaat("MP_Gunrunning_Award_004_F"):
if(func_330(209, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_004_M"));
break;
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
if(func_399(15410, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_005_M"));
break;
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
if(func_399(15407, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_006_M"));
break;
case joaat("MP_Gunrunning_Award_007_M"):
case joaat("MP_Gunrunning_Award_007_F"):
if(func_330(209, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_007_M"));
break;
case joaat("MP_Gunrunning_Award_008_M"):
case joaat("MP_Gunrunning_Award_008_F"):
if(func_330(209, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_008_M"));
break;
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
if(func_399(15414, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_009_M"));
break;
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
if(func_399(15415, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_010_M"));
break;
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
if(func_399(15399, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_011_M"));
break;
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
if(func_399(15404, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_012_M"));
break;
case joaat("MP_Gunrunning_Award_013_M"):
case joaat("MP_Gunrunning_Award_013_F"):
if(func_330(209, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_013_M"));
break;
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
if(func_399(15392, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_014_M"));
break;
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
if(func_399(15390, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_015_M"));
break;
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
if(func_399(15402, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_016_M"));
break;
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
if(func_399(15416, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_017_M"));
break;
case joaat("MP_Gunrunning_Award_018_M"):
case joaat("MP_Gunrunning_Award_018_F"):
if(func_330(209, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_018_M"));
break;
}
break;
case joaat("mpBiker_overlays"):
switch (iParam1){
case joaat("MP_Biker_Tee_022_M"):
case joaat("MP_Biker_Tee_022_F"):
if(func_399(9366, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_022_M"));
break;
case joaat("MP_Biker_Tee_023_M"):
case joaat("MP_Biker_Tee_023_F"):
if(func_399(9367, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_023_M"));
break;
case joaat("MP_Biker_Tee_024_M"):
case joaat("MP_Biker_Tee_024_F"):
if(func_399(9369, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_024_M"));
break;
case joaat("MP_Biker_Tee_025_M"):
case joaat("MP_Biker_Tee_025_F"):
if(func_399(9368, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_025_M"));
break;
case joaat("MP_Biker_Tee_047_M"):
case joaat("MP_Biker_Tee_047_F"):
if(func_399(9365, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_047_M"));
break;
case joaat("MP_Biker_Tee_048_M"):
case joaat("MP_Biker_Tee_048_F"):
if(func_399(9364, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_048_M"));
break;
case joaat("MP_Biker_Tee_049_M"):
case joaat("MP_Biker_Tee_049_F"):
if(func_399(27078, -1)){
return 0;
}
if(func_399(9363, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_049_M"));
break;
case joaat("MP_Biker_Tee_050_M"):
case joaat("MP_Biker_Tee_050_F"):
if(func_399(9362, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_050_M"));
break;
case joaat("MP_Biker_Tee_051_M"):
case joaat("MP_Biker_Tee_051_F"):
if(func_399(9370, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_051_M"));
break;
case joaat("MP_Biker_Tee_052_M"):
case joaat("MP_Biker_Tee_052_F"):
if(func_399(9371, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_052_M"));
break;
case joaat("MP_Biker_Tee_053_M"):
case joaat("MP_Biker_Tee_053_F"):
if(func_399(9372, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_053_M"));
break;
case joaat("MP_Biker_Tee_054_M"):
case joaat("MP_Biker_Tee_054_F"):
if(func_399(9373, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_054_M"));
break;
case joaat("MP_Biker_Tee_055_M"):
case joaat("MP_Biker_Tee_055_F"):
if(func_399(9374, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_055_M"));
break;
case joaat("MP_Biker_Award_000_M"):
case joaat("MP_Biker_Award_000_F"):
if(func_399(9384, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Award_000_M"));
break;
case joaat("MP_Biker_Award_001_M"):
case joaat("MP_Biker_Award_001_F"):
if(func_399(9385, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_Biker_Award_001_M"));
break;
}
break;
case joaat("mpExecutive_overlays"):
switch (iParam1){
case joaat("MP_exec_prizes_015_M"):
case joaat("MP_exec_prizes_015_F"):
if(func_399(7551, -1) || func_230(3792, -1, 0) >=Global_262145.f_16768){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_015_M"));
break;
case joaat("MP_exec_prizes_000_M"):
case joaat("MP_exec_prizes_000_F"):
if(func_399(7467, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_000_M"));
break;
case joaat("MP_exec_prizes_001_M"):
case joaat("MP_exec_prizes_001_F"):
if(func_399(7468, -1)){
return 0;
}
if(iParam1==joaat("MP_exec_prizes_001_M")){
if(func_399(27083, -1)){
return 0;
}}elseif(func_399(27086, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_001_M"));
break;
case joaat("MP_exec_prizes_002_M"):
case joaat("MP_exec_prizes_002_F"):
if(func_399(7469, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_002_M"));
break;
case joaat("MP_exec_prizes_003_M"):
case joaat("MP_exec_prizes_003_F"):
if(func_399(7470, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_003_M"));
break;
case joaat("MP_exec_prizes_004_M"):
case joaat("MP_exec_prizes_004_F"):
if(func_399(7471, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_004_M"));
break;
case joaat("MP_exec_prizes_005_M"):
case joaat("MP_exec_prizes_005_F"):
if(func_399(7472, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_005_M"));
break;
case joaat("MP_exec_prizes_006_M"):
case joaat("MP_exec_prizes_006_F"):
if(func_399(7473, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_006_M"));
break;
case joaat("MP_exec_prizes_007_M"):
case joaat("MP_exec_prizes_007_F"):
if(func_399(7474, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_007_M"));
break;
case joaat("MP_exec_prizes_008_M"):
case joaat("MP_exec_prizes_008_F"):
if(func_399(7475, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_008_M"));
break;
case joaat("MP_exec_prizes_009_M"):
case joaat("MP_exec_prizes_009_F"):
if(func_399(7476, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_009_M"));
break;
case joaat("MP_exec_prizes_010_M"):
case joaat("MP_exec_prizes_010_F"):
if(func_399(7477, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_010_M"));
break;
case joaat("MP_exec_prizes_011_M"):
case joaat("MP_exec_prizes_011_F"):
if(func_399(7478, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_011_M"));
break;
case joaat("MP_exec_prizes_012_M"):
case joaat("MP_exec_prizes_012_F"):
if(func_399(7479, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_012_M"));
break;
case joaat("MP_exec_prizes_013_M"):
case joaat("MP_exec_prizes_013_F"):
if(func_399(7480, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_013_M"));
break;
case joaat("MP_exec_prizes_014_M"):
case joaat("MP_exec_prizes_014_F"):
if(func_399(7481, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_014_M"));
break;
}
break;
case joaat("mpHalloween_overlays"):
switch (iParam1){
case joaat("HW_Tee_000_F"):
case joaat("HW_Tee_000_M"):
if(func_399(4260, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_000_M"));
break;
case joaat("HW_Tee_001_F"):
case joaat("HW_Tee_001_M"):
if(func_399(4257, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_001_M"));
break;
case joaat("HW_Tee_002_F"):
case joaat("HW_Tee_002_M"):
if(func_399(4269, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_002_M"));
break;
case joaat("HW_Tee_003_F"):
case joaat("HW_Tee_003_M"):
if(func_399(4261, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_003_M"));
break;
case joaat("HW_Tee_004_F"):
case joaat("HW_Tee_004_M"):
if(func_399(4259, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_004_M"));
break;
case joaat("HW_Tee_005_F"):
case joaat("HW_Tee_005_M"):
if(func_399(4268, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_005_M"));
break;
case joaat("HW_Tee_006_F"):
case joaat("HW_Tee_006_M"):
if(func_399(4265, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_006_M"));
break;
case joaat("HW_Tee_007_F"):
case joaat("HW_Tee_007_M"):
if(func_399(4258, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_007_M"));
break;
case joaat("HW_Tee_008_F"):
case joaat("HW_Tee_008_M"):
if(func_399(4264, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_008_M"));
break;
case joaat("HW_Tee_009_F"):
case joaat("HW_Tee_009_M"):
if(func_399(4267, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_009_M"));
break;
case joaat("HW_Tee_010_F"):
case joaat("HW_Tee_010_M"):
if(func_399(4262, -1)){
return 0;
}
if(func_399(27079, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_010_M"));
break;
case joaat("HW_Tee_011_F"):
case joaat("HW_Tee_011_M"):
if(func_399(4263, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_011_M"));
break;
case joaat("HW_Tee_012_F"):
case joaat("HW_Tee_012_M"):
if(func_399(4266, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("HW_Tee_012_M"));
break;
}
break;
case joaat("mpLowrider_overlays"):
switch (iParam1){
case joaat("MP_Bennys_000_M"):
case joaat("MP_Bennys_001_M"):
if(func_230(2934, -1, 0) > 0){
return 0;
}
if(iParam1==joaat("MP_Bennys_001_M")){
if(func_399(27068, -1)){
return 0;
}}
return !func_395(iParam2, iParam1, 1);
break;
case joaat("MP_Bennys_000_F"):
case joaat("MP_Bennys_001_F"):
if(func_230(2934, -1, 0) > 0){
return 0;
}
if(iParam1==joaat("MP_Bennys_001_F")){
if(func_399(27068, -1)){
return 0;
}}
return !func_395(iParam2, iParam1, 0);
break;
}
break;
case joaat("mpxmas_604490_overlays"):
switch (iParam1){
case joaat("MP_IHeartLC_000_M"):
case joaat("MP_IHeartLC_001_F"):
if(func_399(113, -1)){
return 0;
}
return !func_395(iParam2, iParam1, iParam1==joaat("MP_IHeartLC_000_M"));
break;
}
break;
case joaat("mpHeist_overlays"):
switch (iParam1){
case joaat("MP_Award_M_Tshirt_004"):
case joaat("MP_Award_M_Tshirt_005"):
case joaat("MP_Award_M_Tshirt_006"):
case joaat("MP_Award_M_Tshirt_007"):
case joaat("MP_Award_M_Tshirt_008"):
case joaat("MP_Award_M_Tshirt_009"):
case joaat("MP_Award_M_Tshirt_010"):
case joaat("MP_Award_M_Tshirt_011"):
case joaat("MP_Award_M_Tshirt_012"):
case joaat("MP_Award_M_Tshirt_013"):
if(iParam1==joaat("MP_Award_M_Tshirt_004")){
if(func_399(27082, -1)){
return 0;
}
if(func_399(3770, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_005")){
if(func_399(3771, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_006")){
if(func_399(3772, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_007")){
if(func_399(3773, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_008")){
if(func_399(3774, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_009")){
if(func_399(3775, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_010")){
if(func_399(3776, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_011")){
if(func_399(3777, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_012")){
if(func_399(3778, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_013")){
if(func_399(3779, -1) || func_399(27084, -1)){
return 0;
}}
return !func_395(iParam2, iParam1, 1);
break;
case joaat("MP_Award_F_Tshirt_004"):
case joaat("MP_Award_F_Tshirt_005"):
case joaat("MP_Award_F_Tshirt_006"):
case joaat("MP_Award_F_Tshirt_007"):
case joaat("MP_Award_F_Tshirt_008"):
case joaat("MP_Award_F_Tshirt_009"):
case joaat("MP_Award_F_Tshirt_010"):
case joaat("MP_Award_F_Tshirt_011"):
case joaat("MP_Award_F_Tshirt_012"):
case joaat("MP_Award_F_Tshirt_013"):
if(iParam1==joaat("MP_Award_F_Tshirt_004")){
if(func_399(3770, -1)){
return 0;
}
if(func_399(27082, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_005")){
if(func_399(3771, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_006")){
if(func_399(3772, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_007")){
if(func_399(3773, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_008")){
if(func_399(3774, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_009")){
if(func_399(3775, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_010")){
if(func_399(3776, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_011")){
if(func_399(3777, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_012")){
if(func_399(3778, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_013")){
if(func_399(3779, -1) || func_399(27083, -1)){
return 0;
}}
return !func_395(iParam2, iParam1, 0);
break;
case joaat("MP_Elite_M_Tshirt"):
case joaat("MP_Elite_M_Tshirt_1"):
case joaat("MP_Elite_F_Tshirt"):
case joaat("MP_Elite_F_Tshirt_1"):
if((((func_399(3765, -1) && func_399(3766, -1)) && func_399(3767, -1)) && func_399(3768, -1)) && func_399(3769, -1)){
return 0;
}
return 1;
break;
}
break;
case joaat("mpIndependence_overlays"):
switch (iParam1){
case joaat("FM_Ind_M_Award_000"):
case joaat("FM_Ind_F_Award_000"):
return !func_399(3593, -1);
break;
}
if(!Global_262145.f_8259 && !func_395(iParam2, iParam1, 0)){
return 1;
}
break;
case joaat("mpHipster_overlays"):
switch (iParam1){
case 1443536758:
case 1333229624:
case -1665422117:
case 1100930183:
case -1595008258:
case 94055115:
case -627896761:
case 1873477305:
return 1;
break;
case 196632624:
case -1644428107:
case 1108198688:
case 810099095:
return 1;
break;
case 300677115:
case 262692161:
case -1684141219:
case 390655118:
case -479442624:
case -542924311:
case 1696910411:
case -1259058037:
return 1;
break;
case 1980445908:
case -1882429354:
case -1235341889:
case -1544517404:
return 1;
break;
case joaat("FM_Hip_M_Retro_010"):
case joaat("FM_Hip_F_Retro_010"):
return (!func_330(152, -1) && !func_399(9440, -1));
break;
case joaat("FM_Hip_M_Retro_003"):
case joaat("FM_Hip_F_Retro_003"):
return (!func_330(151, -1) && !func_399(9430, -1));
break;
case joaat("FM_Hip_M_Retro_000"):
case joaat("FM_Hip_F_Retro_000"):
return (!func_381(iParam2, -1) && !func_399(9426, -1));
break;
case joaat("FM_Hip_M_Retro_001"):
case joaat("FM_Hip_F_Retro_001"):
return (!func_381(iParam2, -1) && !func_399(9427, -1));
break;
case joaat("FM_Hip_M_Retro_002"):
case joaat("FM_Hip_F_Retro_002"):
return (!func_381(iParam2, -1) && !func_399(9428, -1));
break;
case joaat("FM_Hip_M_Retro_004"):
case joaat("FM_Hip_F_Retro_004"):
return (!func_381(iParam2, -1) && !func_399(9431, -1));
break;
case joaat("FM_Hip_M_Retro_005"):
case joaat("FM_Hip_F_Retro_005"):
return (!func_381(iParam2, -1) && !func_399(9432, -1));
break;
case joaat("FM_Hip_M_Retro_006"):
case joaat("FM_Hip_F_Retro_006"):
return (!func_381(iParam2, -1) && !func_399(9433, -1));
break;
case joaat("FM_Hip_M_Retro_007"):
case joaat("FM_Hip_F_Retro_007"):
return (!func_381(iParam2, -1) && !func_399(9439, -1));
break;
case joaat("FM_Hip_M_Retro_008"):
case joaat("FM_Hip_F_Retro_008"):
return (!func_381(iParam2, -1) && !func_399(9434, -1));
break;
case joaat("FM_Hip_M_Retro_009"):
case joaat("FM_Hip_F_Retro_009"):
return (!func_381(iParam2, -1) && !func_399(9435, -1));
break;
case joaat("FM_Hip_M_Retro_011"):
case joaat("FM_Hip_F_Retro_011"):
return (!func_381(iParam2, -1) && !func_399(9436, -1));
break;
case joaat("FM_Hip_M_Retro_012"):
case joaat("FM_Hip_F_Retro_012"):
return (!func_381(iParam2, -1) && !func_399(9429, -1));
break;
case joaat("FM_Hip_M_Retro_013"):
case joaat("FM_Hip_F_Retro_013"):
return (!func_381(iParam2, -1) && !func_399(9437, -1));
break;
case joaat("FM_Rstar_M_Tshirt_000"):
case joaat("FM_Rstar_M_Tshirt_001"):
case joaat("FM_Rstar_M_Tshirt_002"):
case joaat("FM_Rstar_F_Tshirt_000"):
case joaat("FM_Rstar_F_Tshirt_001"):
case joaat("FM_Rstar_F_Tshirt_002"):
return !func_380();
break;
}
break;
case joaat("mpvalentines_overlays"):
if((!Global_262145.f_7059 && !func_381(iParam2, -1)) && !Global_262145.f_12034){
return 1;
}
break;
case joaat("mpPilot_overlays"):
switch (iParam1){
case joaat("MP_Fli_M_Tshirt_000"):
case joaat("MP_Fli_F_Tshirt_000"):
return !func_399(3608, -1);
break;
}
break;
case joaat("mpLTS_overlays"):
switch (iParam1){
case joaat("FM_LTS_M_Tshirt_000"):
case joaat("FM_LTS_F_Tshirt_000"):
return (!func_399(3615, -1) && !func_399(9438, -1));
break;
}
break;
case joaat("mpLuxe_overlays"):
if(iParam1==joaat("MP_LUXE_VDG_006_F")){
return 1;
}
switch (iParam1){
case joaat("MP_FAKE_DIS_000_M"):
case joaat("MP_FAKE_DIS_000_F"):
return !func_399(3783, -1);
break;
case joaat("MP_FAKE_DIS_001_M"):
case joaat("MP_FAKE_DIS_001_F"):
return !func_399(3784, -1);
break;
case joaat("MP_FAKE_DS_000_M"):
case joaat("MP_FAKE_DS_000_F"):
return !func_399(3785, -1);
break;
case joaat("MP_FAKE_ENEMA_000_M"):
case joaat("MP_FAKE_ENEMA_000_F"):
return !func_399(3786, -1);
break;
case joaat("MP_FAKE_LB_000_M"):
case joaat("MP_FAKE_LB_000_F"):
return !func_399(3787, -1);
break;
case joaat("MP_FAKE_LC_000_M"):
case joaat("MP_FAKE_LC_000_F"):
return !func_399(3788, -1);
break;
case joaat("MP_FAKE_SC_000_M"):
case joaat("MP_FAKE_SC_000_F"):
if(func_399(27081, -1)){
return 0;
}
return !func_399(3789, -1);
break;
case joaat("MP_FAKE_Vap_000_M"):
case joaat("MP_FAKE_Vap_000_F"):
return !func_399(3790, -1);
break;
case joaat("MP_FAKE_Per_000_M"):
case joaat("MP_FAKE_Per_000_F"):
return !func_399(3791, -1);
break;
case joaat("MP_FAKE_SN_000_M"):
case joaat("MP_FAKE_SN_000_F"):
return !func_399(3792, -1);
break;
case joaat("MP_FILM_000_F"):
case joaat("MP_FILM_000_M"):
if(iParam1==joaat("MP_FILM_000_F")){
iVar0=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar0, 0)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_000_M")){
iVar1=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar1, 18)){
return 0;
}}
return !func_399(3793, -1);
break;
case joaat("MP_FILM_001_F"):
case joaat("MP_FILM_001_M"):
if(iParam1==joaat("MP_FILM_001_F")){
iVar2=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar2, 1)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_001_M")){
iVar3=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar3, 19)){
return 0;
}}
return !func_399(3794, -1);
break;
case joaat("MP_FILM_002_F"):
case joaat("MP_FILM_002_M"):
if(iParam1==joaat("MP_FILM_002_F")){
iVar4=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar4, 2)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_002_M")){
iVar5=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar5, 20)){
return 0;
}}
return !func_399(3795, -1);
break;
case joaat("MP_FILM_003_F"):
case joaat("MP_FILM_003_M"):
if(iParam1==joaat("MP_FILM_003_F")){
iVar6=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar6, 3)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_003_M")){
iVar7=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar7, 21)){
return 0;
}}
return !func_399(3796, -1);
break;
case joaat("MP_FILM_004_F"):
case joaat("MP_FILM_004_M"):
if(iParam1==joaat("MP_FILM_004_F")){
iVar8=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar8, 4)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_004_M")){
iVar9=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar9, 22)){
return 0;
}}
return !func_399(3797, -1);
break;
case joaat("MP_FILM_005_F"):
case joaat("MP_FILM_005_M"):
if(iParam1==joaat("MP_FILM_005_F")){
iVar10=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar10, 5)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_005_M")){
iVar11=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar11, 23)){
return 0;
}}
return !func_399(3798, -1);
break;
case joaat("MP_FILM_006_F"):
case joaat("MP_FILM_006_M"):
if(iParam1==joaat("MP_FILM_006_F")){
iVar12=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar12, 6)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_006_M")){
iVar13=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar13, 24)){
return 0;
}}
return !func_399(3799, -1);
break;
case joaat("MP_FILM_007_F"):
case joaat("MP_FILM_007_M"):
if(iParam1==joaat("MP_FILM_007_F")){
iVar14=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar14, 7)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_007_M")){
iVar15=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar15, 25)){
return 0;
}}
return !func_399(3800, -1);
break;
case joaat("MP_FILM_008_F"):
case joaat("MP_FILM_008_M"):
if(iParam1==joaat("MP_FILM_008_F")){
iVar16=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar16, 8)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_008_M")){
iVar17=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar17, 26)){
return 0;
}}
return !func_399(3801, -1);
break;
case joaat("MP_FILM_009_F"):
case joaat("MP_FILM_009_M"):
if(iParam1==joaat("MP_FILM_009_F")){
iVar18=func_230(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar18, 9)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_009_M")){
iVar19=func_230(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar19, 27)){
return 0;
}}
return !func_399(3802, -1);
break;
}
break;
case joaat("mpLuxe2_overlays"):
switch (iParam1){
case joaat("MP_LUXE_TAT_030_M"):
case joaat("MP_LUXE_TAT_031_M"):
return 1;
break;
case joaat("MP_LUXE_TAT_030_F"):
case joaat("MP_LUXE_TAT_031_F"):
return 1;
break;
}
break;
case joaat("multiplayer_overlays"):
switch (iParam1){
case joaat("MP_FM_OGA_000_m"):
case joaat("MP_FM_OGA_001_m"):
case joaat("MP_FM_OGA_002_m"):
case joaat("MP_FM_OGA_003_m"):
case joaat("MP_FM_OGA_000_f"):
case joaat("MP_FM_OGA_001_f"):
case joaat("MP_FM_OGA_002_f"):
case joaat("MP_FM_OGA_003_f"):
return !func_379();
break;
}
break;
}
return 0;
}

int func_379(){
int iVar0;
if(Global_152523==2){
return 1;
}elseif(Global_152523==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
MISC::SET_BIT(&iVar0, 2);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar0, false);
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


bool func_380(){
return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_381(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_384(iParam0)==14192){
return 0;
}
uVar0=func_383(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_382(iVar1));
}

int func_382(int iParam0){
return (iParam0 % 32);
}


var func__383(var uParam0, int iParam1){
var uVar0;
uVar0=func_230(func_384(uParam0), iParam1, 0);
return uVar0;
}

int func_384(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_387(iVar0);
if((func_386()==0 || func_385()==0) || (func_386()==999 && func_385()==999)){
switch (iVar1){
case 0:
return 1039;
break;
case 1:
return 1040;
break;
case 2:
return 1041;
break;
case 3:
return 1042;
break;
case 4:
return 1043;
break;
case 5:
return 1503;
break;
case 6:
return 1758;
break;
case 7:
return 1952;
break;
case 8:
return 1953;
break;
case 9:
return 1954;
break;
case 10:
return 1955;
break;
case 11:
return 1956;
break;
case 12:
return 1957;
break;
case 13:
return 2424;
break;
case 14:
return 2444;
break;
case 15:
return 2447;
break;
case 16:
return 2450;
break;
case 17:
return 2614;
break;
case 18:
return 2617;
break;
case 19:
return 2620;
break;
case 20:
return 3786;
break;
case 21:
return 3789;
break;
case 22:
return 3864;
break;
case 23:
return 3867;
break;
case 24:
return 3870;
break;
case 25:
return 3873;
break;
case 26:
return 5364;
break;
case 27:
return 5367;
break;
case 28:
return 5469;
break;
case 29:
return 5472;
break;
case 30:
return 6431;
break;
case 31:
return 6434;
break;
case 32:
return 7255;
break;
case 33:
return 7258;
break;
case 34:
return 7261;
break;
case 35:
return 7970;
break;
case 36:
return 7973;
break;
case 37:
return 7976;
break;
case 38:
return 7979;
break;
case 39:
return 8501;
break;
case 40:
return 8504;
break;
case 41:
return 8507;
break;
case 42:
return 8510;
break;
case 43:
return 8906;
break;
case 44:
return 8909;
break;
case 45:
return 8912;
break;
case 46:
return 10287;
break;
case 47:
return 10290;
break;
case 48:
return 10413;
break;
case 49:
return 10416;
break;
case 50:
return 11824;
break;
case 51:
return 11827;
break;
}}
return 14192;
}

int func_385(){
return Global_32164;
}

int func_386(){
return Global_32163;
}

int func_387(int iParam0){
return (iParam0 / 32);
}

int func_388(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=(20 - 1);
if(bParam1){
iVar0=13;
}
iVar1=0;
while (iVar1 < iVar0){
iVar2=iVar1;
if(!func_391(iVar2) || iParam0){
if(!func_389(PLAYER::PLAYER_ID(), iVar2, 0)){
return 0;
}}
iVar1++;
}
return 1;
}

int func_389(int iParam0, int iParam1, int iParam2){
var uVar0;
if(iParam0 !=func_390()){
uVar0=iParam1;
switch (iParam2){
case 0:
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_434, uVar0);
break;
}}
return 1;
}

int func_390(){
return -1;
}

int func_391(int iParam0){
switch (iParam0){
case 18:
case 17:
case 19:
return 1;
break;
}
return 0;
}

int func_392(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2850651[iParam0 /*3*/][func_231(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_393(int iParam0, int iParam1, int iParam2){
if(iParam2==0){}
switch (iParam0){
case 53:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 39:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 51:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 52:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 60:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 30;
case 4:
return 60;
case 5:
return 120;
default:
}
break;
case 61:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 30;
default:
}
break;
case 62:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
default:
}
break;
case 63:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
default:
}
break;
case 16:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 4;
default:
}
break;
case 0:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 4;
default:
}
break;
case 12:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 11:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 19:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 15:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 17:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 21:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 14:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 20;
default:
}
break;
case 1:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 2:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 3:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 4:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 5:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 6:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 7:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 8:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 9:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 10:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 20:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 22:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 23:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 24:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 25:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 26:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 27:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 28:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 29:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 30:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 31:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 32:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 33:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 34:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 35:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 36:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 37:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 38:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 40:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 41:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 42:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 43:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 44:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 100;
case 4:
return 200;
case 5:
return 500;
default:
}
break;
case 45:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 47:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 49:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1000;
case 3:
return 10000;
case 4:
return 25000;
case 5:
return 50000;
default:
}
break;
case 48:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 3;
case 3:
return 5;
case 4:
return 7;
case 5:
return 10;
default:
}
break;
case 54:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 55:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 56:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 250;
case 4:
return 500;
case 5:
return 1000;
default:
}
break;
case 57:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 58:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 59:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 46:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 134:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 135:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 136:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 137:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 138:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 128:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 129:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 130:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 131:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 132:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 133:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 139:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 140:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 141:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 142:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 143:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 144:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 145:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 146:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 25;
default:
}
break;
case 67:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 147:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_25307;
case 3:
return Global_262145.f_25308;
case 4:
return Global_262145.f_25309;
case 5:
return Global_262145.f_25310;
default:
}
break;
case 148:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_25307;
case 3:
return Global_262145.f_25308;
case 4:
return Global_262145.f_25309;
case 5:
return Global_262145.f_25310;
default:
}
break;
case 149:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_25307;
case 3:
return Global_262145.f_25308;
case 4:
return Global_262145.f_25309;
case 5:
return Global_262145.f_25310;
default:
}
break;
case 150:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_25307;
case 3:
return Global_262145.f_25308;
case 4:
return Global_262145.f_25309;
case 5:
return Global_262145.f_25310;
default:
}
break;
case 151:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 70:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 71:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 72:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 73:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 74:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 75:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 76:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 77:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 3;
case 4:
return 5;
case 5:
return 10;
default:
}
break;
case 78:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 79:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 80:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 81:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 82:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 20;
case 4:
return 30;
case 5:
return 50;
default:
}
break;
case 83:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 100000;
case 3:
return 250000;
case 4:
return 500000;
case 5:
return 1000000;
default:
}
break;
case 84:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 85:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1000;
case 3:
return 3000;
case 4:
return 15000;
case 5:
return 55000;
default:
}
break;
case 86:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 87:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 88:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 40;
default:
}
break;
case 89:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 15;
case 5:
return 20;
default:
}
break;
case 90:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 25000;
case 3:
return 50000;
case 4:
return 75000;
case 5:
return 100000;
default:
}
break;
case 91:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 20;
case 4:
return 30;
case 5:
return 40;
default:
}
break;
case 92:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28684;
case 3:
return Global_262145.f_28685;
case 4:
return Global_262145.f_28686;
case 5:
return Global_262145.f_28687;
default:
}
break;
case 93:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28851;
case 3:
return Global_262145.f_28852;
case 4:
return Global_262145.f_28853;
case 5:
return Global_262145.f_28854;
default:
}
break;
case 94:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28885;
case 3:
return Global_262145.f_28886;
case 4:
return Global_262145.f_28887;
case 5:
return Global_262145.f_28888;
default:
}
break;
case 95:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28889;
case 3:
return Global_262145.f_28890;
case 4:
return Global_262145.f_28891;
case 5:
return Global_262145.f_28892;
default:
}
break;
case 96:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28580;
case 3:
return Global_262145.f_28581;
case 4:
return Global_262145.f_28582;
case 5:
return Global_262145.f_28583;
default:
}
break;
case 97:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return Global_262145.f_28855;
case 3:
return Global_262145.f_28856;
case 4:
return Global_262145.f_28857;
case 5:
return Global_262145.f_28858;
default:
}
break;
case 99:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 100:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 101:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 50000;
case 3:
return 250000;
case 4:
return 750000;
case 5:
return 1000000;
default:
}
break;
case 102:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 103:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 104:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 105:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1000000;
case 3:
return 5000000;
case 4:
return 10000000;
case 5:
return 20000000;
default:
}
break;
case 106:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 107:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 108:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 109:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 110:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 112:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 114:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 40;
default:
}
break;
case 115:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 116:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 30;
default:
}
break;
case 111:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 30;
case 3:
return 60;
case 4:
return 120;
case 5:
return 240;
default:
}
break;
case 113:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 10;
case 3:
return 25;
case 4:
return 50;
case 5:
return 100;
default:
}
break;
case 117:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 118:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 25;
case 5:
return 50;
default:
}
break;
case 119:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 120:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 5;
default:
}
break;
case 121:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 122:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 123:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 124:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
case 125:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
case 4:
return 3;
case 5:
return 5;
default:
}
break;
case 126:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 15;
case 4:
return 30;
case 5:
return 60;
default:
}
break;
case 127:
switch (iParam1){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
return 10;
case 4:
return 20;
case 5:
return 50;
default:
}
break;
}
return 999;
}

int func_394(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Global_2850194[iParam0 /*3*/][func_231(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


bool func_395(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
if(bParam2){
iParam0=func_398(iParam1, 3);
}else{
iParam0=func_398(iParam1, 4);
}}
return (func_381(iParam0, -1) || func_396(iParam0, -1));
}


bool func_396(int iParam0, int iParam1){
return func_399(func_397(iParam0), iParam1);
}

int func_397(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(iParam0 <=480){
iVar1=iParam0;
iVar0=(3112 + iVar1);
}elseif(iParam0 < 864){
iVar1=(iParam0 - 480);
iVar0=(6029 + iVar1);
}elseif(iParam0 < 1248){
iVar1=(iParam0 - 864);
iVar0=(15562 + iVar1);
}elseif(iParam0 < 1372){
iVar1=(iParam0 - 1248);
iVar0=(28355 + iVar1);
}elseif(iParam0 < 1500){
iVar1=(iParam0 - 1372);
iVar0=(30355 + iVar1);
}elseif(iParam0 < 1564){
iVar1=(iParam0 - 1500);
iVar0=(32411 + iVar1);
}elseif(iParam0 < 1628){
iVar1=(iParam0 - 1564);
iVar0=(41251 + iVar1);
}else{
iVar2=iParam0;
}
return iVar0;
}

int func_398(int iParam0, int iParam1){
int iVar0;
iVar0=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
if(iVar0 !=-1){
return (129 + iVar0);
}
return -1;
}


bool func_399(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_232();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_400(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8){
int iVar0;
int iVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(iParam4==0){
iVar1=func_402(iVar0, sParam1, iParam4);
iParam4=MISC::GET_HASH_KEY(func_401(iVar1));
}
if(iParam3==449512698){
return 0;
}
switch (iParam4){
case joaat("CHEST_FULL"):
case joaat("CHEST_LEFT"):
case joaat("CHEST_MID"):
case joaat("CHEST_RIGHT"):
case joaat("CHEST_STOM"):
case joaat("CHEST_STOM_FULL"):
case joaat("SIDE_RIGHT"):
case joaat("TORSO_SIDE_LEFT"):
case joaat("TORSO_SIDE_RIGHT"):
case -1238079313:
case joaat("STOMACH_FULL"):
case joaat("STOMACH_LEFT"):
case joaat("STOMACH_LOWER_LEFT"):
case joaat("STOMACH_LOWER_RIGHT"):
case 1361645381:
case joaat("STOMACH_RIGHT"):
if(bParam5){
return 0;
}
if((((iParam4==joaat("CHEST_FULL") || (iParam4==joaat("CHEST_MID") && iVar0==joaat("mp_f_freemode_01"))) || iParam4==joaat("CHEST_RIGHT")) || iParam4==joaat("CHEST_STOM")) || iParam4==joaat("CHEST_STOM_FULL")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_408(13, -1)){
return 0;
}elseif(func_408(14, -1)){
return 0;
}elseif(func_408(15, -1)){
return 0;
}elseif(func_408(16, -1)){
return 0;
}elseif(func_408(71, -1)){
return 0;
}elseif(func_408(72, -1)){
}
}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
return 0;
}elseif(Global_4540628==71){
return 0;
}elseif(Global_4540628==72){
}}}elseif(iParam4==joaat("CHEST_LEFT")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_408(13, -1)){
return 0;
}elseif(func_408(14, -1)){
return 0;
}elseif(func_408(15, -1)){
return 0;
}elseif(func_408(16, -1)){
return 0;
}elseif(func_408(71, -1)){
return 0;
}elseif(func_408(72, -1)){
}
}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
return 0;
}elseif(Global_4540628==71){
return 0;
}elseif(Global_4540628==72){
}}}elseif((iParam4==joaat("STOMACH_FULL") || iParam4==1361645381) || iParam4==joaat("STOMACH_LEFT")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_408(13, -1)){
}elseif(func_408(14, -1)){
return 0;
}elseif(func_408(15, -1)){
return 0;
}elseif(func_408(16, -1)){
}elseif(func_408(71, -1)){
return 0;
}elseif(func_408(72, -1)){
}
}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
return 0;
}elseif(Global_4540628==72){
}}}elseif(iParam4==joaat("BACK_UPPER")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_408(13, -1)){
}elseif(func_408(14, -1)){
}elseif(func_408(15, -1)){
}elseif(func_408(16, -1)){
}elseif(func_408(71, -1)){
}elseif(func_408(72, -1)){
}
}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}}
break;
case 1484379715:
case joaat("BACK_FULL"):
case joaat("BACK_FULL_ARMS_FULL_BACK"):
case joaat("BACK_FULL_SHORT"):
case joaat("BACK_LOWER"):
case joaat("BACK_MID"):
case joaat("BACK_UPPER"):
case joaat("BACK_UPPER_LEFT"):
case joaat("BACK_UPPER_RIGHT"):
if(bParam8){
return 0;
}
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_408(13, -1)){
}
elseif(func_408(14, -1)){
}
elseif(func_408(15, -1)){
return 0;
}
elseif(func_408(16, -1)){
}
elseif(func_408(71, -1)){
}
elseif(func_408(72, -1)){
return 0;
}}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
return 0;
}}
break;
case 1019352240:
if(bParam8){
if(iVar0==joaat("mp_m_freemode_01")){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_408(15, -1)){
return 0;
}
}}elseif(Global_4540628==15){
return 0;
}}}
if(bParam6){
return 0;
}
if(bParam5){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_408(13, -1)){
return 0;
}
elseif(func_408(14, -1)){
return 0;
}
elseif(func_408(15, -1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB")){
return 0;
}
}
elseif(func_408(16, -1)){
}
elseif(func_408(71, -1)){
}
elseif(func_408(72, -1)){
}}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB")){
return 0;
}}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}
break;
case 0:
case 2:
case joaat("rank"):
if(bParam5){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
switch (MISC::GET_HASH_KEY(sParam1)){
case joaat("TAT_FM_011"):
case joaat("TAT_FM_012"):
case joaat("TAT_FM_019"):
case joaat("TAT_FM_020"):
case joaat("TAT_FM_021"):
case joaat("TAT_FM_218"):
case joaat("TAT_FM_219"):
case joaat("TAT_FM_220"):
case joaat("TAT_FM_225"):
case joaat("TAT_FM_226"):
case joaat("TAT_FM_230"):
case joaat("TAT_FM_233"):
case joaat("TAT_FM_235"):
case joaat("TAT_FM_237"):
case joaat("TAT_FM_245"):
return 0;
break;
}}}
if(iVar0==joaat("mp_m_freemode_01")){
}elseif(iVar0==joaat("mp_f_freemode_01")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_408(13, -1)){
}elseif(func_408(14, -1)){
}elseif(func_408(15, -1)){
}elseif(func_408(16, -1)){
}elseif(func_408(71, -1)){
}elseif(func_408(72, -1)){
}
}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}}
break;
case joaat("torsoDecal"):
if(bParam7){
return 0;
}
break;
}
return 1;
}


char* func_401(int iParam0){
switch (iParam0){
case 0:
return "ARM_LEFT_FULL_SLEEVE";
break;
case 1:
return "ARM_LEFT_SHORT_SLEEVE";
break;
case 2:
return "ARM_LEFT_LOWER_SLEEVE";
break;
case 3:
return "ARM_LEFT_LOWER_INNER";
break;
case 4:
return "ARM_LEFT_LOWER_OUTER";
break;
case 5:
return "ARM_LEFT_WRIST";
break;
case 6:
return "ARM_LEFT_UPPER_SLEEVE";
break;
case 7:
return "ARM_LEFT_UPPER_TRICEP";
break;
case 8:
return "ARM_LEFT_UPPER_SIDE";
break;
case 9:
return "ARM_LEFT_UPPER_BICEP";
break;
case 10:
return "ARM_LEFT_SHOULDER";
break;
case 11:
return "ARM_LEFT_ELBOW";
break;
case 12:
return "ARM_RIGHT_FULL_SLEEVE";
break;
case 13:
return "ARM_RIGHT_SHORT_SLEEVE";
break;
case 14:
return "ARM_RIGHT_LOWER_SLEEVE";
break;
case 15:
return "ARM_RIGHT_LOWER_INNER";
break;
case 16:
return "ARM_RIGHT_LOWER_OUTER";
break;
case 17:
return "ARM_RIGHT_WRIST";
break;
case 18:
return "ARM_RIGHT_UPPER_SLEEVE";
break;
case 19:
return "ARM_RIGHT_UPPER_TRICEP";
break;
case 20:
return "ARM_RIGHT_UPPER_SIDE";
break;
case 21:
return "ARM_RIGHT_UPPER_BICEP";
break;
case 22:
return "ARM_RIGHT_SHOULDER";
break;
case 23:
return "ARM_RIGHT_ELBOW";
break;
case 24:
return "HAND_LEFT";
break;
case 25:
return "HAND_RIGHT";
break;
case 26:
return "BACK_FULL";
break;
case 27:
return "BACK_FULL_ARMS_FULL_BACK";
break;
case 28:
return "BACK_FULL_SHORT";
break;
case 29:
return "BACK_MID";
break;
case 30:
return "BACK_UPPER";
break;
case 31:
return "BACK_UPPER_LEFT";
break;
case 32:
return "BACK_UPPER_RIGHT";
break;
case 33:
return "BACK_LOWER";
break;
case 34:
return "BACK_LOWER_LEFT";
break;
case 35:
return "BACK_LOWER_MID";
break;
case 36:
return "BACK_LOWER_RIGHT";
break;
case 37:
return "CHEST_FULL";
break;
case 38:
return "CHEST_STOM";
break;
case 39:
return "CHEST_STOM_FULL";
break;
case 40:
return "CHEST_LEFT";
break;
case 41:
return "CHEST_UPPER_LEFT";
break;
case 42:
return "CHEST_RIGHT";
break;
case 43:
return "CHEST_UPPER_RIGHT";
break;
case 44:
return "CHEST_MID";
break;
case 45:
return "TORSO_SIDE_RIGHT";
break;
case 46:
return "TORSO_SIDE_LEFT";
break;
case 47:
return "STOMACH_FULL";
break;
case 48:
return "STOMACH_UPPER";
break;
case 49:
return "STOMACH_UPPER_LEFT";
break;
case 50:
return "STOMACH_UPPER_RIGHT";
break;
case 51:
return "STOMACH_LOWER";
break;
case 52:
return "STOMACH_LOWER_LEFT";
break;
case 53:
return "STOMACH_LOWER_RIGHT";
break;
case 54:
return "STOMACH_LEFT";
break;
case 55:
return "STOMACH_RIGHT";
break;
case 56:
return "FACE";
break;
case 57:
return "HEAD_LEFT";
break;
case 58:
return "HEAD_RIGHT";
break;
case 59:
return "NECK_FRONT";
break;
case 60:
return "NECK_BACK";
break;
case 61:
return "NECK_LEFT_FULL";
break;
case 62:
return "NECK_LEFT_BACK";
break;
case 63:
return "NECK_RIGHT_FULL";
break;
case 64:
return "NECK_RIGHT_BACK";
break;
case 65:
return "LEG_LEFT_FULL_SLEEVE";
break;
case 66:
return "LEG_LEFT_FULL_FRONT";
break;
case 67:
return "LEG_LEFT_FULL_BACK";
break;
case 68:
return "LEG_LEFT_UPPER_SLEEVE";
break;
case 69:
return "LEG_LEFT_UPPER_FRONT";
break;
case 70:
return "LEG_LEFT_UPPER_BACK";
break;
case 71:
return "LEG_LEFT_UPPER_OUTER";
break;
case 72:
return "LEG_LEFT_UPPER_INNER";
break;
case 73:
return "LEG_LEFT_LOWER_SLEEVE";
break;
case 74:
return "LEG_LEFT_LOWER_FRONT";
break;
case 75:
return "LEG_LEFT_LOWER_BACK";
break;
case 76:
return "LEG_LEFT_LOWER_OUTER";
break;
case 77:
return "LEG_LEFT_LOWER_INNER";
break;
case 78:
return "LEG_LEFT_KNEE";
break;
case 79:
return "LEG_LEFT_ANKLE";
break;
case 80:
return "LEG_LEFT_CALF";
break;
case 81:
return "LEG_RIGHT_FULL_SLEEVE";
break;
case 82:
return "LEG_RIGHT_FULL_FRONT";
break;
case 83:
return "LEG_RIGHT_FULL_BACK";
break;
case 84:
return "LEG_RIGHT_UPPER_SLEEVE";
break;
case 85:
return "LEG_RIGHT_UPPER_FRONT";
break;
case 86:
return "LEG_RIGHT_UPPER_BACK";
break;
case 87:
return "LEG_RIGHT_UPPER_OUTER";
break;
case 88:
return "LEG_RIGHT_UPPER_INNER";
break;
case 89:
return "LEG_RIGHT_LOWER_SLEEVE";
break;
case 90:
return "LEG_RIGHT_LOWER_FRONT";
break;
case 91:
return "LEG_RIGHT_LOWER_BACK";
break;
case 92:
return "LEG_RIGHT_LOWER_OUTER";
break;
case 93:
return "LEG_RIGHT_LOWER_INNER";
break;
case 94:
return "LEG_RIGHT_KNEE";
break;
case 95:
return "LEG_RIGHT_ANKLE";
break;
case 96:
return "LEG_RIGHT_CALF";
break;
case 97:
return "FOOT_LEFT";
break;
case 98:
return "FOOT_RIGHT";
break;
}
return "";
}

int func_402(int iParam0, char* sParam1, int iParam2){
switch (iParam2){
case 1019352240:
case 2140335355:
case joaat("torsoDecal"):
return -1;
break;
}
switch (iParam2){
case joaat("ARM_LEFT_FULL_SLEEVE"):
return 0;
break;
case joaat("ARM_LEFT_SHORT_SLEEVE"):
return 1;
break;
case joaat("ARM_LEFT_LOWER_SLEEVE"):
return 2;
break;
case joaat("ARM_LEFT_LOWER_INNER"):
return 3;
break;
case joaat("ARM_LEFT_LOWER_OUTER"):
return 4;
break;
case joaat("ARM_LEFT_WRIST"):
return 5;
break;
case joaat("ARM_LEFT_UPPER_SLEEVE"):
return 6;
break;
case joaat("ARM_LEFT_UPPER_TRICEP"):
return 7;
break;
case joaat("ARM_LEFT_UPPER_SIDE"):
return 8;
break;
case joaat("ARM_LEFT_UPPER_BICEP"):
return 9;
break;
case joaat("ARM_LEFT_SHOULDER"):
return 10;
break;
case joaat("ARM_LEFT_ELBOW"):
return 11;
break;
case joaat("ARM_RIGHT_FULL_SLEEVE"):
return 12;
break;
case joaat("ARM_RIGHT_SHORT_SLEEVE"):
return 13;
break;
case joaat("ARM_RIGHT_LOWER_SLEEVE"):
return 14;
break;
case joaat("ARM_RIGHT_LOWER_INNER"):
return 15;
break;
case joaat("ARM_RIGHT_LOWER_OUTER"):
return 16;
break;
case joaat("ARM_RIGHT_WRIST"):
return 17;
break;
case joaat("ARM_RIGHT_UPPER_SLEEVE"):
return 18;
break;
case joaat("ARM_RIGHT_UPPER_TRICEP"):
return 19;
break;
case joaat("ARM_RIGHT_UPPER_SIDE"):
return 20;
break;
case joaat("ARM_RIGHT_UPPER_BICEP"):
return 21;
break;
case joaat("ARM_RIGHT_SHOULDER"):
return 22;
break;
case joaat("ARM_RIGHT_ELBOW"):
return 23;
break;
case joaat("HAND_LEFT"):
return 24;
break;
case joaat("HAND_RIGHT"):
return 25;
break;
case joaat("BACK_FULL"):
return 26;
break;
case joaat("BACK_FULL_ARMS_FULL_BACK"):
return 27;
break;
case joaat("BACK_FULL_SHORT"):
return 28;
break;
case joaat("BACK_MID"):
return 29;
break;
case joaat("BACK_UPPER"):
return 30;
break;
case joaat("BACK_UPPER_LEFT"):
return 31;
break;
case joaat("BACK_UPPER_RIGHT"):
return 32;
break;
case joaat("BACK_LOWER"):
return 33;
break;
case joaat("BACK_LOWER_LEFT"):
return 34;
break;
case joaat("BACK_LOWER_MID"):
return 35;
break;
case joaat("BACK_LOWER_RIGHT"):
return 36;
break;
case joaat("CHEST_FULL"):
return 37;
break;
case joaat("CHEST_STOM"):
return 38;
break;
case joaat("CHEST_STOM_FULL"):
return 39;
break;
case joaat("CHEST_LEFT"):
return 40;
break;
case joaat("CHEST_UPPER_LEFT"):
return 41;
break;
case joaat("CHEST_RIGHT"):
return 42;
break;
case joaat("CHEST_UPPER_RIGHT"):
return 43;
break;
case joaat("CHEST_MID"):
return 44;
break;
case joaat("TORSO_SIDE_RIGHT"):
return 45;
break;
case joaat("TORSO_SIDE_LEFT"):
return 46;
break;
case joaat("STOMACH_FULL"):
return 47;
break;
case joaat("STOMACH_UPPER"):
return 48;
break;
case joaat("STOMACH_UPPER_LEFT"):
return 49;
break;
case joaat("STOMACH_UPPER_RIGHT"):
return 50;
break;
case joaat("STOMACH_LOWER"):
return 51;
break;
case joaat("STOMACH_LOWER_LEFT"):
return 52;
break;
case joaat("STOMACH_LOWER_RIGHT"):
return 53;
break;
case joaat("STOMACH_LEFT"):
return 54;
break;
case joaat("STOMACH_RIGHT"):
return 55;
break;
case joaat("FACE"):
return 56;
break;
case joaat("HEAD_LEFT"):
return 57;
break;
case joaat("HEAD_RIGHT"):
return 58;
break;
case joaat("NECK_FRONT"):
return 59;
break;
case joaat("NECK_BACK"):
return 60;
break;
case joaat("NECK_LEFT_FULL"):
return 61;
break;
case joaat("NECK_LEFT_BACK"):
return 62;
break;
case joaat("NECK_RIGHT_FULL"):
return 63;
break;
case joaat("NECK_RIGHT_BACK"):
return 64;
break;
case joaat("LEG_LEFT_FULL_SLEEVE"):
return 65;
break;
case joaat("LEG_LEFT_FULL_FRONT"):
return 66;
break;
case joaat("LEG_LEFT_FULL_BACK"):
return 67;
break;
case joaat("LEG_LEFT_UPPER_SLEEVE"):
return 68;
break;
case joaat("LEG_LEFT_UPPER_FRONT"):
return 69;
break;
case joaat("LEG_LEFT_UPPER_BACK"):
return 70;
break;
case joaat("LEG_LEFT_UPPER_OUTER"):
return 71;
break;
case joaat("LEG_LEFT_UPPER_INNER"):
return 72;
break;
case joaat("LEG_LEFT_LOWER_SLEEVE"):
return 73;
break;
case joaat("LEG_LEFT_LOWER_FRONT"):
return 74;
break;
case joaat("LEG_LEFT_LOWER_BACK"):
return 75;
break;
case joaat("LEG_LEFT_LOWER_OUTER"):
return 76;
break;
case joaat("LEG_LEFT_LOWER_INNER"):
return 77;
break;
case joaat("LEG_LEFT_KNEE"):
return 78;
break;
case joaat("LEG_LEFT_ANKLE"):
return 79;
break;
case joaat("LEG_LEFT_CALF"):
return 80;
break;
case joaat("LEG_RIGHT_FULL_SLEEVE"):
return 81;
break;
case joaat("LEG_RIGHT_FULL_FRONT"):
return 82;
break;
case joaat("LEG_RIGHT_FULL_BACK"):
return 83;
break;
case joaat("LEG_RIGHT_UPPER_SLEEVE"):
return 84;
break;
case joaat("LEG_RIGHT_UPPER_FRONT"):
return 85;
break;
case joaat("LEG_RIGHT_UPPER_BACK"):
return 86;
break;
case joaat("LEG_RIGHT_UPPER_OUTER"):
return 87;
break;
case joaat("LEG_RIGHT_UPPER_INNER"):
return 88;
break;
case joaat("LEG_RIGHT_LOWER_SLEEVE"):
return 89;
break;
case joaat("LEG_RIGHT_LOWER_FRONT"):
return 90;
break;
case joaat("LEG_RIGHT_LOWER_BACK"):
return 91;
break;
case joaat("LEG_RIGHT_LOWER_OUTER"):
return 92;
break;
case joaat("LEG_RIGHT_LOWER_INNER"):
return 93;
break;
case joaat("LEG_RIGHT_KNEE"):
return 94;
break;
case joaat("LEG_RIGHT_ANKLE"):
return 95;
break;
case joaat("LEG_RIGHT_CALF"):
return 96;
break;
case joaat("FOOT_LEFT"):
return 97;
break;
case joaat("FOOT_RIGHT"):
return 98;
break;
}
switch (MISC::GET_HASH_KEY(sParam1)){
case 1948764112:
return -1;
break;
case joaat("TAT_FM_204"):
return 12;
break;
case joaat("TAT_FM_205"):
return 12;
break;
case joaat("TAT_FM_209"):
if(iParam0==joaat("mp_m_freemode_01")){
return 75;
}else{
return 65;
}
break;
case joaat("TAT_FM_221"):
return 26;
break;
case joaat("TAT_FM_219"):
return 47;
break;
case joaat("TAT_FM_201"):
return 1;
break;
case joaat("TAT_FM_222"):
return 75;
break;
case joaat("TAT_FM_202"):
return 1;
break;
case joaat("TAT_FM_210"):
return 89;
break;
case joaat("TAT_FM_211"):
return 73;
break;
case joaat("TAT_FM_247"):
return 22;
break;
case joaat("TAT_FM_223"):
return 91;
break;
case joaat("TAT_FM_213"):
return 26;
break;
case joaat("TAT_FM_224"):
return 73;
break;
case joaat("TAT_FM_225"):
return 38;
break;
case joaat("TAT_FM_218"):
if(iParam0==joaat("mp_m_freemode_01")){
return 40;
}else{
return 42;
}
break;
case joaat("TAT_FM_214"):
return 31;
break;
case joaat("TAT_FM_226"):
return 42;
break;
case joaat("TAT_FM_220"):
return 47;
break;
case joaat("TAT_FM_227"):
return 75;
break;
case joaat("TAT_FM_228"):
return 20;
break;
case joaat("TAT_FM_215"):
return 32;
break;
case joaat("TAT_FM_229"):
return 14;
break;
case joaat("TAT_FM_230"):
return 52;
break;
case joaat("TAT_FM_231"):
return 30;
break;
case joaat("TAT_FM_232"):
return 6;
break;
case joaat("TAT_FM_233"):
return 80;
break;
case joaat("TAT_FM_207"):
return 13;
break;
case joaat("TAT_FM_234"):
if(iParam0==joaat("mp_m_freemode_01")){
return 67;
}else{
return 75;
}
break;
case joaat("TAT_FM_235"):
if(iParam0==joaat("mp_m_freemode_01")){
return 40;
}else{
return 42;
}
break;
case joaat("TAT_FM_236"):
return 73;
break;
case joaat("TAT_FM_237"):
return 47;
break;
case joaat("TAT_FM_238"):
return 73;
break;
case joaat("TAT_FM_203"):
return 10;
break;
case joaat("TAT_FM_216"):
return 26;
break;
case joaat("TAT_FM_011"):
return 42;
break;
case joaat("TAT_FM_212"):
return 89;
break;
case joaat("TAT_FM_239"):
return 16;
break;
case joaat("TAT_FM_240"):
return 91;
break;
case joaat("TAT_FM_241"):
return 82;
break;
case joaat("TAT_FM_208"):
return 13;
break;
case joaat("TAT_FM_017"):
return 75;
break;
case joaat("TAT_FM_217"):
return 26;
break;
case joaat("TAT_FM_242"):
return 10;
break;
case joaat("TAT_FM_243"):
return 90;
break;
case joaat("TAT_FM_244"):
return 89;
break;
case joaat("TAT_FM_245"):
return 38;
break;
case joaat("TAT_FM_010"):
return 20;
break;
case joaat("TAT_FM_246"):
return 26;
break;
case joaat("TAT_FM_206"):
return 18;
break;
case joaat("TAT_FM_008"):
return 56;
break;
case joaat("TAT_FM_009"):
return 3;
break;
case joaat("TAT_FM_012"):
return 47;
break;
case joaat("TAT_FM_013"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_014"):
return 89;
break;
case joaat("TAT_FM_015"):
return 6;
break;
case joaat("TAT_FM_016"):
return 33;
break;
case joaat("TAT_FM_018"):
return 16;
break;
case joaat("TAT_FM_019"):
return 40;
break;
case joaat("TAT_FM_020"):
return 40;
break;
case joaat("TAT_FM_021"):
return 40;
break;
case joaat("TAT_FM_022"):
return 33;
break;
case joaat("TAT_FM_023"):
return 6;
break;
case joaat("TAT_FM_024"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_025"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_026"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_027"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case -1516865571:
return 44;
break;
case 2130586285:
return 32;
break;
case 386521802:
return 3;
break;
case 579924440:
return 33;
break;
case 741770527:
return 31;
break;
case 1173403795:
return 33;
break;
case -569087776:
return 45;
break;
case -1344959389:
return 89;
break;
case -211217527:
return 64;
break;
case 86488838:
return 53;
break;
case 705494964:
return 52;
break;
case -137684175:
return 30;
break;
case -979388709:
return 41;
break;
case 324653646:
return 43;
break;
case -518820414:
return 52;
break;
case -1361737401:
return 20;
break;
case 2010946386:
return 8;
break;
case -894811920:
return 10;
break;
case 165068612:
return 28;
break;
case 1549427782:
return 40;
break;
case -927613913:
return 42;
break;
case 385144996:
return 56;
break;
case -814626401:
return 57;
break;
case -1248225809:
return 52;
break;
case 1910378101:
return 8;
break;
case -2124501642:
return 91;
break;
case -1943747838:
return 20;
break;
case -1570115700:
return 75;
break;
case 931699147:
return 62;
break;
case 1019520067:
return 63;
break;
case joaat("TORSO_P2_4_4"):
return 20;
break;
case joaat("TORSO_P2_4_5"):
return 58;
break;
case joaat("TORSO_P2_4_6"):
return 47;
break;
case -1628534963:
return 37;
break;
case -1051898870:
return 33;
break;
case 1334929540:
return 80;
break;
case 1097124907:
return 64;
break;
case 747545215:
return 62;
break;
case 61892743:
return 96;
break;
case 501548332:
return 15;
break;
case -244169717:
return 48;
break;
case 421886905:
return 37;
break;
case -1398791504:
return 33;
break;
case -106152761:
return 3;
break;
case 125491300:
return 41;
break;
case -1576950557:
return 52;
break;
case -1815115649:
return 53;
break;
case -1043396870:
return 59;
break;
case -1388618285:
return 3;
break;
case -948484638:
return 48;
break;
case 643387405:
return 33;
break;
case 979630098:
return 64;
break;
case 211688583:
return 62;
break;
case 1343791995:
return 60;
break;
case 576309246:
return 20;
break;
case 949154944:
return 40;
break;
case -622511834:
return 42;
break;
case -275651969:
return 11;
break;
case -1256283855:
return 15;
break;
case 955525350:
return 40;
break;
case 1252641873:
return 22;
break;
case -2034766264:
return 40;
break;
case 1748021562:
return 22;
break;
case -657146050:
return 30;
break;
case -955835485:
return 19;
break;
case -1269959119:
return 40;
break;
case -1478763187:
return 4;
break;
case -1881592504:
return 15;
break;
case 2115996117:
return 62;
break;
case 1824417551:
return 45;
break;
case 1502068898:
return 24;
break;
case -2019287742:
return 22;
break;
case -1780827729:
return 80;
break;
case -1966497207:
return 25;
break;
case -2126999769:
return 30;
break;
case 2014772448:
return 30;
break;
case 1705760778:
return 44;
break;
case 497993745:
return 15;
break;
case 1142887665:
return 9;
break;
case 22777707:
return 3;
break;
case 799173624:
return 16;
break;
case -410297401:
return 17;
break;
case 214410819:
return 75;
break;
case -2098342992:
return 23;
break;
case -1280920283:
return 64;
break;
case -1501455653:
return 16;
break;
case 2117454408:
return 25;
break;
case -1945704982:
return 32;
break;
case -1581870771:
return 31;
break;
case -1350521631:
return 10;
break;
case -954508266:
return 5;
break;
case -716244867:
return 4;
break;
case 185361399:
return 52;
break;
case -1208107213:
return 35;
break;
case -812421538:
return 30;
break;
case -566096965:
return 32;
break;
case -316757644:
return 38;
break;
case -103496992:
return 24;
break;
case 391708136:
return 52;
break;
case 616667309:
return 20;
break;
case 870102755:
return 10;
break;
case 1093030262:
return 92;
break;
case 1378218869:
return 0;
break;
case 332555747:
return 80;
break;
case 1077526193:
return 34;
break;
case 1332632858:
return 91;
break;
case 1556379590:
return 10;
break;
case 1780093553:
return 22;
break;
case 2001284303:
return 14;
break;
case -2059941716:
return 30;
break;
case -1759875983:
return 40;
break;
case -1521153818:
return 24;
break;
}
if(iParam2==0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return -1;
}
switch (iParam2){
case joaat("rank"):
return -1;
break;
}
return -1;
}


bool func_403(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
func_407(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam3);
}
switch (iParam2){
case 0:
switch (iParam1){
case 0:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
break;
case 1:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
break;
case 2:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
break;
case 3:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
break;
case 4:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
break;
case 5:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
break;
case 6:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
break;
case 7:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
break;
case 8:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
break;
case 9:
if(func_18() || func_17()){
iVar1=400;
if(func_379() && (func_406() || func_405())){
iVar1=0;
}
func_407(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
}
break;
case 10:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
break;
case 11:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
break;
case 12:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
break;
case 13:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
break;
case 14:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
break;
case 15:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
break;
case 16:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
break;
case 17:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
break;
case 18:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
break;
case 19:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
break;
case 20:
func_407(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
break;
default:
func_404(sParam0, iParam2, iParam1, 21);
break;
}
break;
case 1:
switch (iParam1){
case 0:
if(func_18() || func_17()){
iVar1=450;
if(func_379() && (func_406() || func_405())){
iVar1=0;
}
func_407(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
}
break;
case 1:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
break;
case 2:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
break;
case 3:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
break;
case 4:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
break;
case 5:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
break;
case 6:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
break;
case 7:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
break;
case 8:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
break;
case 9:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
break;
case 10:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
break;
case 11:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
break;
case 12:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
break;
case 13:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
break;
case 14:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
break;
case 15:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
break;
case 16:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
break;
case 17:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
break;
case 18:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
break;
case 19:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
break;
case 20:
break;
case 21:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
break;
case 22:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
break;
case 23:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
break;
case 24:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
break;
case 25:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
break;
case 26:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
break;
case 27:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
break;
case 28:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
break;
case 29:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
break;
case 30:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
break;
case 31:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
break;
case 32:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
break;
case 33:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
break;
case 34:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
break;
case 35:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
break;
case 36:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
break;
case 37:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
break;
case 38:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
break;
case 39:
func_407(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
break;
default:
func_404(sParam0, iParam2, iParam1, 40);
break;
}
break;
case 2:
switch (iParam1){
case 0:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
break;
case 1:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
break;
case 2:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
break;
case 3:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
break;
case 4:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
break;
case 5:
if(func_18() || func_17()){
iVar1=380;
if(func_379() && (func_406() || func_405())){
iVar1=0;
}
func_407(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
}
break;
case 6:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
break;
case 7:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
break;
case 8:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
break;
case 9:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
break;
case 10:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
break;
case 11:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
break;
case 12:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
break;
case 13:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
break;
case 14:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
break;
case 15:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
break;
case 16:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
break;
case 17:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
break;
case 18:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
break;
case 19:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
break;
case 20:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
break;
case 21:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
break;
case 22:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
break;
case 23:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
break;
case 24:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
break;
case 25:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
break;
case 26:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
break;
case 27:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
break;
case 28:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
break;
case 29:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
break;
case 30:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
break;
case 31:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
break;
case 32:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
break;
case 33:
func_407(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
break;
default:
func_404(sParam0, iParam2, iParam1, 34);
break;
}
break;
case 3:
case 4:
switch (iParam1){
case 0:
func_407(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round((to_float(20000) * Global_262145.f_2917)), 0);
break;
case 1:
func_407(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round((to_float(1400) * Global_262145.f_2918)), 2);
break;
case 2:
func_407(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round((to_float(9750) * Global_262145.f_2919)), 3);
break;
case 3:
func_407(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round((to_float(2150) * Global_262145.f_2920)), 0);
break;
case 4:
func_407(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2921)), 0);
break;
case 54:
func_407(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round((to_float(12400) * Global_262145.f_2922)), 1);
break;
case 5:
func_407(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round((to_float(3500) * Global_262145.f_2923)), 0);
break;
case 6:
func_407(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round((to_float(4950) * Global_262145.f_2924)), 2);
break;
case 55:
func_407(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round((to_float(1350) * Global_262145.f_2925)), 1);
break;
case 7:
func_407(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round((to_float(1450) * Global_262145.f_2926)), 0);
break;
case 8:
func_407(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round((to_float(2700) * Global_262145.f_2927)), 7);
break;
case 9:
func_407(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round((to_float(1200) * Global_262145.f_2928)), 0);
break;
case 10:
func_407(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round((to_float(1500) * Global_262145.f_2929)), 0);
break;
case 11:
func_407(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round((to_float(2650) * Global_262145.f_2930)), 0);
break;
case 56:
func_407(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round((to_float(1900) * Global_262145.f_2931)), 1);
break;
case 12:
func_407(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round((to_float(4950) * Global_262145.f_2932)), 2);
break;
case 57:
func_407(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round((to_float(2400) * Global_262145.f_2933)), 1);
break;
case 58:
func_407(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round((to_float(5100) * Global_262145.f_2934)), 1);
break;
case 59:
func_407(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round((to_float(7400) * Global_262145.f_2935)), 1);
break;
case 60:
func_407(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round((to_float(10000) * Global_262145.f_2936)), 1);
break;
case 17:
func_407(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round((to_float(2400) * Global_262145.f_2941)), 2);
break;
case 18:
func_407(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round((to_float(5100) * Global_262145.f_2942)), 2);
break;
case 19:
func_407(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round((to_float(3600) * Global_262145.f_2943)), 2);
break;
case 20:
func_407(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round((to_float(10000) * Global_262145.f_2944)), 3);
break;
case 21:
func_407(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round((to_float(12500) * Global_262145.f_2945)), 3);
break;
case 22:
func_407(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round((to_float(10000) * Global_262145.f_2946)), 3);
break;
case 23:
func_407(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round((to_float(5000) * Global_262145.f_2947)), 3);
break;
case 24:
func_407(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round((to_float(7500) * Global_262145.f_2948)), 3);
break;
case 25:
func_407(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round((to_float(3750) * Global_262145.f_2949)), 2);
break;
case 26:
func_407(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round((to_float(3750) * Global_262145.f_2950)), 3);
break;
case 27:
func_407(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round((to_float(4800) * Global_262145.f_2951)), 3);
break;
case 28:
func_407(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round((to_float(3500) * Global_262145.f_2952)), 3);
break;
case 61:
func_407(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round((to_float(12350) * Global_262145.f_2953)), 1);
break;
case 62:
func_407(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round((to_float(1900) * Global_262145.f_2954)), 1);
break;
case 63:
func_407(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round((to_float(4500) * Global_262145.f_2955)), 1);
break;
case 64:
func_407(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round((to_float(12250) * Global_262145.f_2956)), 1);
break;
case 65:
func_407(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round((to_float(12300) * Global_262145.f_2957)), 1);
break;
case 29:
func_407(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round((to_float(2500) * Global_262145.f_2958)), 0);
break;
case 30:
func_407(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2959)), 0);
break;
case 31:
func_407(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round((to_float(10000) * Global_262145.f_2960)), 0);
break;
case 66:
func_407(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round((to_float(7500) * Global_262145.f_2961)), 1);
break;
case 32:
func_407(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round((to_float(5000) * Global_262145.f_2962)), 2);
break;
case 33:
func_407(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round((to_float(7300) * Global_262145.f_2963)), 3);
break;
case 34:
func_407(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round((to_float(7250) * Global_262145.f_2964)), 2);
break;
case 35:
func_407(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round((to_float(11900) * Global_262145.f_2965)), 0);
break;
case 36:
func_407(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round((to_float(2750) * Global_262145.f_2966)), 0);
break;
case 37:
func_407(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round((to_float(1750) * Global_262145.f_2967)), 0);
break;
case 38:
func_407(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round((to_float(7300) * Global_262145.f_2968)), 3);
break;
case 39:
func_407(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round((to_float(3250) * Global_262145.f_2969)), 2);
break;
case 40:
func_407(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round((to_float(1000) * Global_262145.f_2970)), 0);
break;
case 67:
func_407(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round((to_float(5000) * Global_262145.f_2971)), 1);
break;
case 41:
func_407(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round((to_float(7500) * Global_262145.f_2972)), 2);
break;
case 68:
func_407(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round((to_float(5100) * Global_262145.f_2973)), 1);
break;
case 42:
func_407(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round((to_float(5050) * Global_262145.f_2974)), 0);
break;
case 43:
func_407(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round((to_float(2450) * Global_262145.f_2975)), 2);
break;
case 44:
func_407(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round((to_float(4950) * Global_262145.f_2976)), 0);
break;
case 45:
func_407(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round((to_float(5100) * Global_262145.f_2977)), 0);
break;
case 46:
func_407(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round((to_float(12250) * Global_262145.f_2978)), 0);
break;
case 47:
func_407(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round((to_float(1150) * Global_262145.f_2979)), 3);
break;
case 48:
func_407(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round((to_float(7500) * Global_262145.f_2980)), 3);
break;
case 49:
func_407(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round((to_float(7600) * Global_262145.f_2981)), 3);
break;
case 50:
func_407(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round((to_float(2600) * Global_262145.f_2982)), 2);
break;
case 51:
func_407(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round((to_float(2500) * Global_262145.f_2983)), 3);
break;
case 52:
func_407(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round((to_float(7450) * Global_262145.f_2984)), 3);
break;
case 53:
func_407(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round((to_float(7500) * Global_262145.f_2985)), 0);
break;
case 69:
func_407(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round((to_float(10000) * Global_262145.f_2986)), 1);
break;
case 70:
func_407(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round((to_float(2500) * Global_262145.f_2987)), 2);
break;
}
if(iVar0==joaat("mp_m_freemode_01")){
switch (iParam1){
case 73:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
break;
case 86:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
break;
case 90:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
break;
case 91:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
break;
case 124:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
break;
case 125:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
break;
case 88:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
break;
case 89:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
break;
case 93:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_407(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
break;
case 14:
func_407(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2938)), 0);
break;
case 15:
func_407(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
break;
case 16:
func_407(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2940)), 0);
break;
case 71:
func_407(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
case 72:
func_407(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
}}elseif(iVar0==joaat("mp_f_freemode_01")){
switch (iParam1){
case 73:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
break;
case 92:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
break;
case 88:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
break;
case 89:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
break;
case 93:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 118:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 119:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 120:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 121:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 122:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_407(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_407(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
break;
case 14:
func_407(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2938)), 0);
break;
case 15:
func_407(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
break;
case 16:
func_407(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
}}
break;
}
if((iParam2==3 || iParam2==4) && iParam1 >=129){
func_404(sParam0, iParam2, iParam1, 129);
}
if(iParam4==22){
sParam0->f_7 *=2;
}
return sParam0->f_11 !=-1;
}


void func_404(char* sParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
struct<8> Var2;
iVar0=(iParam2 - iParam3);
iVar1=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);
if(iVar1 > 0 && iVar0 < iVar1){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, iVar0, &Var2)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var2.f_0)){
sParam0->f_11=iParam2;
MemCopy(sParam0,{
Var2.f_7
}
, 4);
sParam0->f_5=Var2.f_3;
sParam0->f_4=Var2.f_2;
sParam0->f_8=Var2.f_6;
sParam0->f_6=iParam1;
sParam0->f_7=Var2.f_4;
sParam0->f_9=(iParam2 / 32);
sParam0->f_10=(iParam2 % 32);
sParam0->f_12=Var2.f_5;
}}}}

int func_405(){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
if(MISC::IS_BIT_SET(Global_25, 5)){
if(MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3)){
return 1;
}else{
return 0;
}}
if(STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1)){
if(MISC::IS_BIT_SET(uVar0, 5)){
if(MISC::IS_BIT_SET(uVar0, 1) || MISC::IS_BIT_SET(uVar0, 3)){
return 1;
}else{
return 0;
}}}
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152525.f_3){
iVar2=joaat("mpply_plat_up_lb_check");
if(STATS::STAT_GET_INT(iVar2, &uVar1, -1)){
if(MISC::IS_BIT_SET(uVar1, 5)){
return 1;
}}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar3=MISC::GET_PROFILE_SETTING(866);
if(MISC::IS_BIT_SET(iVar3, 1) || MISC::IS_BIT_SET(iVar3, 3)){
return 1;
}}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
MISC::SET_BIT(&iVar4, true);
MISC::SET_BIT(&iVar4, 3);
MISC::SET_BIT(&iVar4, 5);
MISC::SET_BIT(&Global_25, true);
MISC::SET_BIT(&Global_25, 3);
MISC::SET_BIT(&Global_25, 5);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar4=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar4, true);
MISC::SET_BIT(&iVar4, 3);
STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar4);
}
return 1;
}}}
return 0;
}

int func_406(){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
if(MISC::IS_BIT_SET(Global_25, 6)){
if(MISC::IS_BIT_SET(Global_25, 2) || MISC::IS_BIT_SET(Global_25, 4)){
return 1;
}else{
return 0;
}}
if(STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1)){
if(MISC::IS_BIT_SET(uVar0, 6)){
if(MISC::IS_BIT_SET(uVar0, 2) || MISC::IS_BIT_SET(uVar0, 4)){
return 1;
}else{
return 0;
}}}
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152525.f_3){
iVar2=joaat("mpply_plat_up_lb_check");
if(STATS::STAT_GET_INT(iVar2, &uVar1, -1)){
if(MISC::IS_BIT_SET(uVar1, 8)){
return 1;
}}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar3=MISC::GET_PROFILE_SETTING(866);
if(MISC::IS_BIT_SET(iVar3, 2) || MISC::IS_BIT_SET(iVar3, 4)){
return 1;
}}
return 0;
}


void func_407(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9){
char cVar0[32];
sParam0->f_11=iParam1;
StringCopy(sParam0, sParam3, 16);
sParam0->f_4=MISC::GET_HASH_KEY(sParam4);
sParam0->f_5=MISC::GET_HASH_KEY(sParam5);
sParam0->f_8=MISC::GET_HASH_KEY(sParam6);
sParam0->f_6=iParam7;
sParam0->f_7=iParam8;
sParam0->f_9=(iParam1 / 32);
sParam0->f_10=(iParam1 % 32);
sParam0->f_12=iParam9;
if(ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2)){
if((sParam0->f_6==0 || sParam0->f_6==1) || sParam0->f_6==2){
}elseif(sParam0->f_6==3 || sParam0->f_6==4){
StringCopy(&cVar0, "", 32);
if(((((sParam0->f_11==13 || sParam0->f_11==14) || sParam0->f_11==15) || sParam0->f_11==16) || sParam0->f_11==71) || sParam0->f_11==72){
StringConCat(&cVar0, "FM_", 32);
StringConCat(&cVar0, "CREW_", 32);
if(ENTITY::GET_ENTITY_MODEL(iParam2)==joaat("mp_m_freemode_01")){
StringConCat(&cVar0, "M_", 32);
}else{
StringConCat(&cVar0, "F_", 32);
}
StringConCat(&cVar0, sParam5, 32);
}elseif(MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay")){
StringCopy(&cVar0, sParam5, 32);
}else{
if(((((((((((((((((((sParam0->f_11==0 || sParam0->f_11==1) || sParam0->f_11==2) || sParam0->f_11==4) || sParam0->f_11==3) || sParam0->f_11==54) || sParam0->f_11==5) || sParam0->f_11==6) || sParam0->f_11==55) || sParam0->f_11==7) || sParam0->f_11==8) || sParam0->f_11==9) || sParam0->f_11==10) || sParam0->f_11==11) || sParam0->f_11==56) || sParam0->f_11==12) || sParam0->f_11==57) || sParam0->f_11==58) || sParam0->f_11==59) || sParam0->f_11==60){
StringConCat(&cVar0, "FM_Tat_Award_", 32);
}else{
StringConCat(&cVar0, "FM_Tat_", 32);
}
if(ENTITY::GET_ENTITY_MODEL(iParam2)==joaat("mp_m_freemode_01") || sParam0->f_11==20){
StringConCat(&cVar0, "M_", 32);
}else{
StringConCat(&cVar0, "F_", 32);
}
StringConCat(&cVar0, sParam5, 32);
}
sParam0->f_5=MISC::GET_HASH_KEY(&cVar0);
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5)==7){
sParam0->f_11=-1;
}}}}

int func_408(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(iParam0==-1){
return 0;
}
uVar0=func_409(iParam0, iParam1);
iVar1=func_382(iParam0);
if(iVar1 < 0 || iVar1 >=32){
return 0;
}
return MISC::IS_BIT_SET(uVar0, iVar1);
}

int func_409(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_410(iParam0);
if(iVar0==14192){
if(func_386()==2 && func_385()==2){
return 0;
}else{
return 0;
}}
iVar1=func_230(iVar0, iParam1, 0);
return iVar1;
}

int func_410(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=func_387(iVar0);
if((func_386()==0 || func_385()==0) || (func_386()==999 && func_385()==999)){
switch (iVar1){
case 0:
return 1049;
break;
case 1:
return 1050;
break;
case 2:
return 1051;
break;
case 3:
return 1052;
break;
case 4:
return 1053;
break;
case 5:
return 1054;
break;
case 6:
return 1488;
break;
case 7:
return 1489;
break;
case 8:
return 1490;
break;
case 9:
return 1491;
break;
case 10:
return 1949;
break;
case 11:
return 1950;
break;
case 12:
return 1951;
break;
case 13:
return 2425;
break;
case 14:
return 2445;
break;
case 15:
return 2448;
break;
case 16:
return 2451;
break;
case 17:
return 2615;
break;
case 18:
return 2618;
break;
case 19:
return 2621;
break;
case 20:
return 3787;
break;
case 21:
return 3790;
break;
case 22:
return 3865;
break;
case 23:
return 3868;
break;
case 24:
return 3871;
break;
case 25:
return 3874;
break;
case 26:
return 5365;
case 27:
return 5368;
break;
case 28:
return 5470;
break;
case 29:
return 5473;
break;
case 30:
return 6432;
break;
case 31:
return 6435;
break;
case 32:
return 7256;
break;
case 33:
return 7259;
break;
case 34:
return 7262;
break;
case 35:
return 7971;
break;
case 36:
return 7974;
break;
case 37:
return 7977;
break;
case 38:
return 7980;
break;
case 39:
return 8502;
break;
case 40:
return 8505;
break;
case 41:
return 8508;
break;
case 42:
return 8511;
break;
case 43:
return 8907;
break;
case 44:
return 8910;
break;
case 45:
return 8913;
break;
case 46:
return 10288;
break;
case 47:
return 10291;
break;
case 48:
return 10414;
break;
case 49:
return 10417;
break;
case 50:
return 11825;
break;
case 51:
return 11828;
break;
case 52:
break;
}
return 14192;
}
if(func_386()==2 && func_385()==2){
return 14192;
}
return 14192;
}

int func_411(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar2=func_230(1759, -1, 0);
if(iParam1 !=-1){
iVar2=iParam1;
}
if(iVar0 > 15){
iVar3=func_456(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_320(joaat("mp_m_freemode_01"), iVar3, 11, 3);
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl_no_save"), 0)){
switch (iVar2){
case joaat("MP_Elite_M_Tshirt_1"):
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Heist4_Tee_039_M"):
case joaat("MP_Heist4_Tee_041_M"):
case joaat("MP_Heist4_Tee_043_M"):
case joaat("MP_Heist4_Tee_049_M"):
case joaat("MP_Heist4_Tee_051_M"):
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_065_M"):
case -129339642:
case 887263619:
case -598443208:
case -619123295:
case -2139930425:
case 991513037:
case -675149090:
case -507124931:
return 1;
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jacket"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_vest"), 0)){
return 1;
}
return 0;
}}
return 0;
}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
iVar2=func_230(1759, -1, 0);
if(iParam1 !=-1){
iVar2=iParam1;
}
if(iVar0==3){
if(iVar1==14){
return 1;
}}elseif(iVar0 > 15){
iVar5=func_456(iParam0, 11, -1);
if(iVar5 >=256){
iVar6=func_320(joaat("mp_f_freemode_01"), iVar5, 11, 4);
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl_no_save"), 0)){
switch (iVar2){
case joaat("MP_Elite_F_Tshirt_1"):
case joaat("MP_Battle_Clothing_000_F"):
case joaat("MP_Heist4_Tee_039_F"):
case joaat("MP_Heist4_Tee_041_F"):
case joaat("MP_Heist4_Tee_043_F"):
case joaat("MP_Heist4_Tee_049_F"):
case joaat("MP_Heist4_Tee_051_F"):
case joaat("MP_Heist4_Tee_055_F"):
case joaat("MP_Heist4_Tee_057_F"):
case joaat("MP_Heist4_Tee_059_F"):
case joaat("MP_Heist4_Tee_061_F"):
case joaat("MP_Heist4_Tee_063_F"):
case joaat("MP_Heist4_Tee_065_F"):
case 2021781367:
case -436866133:
case 457275657:
case -250832592:
case -798760789:
case -1634791241:
case -1227437948:
case -2045170715:
return 1;
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("jacket"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("biker_vest"), 0)){
return 1;
}
return 0;
}}
return 0;
}}
return 0;
}

int func_412(int iParam0){
int iVar0;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
iVar0=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_96.f_28;
if(iVar0 !=-1 && iVar0 < 4){
if(func_413(iVar0) !=-1 && func_413(iVar0) !=0){
return 1;
}}}
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11)==15){
return 1;
}}}
return 0;
}

int func_413(int iParam0){
if(func_414(1)){
return Global_1665818;
}
if(iParam0 <=-1 || iParam0 >=4){
return -1;
}
return Global_2684801.f_6316[iParam0];
}

int func_414(bool bParam0){
if((func_418(bParam0) || func_416()) || func_415(Global_4718592.f_166301)){
return 1;
}
return 0;
}


bool func_415(int iParam0){
return iParam0==87;
}

int func_416(){
return func_417(Global_4718592.f_113724);
}

int func_417(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31051[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


var func__418(bool bParam0){
if(bParam0){
return (MISC::IS_BIT_SET(Global_4718592.f_160050, 12) && func_419());
}
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}

int func_419(){
if(Global_4718592.f_114294==1 || Global_4718592.f_114294==2){
return 1;
}
return 0;
}

int func_420(int iParam0, bool bParam1){
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
int iVar10;
int iVar11;
int iVar12;
int iVar13;
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 1:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
return 1;
break;
case 1:
case 7:
case 12:
iVar2=func_424(joaat("mp_m_freemode_01"), 11, func_456(iParam0, 11, -1), 0);
if(((iVar1==1 && iVar2==88) || (iVar1==7 && iVar2==89)) || (iVar1==12 && iVar2==87)){
return 1;
}
break;
}
break;
case 2:
switch (iVar1){
case 9:
return 1;
break;
}
break;
case 5:
if(!bParam1){
if(func_408(13, -1)){
return 1;
}
elseif(func_408(14, -1)){
return 1;
}
elseif(func_408(15, -1)){
return 1;
}
elseif(func_408(16, -1)){
return 1;
}
elseif(func_408(71, -1)){
return 1;
}
elseif(func_408(72, -1)){
}
elseif(func_421(PLAYER::PLAYER_ID(), 1) && Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_76.f_21 !=0){
return 1;
}}
break;
default:
if(iVar0 > 15){
iVar3=func_456(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_320(joaat("mp_m_freemode_01"), iVar3, 11, 3);
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_12"), 0)){
return 1;
}
}}
break;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 1:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
break;
}
break;
case 2:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 14:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
break;
}
break;
default:
if(iVar0 > 15){
iVar5=func_456(iParam0, 8, -1);
if(iVar5 >=241){
iVar6=func_320(joaat("mp_m_freemode_01"), iVar5, 8, 3);
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("combat_top"), 0)){
return 1;
}
}}
break;
}}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 2:
return 1;
break;
case 7:
case 4:
case 9:
iVar7=func_424(joaat("mp_f_freemode_01"), 11, func_456(iParam0, 11, -1), 0);
if(((iVar1==7 && iVar7==88) || (iVar1==4 && iVar7==89)) || (iVar1==9 && iVar7==87)){
return 1;
}
break;
}
break;
case 2:
switch (iVar1){
case 0:
case 1:
case 2:
case 3:
case 4:
return 1;
break;
}
break;
case 3:
switch (iVar1){
case 14:
return 1;
break;
}
break;
case 11:
switch (iVar1){
case 10:
case 11:
case 15:
return 1;
break;
}
break;
default:
if(iVar0 > 15){
iVar8=func_456(iParam0, 11, -1);
if(iVar8 >=256){
iVar9=func_320(joaat("mp_f_freemode_01"), iVar8, 11, 4);
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("heist_draw_13"), 0)){
return 1;
}
}}
break;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 2:
return 1;
break;
case 7:
case 4:
case 9:
iVar10=func_424(joaat("mp_f_freemode_01"), 11, func_456(iParam0, 11, -1), 0);
if(((iVar1==7 && iVar10==88) || (iVar1==4 && iVar10==89)) || (iVar1==9 && iVar10==87)){
return 1;
}
break;
}
break;
case 1:
switch (iVar1){
case 1:
case 2:
return 1;
break;
case 7:
case 4:
case 9:
iVar11=func_424(joaat("mp_f_freemode_01"), 11, func_456(iParam0, 11, -1), 0);
if(((iVar1==7 && iVar11==88) || (iVar1==4 && iVar11==89)) || (iVar1==9 && iVar11==87)){
return 1;
}
break;
}
break;
case 2:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 11:
switch (iVar1){
case 10:
case 11:
case 15:
return 1;
break;
}
break;
case 14:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
break;
}
break;
default:
if(iVar0 > 15){
iVar12=func_456(iParam0, 8, -1);
if(iVar12 >=136){
iVar13=func_320(joaat("mp_f_freemode_01"), iVar12, 8, 4);
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("combat_top"), 0)){
return 1;
}
}}
break;
}}}
return 0;
}

int func_421(int iParam0, bool bParam1){
return func_422(iParam0, bParam1, 1);
}

int func_422(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_390()){
return 0;
}
if(!bParam1){
if(func_423(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_390() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_423(int iParam0, int iParam1){
if(iParam0 !=func_390()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_390()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_424(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
var uVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
var uVar16;
int iVar17;
int iVar18;
int iVar19;
int iVar20;
int iVar21;
var uVar22;
int iVar23;
if(iParam0==joaat("mp_m_freemode_01")){
if(iParam1==11){
if(iParam2==1){
return 73;
}elseif(iParam2==3){
return 74;
}elseif(iParam2==5){
return 75;
}elseif(iParam2==7){
return 76;
}elseif(iParam2==4){
return 77;
}elseif(iParam2==8){
return 78;
}elseif(iParam2==11){
return 79;
}elseif(iParam2==19){
return 80;
}elseif(iParam2==21){
return 81;
}elseif(iParam2==22){
return 82;
}elseif(iParam2==24){
return 83;
}elseif(iParam2==20){
return 84;
}elseif(iParam2==30){
return 85;
}elseif(iParam2==23){
if(func_381(89, -1)){
return 89;
}}elseif(iParam2==17){
return 88;
}elseif(iParam2==28){
if(func_381(87, -1)){
return 87;
}}elseif(iParam2==41){
return 86;
}elseif(iParam2 >=237){
iVar0=func_320(iParam0, iParam2, 11, 3);
if(iVar0 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("tat_decl_no_save"), 0)){
iVar1=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==10){
if(iVar3 !=0 && iVar3 !=joaat("0")){
return func_398(iVar3, 3);
}else{
return uVar4;
}}
iVar2++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_230(1759, -1, 0);
}
return func_398(iParam3, 3);
}}}}elseif(iParam1==8){
if(iParam2==1){
return 73;
}elseif(iParam2==3){
return 74;
}elseif(iParam2==5){
return 75;
}elseif(iParam2==7){
return 76;
}elseif(iParam2==4){
return 77;
}elseif(iParam2==8){
return 78;
}elseif(iParam2==11){
return 79;
}elseif(iParam2==23){
if(func_381(89, -1)){
return 89;
}}elseif(iParam2==17){
return 88;
}elseif(iParam2==28){
if(func_381(87, -1)){
return 87;
}}elseif(iParam2==33){
return 73;
}elseif(iParam2==35){
return 74;
}elseif(iParam2==37){
return 75;
}elseif(iParam2==39){
return 76;
}elseif(iParam2==36){
return 77;
}elseif(iParam2==40){
return 78;
}elseif(iParam2==43){
return 79;
}elseif(iParam2==19){
return 80;
}elseif(iParam2==21){
return 81;
}elseif(iParam2==22){
return 82;
}elseif(iParam2==24){
return 83;
}elseif(iParam2==20){
return 84;
}elseif(iParam2==30){
return 85;
}elseif(iParam2==227){
return 80;
}elseif(iParam2==229){
return 81;
}elseif(iParam2==230){
return 82;
}elseif(iParam2==232){
return 83;
}elseif(iParam2==228){
return 84;
}elseif(iParam2==238){
return 85;
}elseif(iParam2==231){
if(func_381(89, -1)){
return 89;
}}elseif(iParam2==225){
return 88;
}elseif(iParam2==236){
if(func_381(87, -1)){
return 87;
}}elseif(iParam2 >=241){
iVar6=func_320(iParam0, iParam2, 8, 3);
if(iVar6 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl_no_save"), 0)){
iVar7=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
iVar8=0;
while (iVar8 < iVar7){
FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
if(iVar11==10){
if(iVar9 !=0 && iVar9 !=joaat("0")){
return func_398(iVar9, 3);
}else{
return uVar10;
}}
iVar8++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_230(1759, -1, 0);
}
return func_398(iParam3, 3);
}}}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1==11){
if(iParam2==1){
return 75;
}elseif(iParam2==2){
return 77;
}elseif(iParam2==4){
if(func_381(89, -1)){
return 89;
}}elseif(iParam2==7){
return 88;
}elseif(iParam2==9){
if(func_381(87, -1)){
return 87;
}}elseif(iParam2==32){
return 78;
}elseif(iParam2==33){
return 79;
}elseif(iParam2==34){
return 80;
}elseif(iParam2==35){
return 81;
}elseif(iParam2==36){
return 82;
}elseif(iParam2==62){
return 76;
}elseif(iParam2==63){
return 83;
}elseif(iParam2==186){
return 84;
}elseif(iParam2==187){
return 85;
}elseif(iParam2==191){
return 74;
}elseif(iParam2 >=256){
iVar12=func_320(iParam0, iParam2, 11, 4);
if(iVar12 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tat_decl_no_save"), 0)){
iVar13=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar12);
iVar14=0;
while (iVar14 < iVar13){
FILES::GET_FORCED_COMPONENT(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
if(iVar17==10){
if(iVar15 !=0 && iVar15 !=joaat("0")){
return func_398(iVar15, 4);
}else{
return uVar16;
}}
iVar14++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_230(1759, -1, 0);
}
return func_398(iParam3, 4);
}}}}elseif(iParam1==8){
if(iParam2==1){
return 75;
}elseif(iParam2==2){
return 77;
}elseif(iParam2==4){
if(func_381(89, -1)){
return 89;
}}elseif(iParam2==7){
return 88;
}elseif(iParam2==9){
if(func_381(87, -1)){
return 87;
}}elseif(iParam2==17){
return 75;
}elseif(iParam2==18){
return 77;
}elseif(iParam2==20){
if(func_381(89, -1)){
return 89;
}}elseif(iParam2==23){
return 88;
}elseif(iParam2==25){
if(func_381(87, -1)){
return 87;
}}elseif(iParam2==81){
return 84;
}elseif(iParam2==82){
return 85;
}elseif(iParam2==86){
return 74;
}elseif(iParam2 >=136){
iVar18=func_320(iParam0, iParam2, 8, 4);
if(iVar18 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("tat_decl_no_save"), 0)){
iVar19=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar18);
iVar20=0;
while (iVar20 < iVar19){
FILES::GET_FORCED_COMPONENT(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
if(iVar23==10){
if(iVar21 !=0 && iVar21 !=joaat("0")){
return func_398(iVar21, 4);
}else{
return uVar22;
}}
iVar20++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("multi_decal"), 0)){
if(iParam3==0){
iParam3=func_230(1759, -1, 0);
}
return func_398(iParam3, 4);
}}}}}
return -1;
}

int func_425(int iParam0){
if(PED::IS_PED_DEAD_OR_DYING(iParam0, 1)){
return 0;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("player_zero"):
return 0;
break;
case joaat("player_one"):
return 1;
break;
case joaat("player_two"):
return 2;
break;
case joaat("mp_m_freemode_01"):
return 3;
break;
case joaat("mp_f_freemode_01"):
return 4;
break;
}
return 0;
}

int func_426(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
var uVar10;
int iVar11;
if(iParam0==joaat("mp_m_freemode_01")){
if(iParam1==0){
return 123;
return -1;
}elseif(iParam1==1){
return 93;
}elseif(iParam1==2){
return 93;
}elseif(iParam1==3){
return 93;
}elseif(iParam1==4){
return 93;
}elseif(iParam1==5){
return 93;
}elseif(iParam1==6){
return 93;
}elseif(iParam1==7){
return 94;
}elseif(iParam1==8){
return 94;
}elseif(iParam1==9){
return 94;
}elseif(iParam1==10){
return 94;
}elseif(iParam1==11){
return 94;
}elseif(iParam1==12){
return 94;
}elseif(iParam1==13){
return 95;
}elseif(iParam1==14){
return 95;
}elseif(iParam1==15){
return 95;
}elseif(iParam1==16){
return 95;
}elseif(iParam1==17){
return 95;
}elseif(iParam1==18){
return 95;
}elseif(iParam1==19){
return 96;
}elseif(iParam1==20){
return 96;
}elseif(iParam1==21){
return 96;
}elseif(iParam1==22){
return 96;
}elseif(iParam1==23){
return 96;
}elseif(iParam1==24){
return 96;
}elseif(iParam1==25){
return 96;
}elseif(iParam1==26){
return 97;
}elseif(iParam1==27){
return 97;
}elseif(iParam1==28){
return 97;
}elseif(iParam1==29){
return 97;
}elseif(iParam1==30){
return 97;
}elseif(iParam1==31){
return 97;
}elseif(iParam1==32){
return 98;
}elseif(iParam1==33){
return 98;
}elseif(iParam1==34){
return 98;
}elseif(iParam1==35){
return 98;
}elseif(iParam1==36){
return 98;
}elseif(iParam1==37){
return 98;
}elseif(iParam1==38){
return 99;
}elseif(iParam1==39){
return 99;
}elseif(iParam1==40){
return 99;
}elseif(iParam1==41){
return 99;
}elseif(iParam1==42){
return 99;
}elseif(iParam1==43){
return 99;
}elseif(iParam1==44){
return 99;
}elseif(iParam1==45){
return 100;
}elseif(iParam1==46){
return 100;
}elseif(iParam1==47){
return 100;
}elseif(iParam1==48){
return 100;
}elseif(iParam1==49){
return 100;
}elseif(iParam1==50){
return 101;
}elseif(iParam1==51){
return 101;
}elseif(iParam1==52){
return 101;
}elseif(iParam1==53){
return 101;
}elseif(iParam1==54){
return 101;
}elseif(iParam1==55){
return 101;
}elseif(iParam1==56){
return 101;
}elseif(iParam1==57){
return 102;
}elseif(iParam1==58){
return 102;
}elseif(iParam1==59){
return 102;
}elseif(iParam1==60){
return 102;
}elseif(iParam1==61){
return 102;
}elseif(iParam1==62){
return 102;
}elseif(iParam1==63){
return 103;
}elseif(iParam1==64){
return 103;
}elseif(iParam1==65){
return 103;
}elseif(iParam1==66){
return 103;
}elseif(iParam1==67){
return 103;
}elseif(iParam1==68){
return 103;
}elseif(iParam1==69){
return 104;
}elseif(iParam1==70){
return 104;
}elseif(iParam1==71){
return 104;
}elseif(iParam1==72){
return 104;
}elseif(iParam1==73){
return 104;
}elseif(iParam1==74){
return 105;
}elseif(iParam1==75){
return 105;
}elseif(iParam1==76){
return 105;
}elseif(iParam1==77){
return 105;
}elseif(iParam1==78){
return 105;
}elseif(iParam1==79){
return 105;
}elseif(iParam1==80){
return 106;
}elseif(iParam1==81){
return 106;
}elseif(iParam1==82){
return 106;
}elseif(iParam1==83){
return 106;
}elseif(iParam1==84){
return 106;
}elseif(iParam1==85){
return 107;
}elseif(iParam1==86){
return 107;
}elseif(iParam1==87){
return 107;
}elseif(iParam1==88){
return 107;
}elseif(iParam1==89){
return 107;
}elseif(iParam1==90){
return 107;
}elseif(iParam1 >=91){
iVar0=func_320(iParam0, iParam1, 2, 3);
if(iVar0 !=-1){
switch (iVar0){
case joaat("dlc_mp_beach_m_hair00"):
case joaat("dlc_mp_beach_m_hair01"):
case joaat("dlc_mp_beach_m_hair02"):
case joaat("dlc_mp_beach_m_hair03"):
case joaat("dlc_mp_beach_m_hair04"):
case joaat("dlc_mp_gr_m_hair_15_0"):
return 108;
break;
case joaat("dlc_mp_beach_m_hair05"):
case joaat("dlc_mp_beach_m_hair06"):
case joaat("dlc_mp_beach_m_hair07"):
case joaat("dlc_mp_beach_m_hair08"):
case joaat("dlc_mp_beach_m_hair09"):
case joaat("dlc_mp_gr_m_hair_16_0"):
return 109;
break;
case joaat("dlc_mp_busi_m_hair0_0"):
case joaat("dlc_mp_busi_m_hair0_1"):
case joaat("dlc_mp_busi_m_hair0_2"):
case joaat("dlc_mp_busi_m_hair0_3"):
case joaat("dlc_mp_busi_m_hair0_4"):
return 110;
break;
case joaat("dlc_mp_busi_m_hair1_0"):
case joaat("dlc_mp_busi_m_hair1_1"):
case joaat("dlc_mp_busi_m_hair1_2"):
case joaat("dlc_mp_busi_m_hair1_3"):
case joaat("dlc_mp_busi_m_hair1_4"):
return 111;
break;
case joaat("dlc_mp_hips_m_hair0_0"):
case joaat("dlc_mp_hips_m_hair0_1"):
case joaat("dlc_mp_hips_m_hair0_2"):
case joaat("dlc_mp_hips_m_hair0_3"):
case joaat("dlc_mp_hips_m_hair0_4"):
return 112;
break;
case joaat("dlc_mp_hips_m_hair1_0"):
case joaat("dlc_mp_hips_m_hair1_1"):
case joaat("dlc_mp_hips_m_hair1_2"):
case joaat("dlc_mp_hips_m_hair1_3"):
case joaat("dlc_mp_hips_m_hair1_4"):
return 113;
break;
case 1577121865:
case 884057515:
case 2055188806:
case 1362452146:
case -1761842625:
return 114;
break;
}
iVar1=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==10){
if(iVar3 !=0 && iVar3 !=joaat("0")){
return func_398(iVar3, 3);
}
else{
return uVar4;
}}
iVar2++;
}}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1==0){
return 123;
return -1;
}elseif(iParam1==1){
return 93;
}elseif(iParam1==2){
return 93;
}elseif(iParam1==3){
return 93;
}elseif(iParam1==4){
return 93;
}elseif(iParam1==5){
return 93;
}elseif(iParam1==6){
return 93;
}elseif(iParam1==7){
return 94;
}elseif(iParam1==8){
return 94;
}elseif(iParam1==9){
return 94;
}elseif(iParam1==10){
return 94;
}elseif(iParam1==11){
return 94;
}elseif(iParam1==12){
return 94;
}elseif(iParam1==13){
return 95;
}elseif(iParam1==14){
return 95;
}elseif(iParam1==15){
return 95;
}elseif(iParam1==16){
return 95;
}elseif(iParam1==17){
return 95;
}elseif(iParam1==18){
return 96;
}elseif(iParam1==19){
return 96;
}elseif(iParam1==20){
return 96;
}elseif(iParam1==21){
return 96;
}elseif(iParam1==22){
return 96;
}elseif(iParam1==23){
return 96;
}elseif(iParam1==24){
return 97;
}elseif(iParam1==25){
return 97;
}elseif(iParam1==26){
return 97;
}elseif(iParam1==27){
return 97;
}elseif(iParam1==28){
return 97;
}elseif(iParam1==29){
return 97;
}elseif(iParam1==30){
return 98;
}elseif(iParam1==31){
return 98;
}elseif(iParam1==32){
return 98;
}elseif(iParam1==33){
return 98;
}elseif(iParam1==34){
return 98;
}elseif(iParam1==35){
return 99;
}elseif(iParam1==36){
return 99;
}elseif(iParam1==37){
return 99;
}elseif(iParam1==38){
return 99;
}elseif(iParam1==39){
return 99;
}elseif(iParam1==40){
return 99;
}elseif(iParam1==41){
return 100;
}elseif(iParam1==42){
return 100;
}elseif(iParam1==43){
return 100;
}elseif(iParam1==44){
return 100;
}elseif(iParam1==45){
return 100;
}elseif(iParam1==46){
return 100;
}elseif(iParam1==47){
return 101;
}elseif(iParam1==48){
return 101;
}elseif(iParam1==49){
return 101;
}elseif(iParam1==50){
return 101;
}elseif(iParam1==51){
return 101;
}elseif(iParam1==52){
return 101;
}elseif(iParam1==53){
return 102;
}elseif(iParam1==54){
return 102;
}elseif(iParam1==55){
return 102;
}elseif(iParam1==56){
return 102;
}elseif(iParam1==57){
return 102;
}elseif(iParam1==58){
return 102;
}elseif(iParam1==59){
return 102;
}elseif(iParam1==60){
return 103;
}elseif(iParam1==61){
return 103;
}elseif(iParam1==62){
return 103;
}elseif(iParam1==63){
return 103;
}elseif(iParam1==64){
return 103;
}elseif(iParam1==65){
return 103;
}elseif(iParam1==66){
return 103;
}elseif(iParam1==67){
return 104;
}elseif(iParam1==68){
return 104;
}elseif(iParam1==69){
return 104;
}elseif(iParam1==70){
return 104;
}elseif(iParam1==71){
return 104;
}elseif(iParam1==72){
return 104;
}elseif(iParam1==73){
return 105;
}elseif(iParam1==74){
return 105;
}elseif(iParam1==75){
return 105;
}elseif(iParam1==76){
return 105;
}elseif(iParam1==77){
return 105;
}elseif(iParam1==78){
return 105;
}elseif(iParam1==79){
return func_398(joaat("MP_Hair_014_Fix"), 4);
}elseif(iParam1==80){
return func_398(joaat("MP_Hair_014_Fix"), 4);
}elseif(iParam1==81){
return func_398(joaat("MP_Hair_014_Fix"), 4);
}elseif(iParam1==82){
return func_398(joaat("MP_Hair_014_Fix"), 4);
}elseif(iParam1==83){
return func_398(joaat("MP_Hair_014_Fix"), 4);
}elseif(iParam1==84){
return func_398(joaat("MP_Hair_014_Fix"), 4);
}elseif(iParam1==85){
return 107;
}elseif(iParam1==86){
return 107;
}elseif(iParam1==87){
return 107;
}elseif(iParam1==88){
return 107;
}elseif(iParam1==89){
return 107;
}elseif(iParam1==90){
return 107;
}elseif(iParam1==91){
return 107;
}elseif(iParam1 >=92){
iVar6=func_320(iParam0, iParam1, 2, 4);
if(iVar6 !=-1){
switch (iVar6){
case joaat("dlc_mp_beach_f_hair00"):
case joaat("dlc_mp_beach_f_hair01"):
case joaat("dlc_mp_beach_f_hair02"):
case joaat("dlc_mp_beach_f_hair03"):
case joaat("dlc_mp_beach_f_hair04"):
case joaat("dlc_mp_gr_f_hair_16_0"):
return 108;
break;
case joaat("dlc_mp_beach_f_hair05"):
case joaat("dlc_mp_beach_f_hair06"):
case joaat("dlc_mp_beach_f_hair07"):
case joaat("dlc_mp_beach_f_hair08"):
case joaat("dlc_mp_beach_f_hair09"):
case joaat("dlc_mp_gr_f_hair_15_0"):
return 109;
break;
case joaat("dlc_mp_busi_f_hair0_0"):
case joaat("dlc_mp_busi_f_hair0_1"):
case joaat("dlc_mp_busi_f_hair0_2"):
case joaat("dlc_mp_busi_f_hair0_3"):
case joaat("dlc_mp_busi_f_hair0_4"):
return 110;
break;
case joaat("dlc_mp_busi_f_hair1_0"):
case joaat("dlc_mp_busi_f_hair1_1"):
case joaat("dlc_mp_busi_f_hair1_2"):
case joaat("dlc_mp_busi_f_hair1_3"):
case joaat("dlc_mp_busi_f_hair1_4"):
return 111;
break;
case joaat("dlc_mp_hips_f_hair0_0"):
case joaat("dlc_mp_hips_f_hair0_1"):
case joaat("dlc_mp_hips_f_hair0_2"):
case joaat("dlc_mp_hips_f_hair0_3"):
case joaat("dlc_mp_hips_f_hair0_4"):
return 112;
break;
case joaat("dlc_mp_hips_f_hair1_0"):
case joaat("dlc_mp_hips_f_hair1_1"):
case joaat("dlc_mp_hips_f_hair1_2"):
case joaat("dlc_mp_hips_f_hair1_3"):
case joaat("dlc_mp_hips_f_hair1_4"):
return 112;
break;
case 665775322:
case 618391324:
case 497473714:
case 123808807:
case -231538229:
return 114;
break;
}
iVar7=FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
iVar8=0;
while (iVar8 < iVar7){
FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
if(iVar11==10){
if(iVar9 !=0 && iVar9 !=joaat("0")){
return func_398(iVar9, 4);
}
else{
return uVar10;
}}
iVar8++;
}}}}
return -1;
}


void func_427(int iParam0, int iParam1){
struct<12> Var0;
int iVar1;
int iVar2;
int iVar3;
struct<7> Var4;
int iVar5;
int iVar6;
struct<7> Var7;
int iVar8;
int iVar9;
struct<7> Var10;
int iVar11;
int iVar12;
struct<7> Var13;
int iVar14;
if(!PED::IS_PED_INJURED(iParam1)){
iVar1=func_425(iParam1);
if(iParam0 !=0){
if(iVar1==3 || iVar1==4){
if(iParam0==1019352240){
func_452(13, 0, Global_78338);
func_452(14, 0, Global_78338);
func_452(15, 0, Global_78338);
func_452(16, 0, Global_78338);
func_452(71, 0, Global_78338);
func_452(72, 0, Global_78338);
return;
}elseif(iParam0==joaat("torsoDecal")){
if(iVar1==3){
func_452(73, 0, Global_78338);
func_452(74, 0, Global_78338);
func_452(75, 0, Global_78338);
func_452(76, 0, Global_78338);
func_452(77, 0, Global_78338);
func_452(78, 0, Global_78338);
func_452(79, 0, Global_78338);
func_452(80, 0, Global_78338);
func_452(81, 0, Global_78338);
func_452(82, 0, Global_78338);
func_452(83, 0, Global_78338);
func_452(84, 0, Global_78338);
func_452(85, 0, Global_78338);
func_452(86, 0, Global_78338);
func_452(90, 0, Global_78338);
func_452(91, 0, Global_78338);
func_452(124, 0, Global_78338);
func_452(125, 0, Global_78338);
func_452(87, 0, Global_78338);
func_452(88, 0, Global_78338);
func_452(89, 0, Global_78338);
iVar3=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
iVar2=0;
while (iVar2 < iVar3){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar2, &Var4)){
if(Var4.f_6==joaat("torsoDecal")){
func_452((129 + iVar2), 0, Global_78338);
}}
iVar2++;
}}else{
func_452(73, 0, Global_78338);
func_452(74, 0, Global_78338);
func_452(75, 0, Global_78338);
func_452(76, 0, Global_78338);
func_452(77, 0, Global_78338);
func_452(78, 0, Global_78338);
func_452(79, 0, Global_78338);
func_452(80, 0, Global_78338);
func_452(81, 0, Global_78338);
func_452(82, 0, Global_78338);
func_452(83, 0, Global_78338);
func_452(84, 0, Global_78338);
func_452(85, 0, Global_78338);
func_452(92, 0, Global_78338);
func_452(87, 0, Global_78338);
func_452(88, 0, Global_78338);
func_452(89, 0, Global_78338);
iVar6=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
iVar5=0;
while (iVar5 < iVar6){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar5, &Var7)){
if(Var7.f_6==joaat("torsoDecal")){
func_452((129 + iVar5), 0, Global_78338);
}}
iVar5++;
}}}elseif(iParam0==2140335355){
if(iVar1==3){
func_452(93, 0, Global_78338);
func_452(94, 0, Global_78338);
func_452(95, 0, Global_78338);
func_452(96, 0, Global_78338);
func_452(97, 0, Global_78338);
func_452(98, 0, Global_78338);
func_452(99, 0, Global_78338);
func_452(100, 0, Global_78338);
func_452(101, 0, Global_78338);
func_452(102, 0, Global_78338);
func_452(103, 0, Global_78338);
func_452(104, 0, Global_78338);
func_452(105, 0, Global_78338);
func_452(106, 0, Global_78338);
func_452(107, 0, Global_78338);
func_452(108, 0, Global_78338);
func_452(109, 0, Global_78338);
func_452(110, 0, Global_78338);
func_452(111, 0, Global_78338);
func_452(112, 0, Global_78338);
func_452(113, 0, Global_78338);
func_452(114, 0, Global_78338);
func_452(115, 0, Global_78338);
func_452(116, 0, Global_78338);
func_452(117, 0, Global_78338);
func_452(123, 0, Global_78338);
iVar9=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
iVar8=0;
while (iVar8 < iVar9){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar8, &Var10)){
if(Var10.f_6==2140335355){
func_452((129 + iVar8), 0, Global_78338);
}}
iVar8++;
}}else{
func_452(93, 0, Global_78338);
func_452(94, 0, Global_78338);
func_452(95, 0, Global_78338);
func_452(96, 0, Global_78338);
func_452(97, 0, Global_78338);
func_452(98, 0, Global_78338);
func_452(99, 0, Global_78338);
func_452(100, 0, Global_78338);
func_452(101, 0, Global_78338);
func_452(102, 0, Global_78338);
func_452(103, 0, Global_78338);
func_452(104, 0, Global_78338);
func_452(105, 0, Global_78338);
func_452(106, 0, Global_78338);
func_452(107, 0, Global_78338);
func_452(108, 0, Global_78338);
func_452(109, 0, Global_78338);
func_452(110, 0, Global_78338);
func_452(111, 0, Global_78338);
func_452(112, 0, Global_78338);
func_452(113, 0, Global_78338);
func_452(114, 0, Global_78338);
func_452(115, 0, Global_78338);
func_452(116, 0, Global_78338);
func_452(117, 0, Global_78338);
func_452(118, 0, Global_78338);
func_452(119, 0, Global_78338);
func_452(120, 0, Global_78338);
func_452(121, 0, Global_78338);
func_452(122, 0, Global_78338);
func_452(123, 0, Global_78338);
iVar12=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
iVar11=0;
while (iVar11 < iVar12){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar11, &Var13)){
if(Var13.f_6==2140335355){
func_452((129 + iVar11), 0, Global_78338);
}}
iVar11++;
}}
return;
}}
iVar14=0;
while (iVar14 < 127){
if(func_403(&Var0, iVar14, iVar1, iParam1, -1)){
if(Var0.f_8==iParam0){
func_452(Var0.f_11, 0, Global_78338);
}}
iVar14++;
}}}}

int func_428(int iParam0, int iParam1){
int iVar0;
iVar0=func_455();
if(iVar0 !=-1){
if(!func_429(iParam0, iParam1, iVar0)){
func_452(iVar0, 0, Global_78338);
return 1;
}}
return 0;
}

int func_429(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!func_436(iParam0, iParam1, -1)){
if(iParam0==joaat("mp_m_freemode_01")){
iVar0=-1;
iVar1=-1;
if(iParam1 >=237){
iVar1=func_320(iParam0, iParam1, 11, 3);
iVar0=func_432(iVar1);
}
if(iVar1 !=-1 && func_349(iVar1, 0) !=-1){
return 0;
}
if(iVar1 !=-1 && func_430(iVar1, 0) !=-1){
return 0;
}
if(iVar1 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("no_crew_emblem"), 0)){
return 0;
}
if((iVar1==joaat("dlc_mp_val_m_jbib2_0") || iVar1==joaat("dlc_mp_val_m_jbib2_1")) || iVar1==joaat("dlc_mp_val_m_jbib2_2")){
return 0;
}
if((((((iParam1 >=0 && iParam1 <=15) || (iParam1 >=16 && iParam1 <=31)) || (iParam1 >=124 && iParam1 <=139)) || iVar0==0) || iVar0==1) || iVar0==8){
if(iParam2==15){
return 1;
}elseif(iParam2==13 || iParam2==14){
if(func_424(iParam0, 11, iParam1, 0)==-1){
return 1;
}}}elseif((iParam1 >=80 && iParam1 <=95) || iVar0==5){
if((iParam2==16 || iParam2==71) || iParam2==72){
return 1;
}}elseif((iParam1 >=140 && iParam1 <=155) || iVar0==9){
if(iParam2==13 || iParam2==15){
return 1;
}}}elseif(iParam0==joaat("mp_f_freemode_01")){
iVar2=-1;
iVar3=-1;
if(iParam1 >=256){
iVar3=func_320(iParam0, iParam1, 11, 4);
iVar2=func_432(iVar3);
}
if(iVar3 !=-1 && func_349(iVar3, 0) !=-1){
return 0;
}
if(iVar3 !=-1 && func_430(iVar3, 0) !=-1){
return 0;
}
if(iVar3 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("no_crew_emblem"), 0)){
return 0;
}
if((iParam1 >=0 && iParam1 <=15) || iVar2==0){
if(iParam2==13 || iParam2==15){
if(func_424(iParam0, 11, iParam1, 0)==-1){
return 1;
}}}elseif((iParam1 >=32 && iParam1 <=47) || iVar2==2){
if(iParam2==13 || iParam2==16){
if(func_424(iParam0, 11, iParam1, 0)==-1){
return 1;
}}}elseif((iParam1 >=64 && iParam1 <=79) || iVar2==4){
if(iParam2==13){
return 1;
}
if(iParam2==15){
if(iVar2 !=4 || !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("tat_decl"), 0)){
return 1;
}}}elseif((iParam1 >=80 && iParam1 <=95) || iVar2==5){
if(iParam2==13){
return 1;
}}elseif((iParam1 >=144 && iParam1 <=159) || iVar2==9){
if(iParam2==14){
return 1;
}}}}
return 0;
}

int func_430(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe2_draw_0"), iParam1)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe2_draw_1"), iParam1)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe2_draw_2"), iParam1)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 38465448, iParam1)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1469891622, iParam1)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -502321359, iParam1)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -792359778, iParam1)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 997614074, iParam1)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 748799057, iParam1)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 653048039, iParam1)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe2_draw_10"), iParam1)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1685128312, iParam1)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1892460036, iParam1)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -296738547, iParam1)){
iVar0=13;
}
return iVar0;
}

int func_431(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam0==joaat("mp_m_freemode_01")){
iVar0=-1;
iVar1=-1;
if(iParam1 >=256){
iVar0=func_320(iParam0, iParam1, 4, 3);
iVar1=func_432(iVar0);
}
iVar2=-1;
iVar3=-1;
if(iParam2 >=237){
iVar2=func_320(iParam0, iParam2, 11, 3);
iVar3=func_432(iVar2);
}
if(iVar2 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -826135203, 0)){
if(iVar0 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -826135203, 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -826135203, 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -826135203, 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("morph_suit"), 0)){
if(iVar0 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("morph_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("morph_suit"), 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("morph_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("gorka_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("silk_robe"), 0)){
if(iVar0 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_robe"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_robe"), 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("silk_robe"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("silk_pyjamas"), 0)){
if(iVar0 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_pyjamas"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_pyjamas"), 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("silk_pyjamas"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_jacket"), 0)){
return 1;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("tux_pants"), 0)){
return 1;
}}elseif(iVar0 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("tux_pants"), 0)){
return 1;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -826135203, 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -826135203, 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("morph_suit"), 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("morph_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("gorka_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_robe"), 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("silk_robe"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_pyjamas"), 0)){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("silk_pyjamas"), 0)){
return 1;
}else{
return 0;
}}}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tails_jacket"), 0)){
if(((((((((((((((iParam1 >=0 && iParam1 <=15) || (iParam1 >=48 && iParam1 <=63)) || (iParam1 >=64 && iParam1 <=79)) || (iParam1 >=112 && iParam1 <=127)) || (iParam1 >=128 && iParam1 <=143)) || (iParam1 >=176 && iParam1 <=191)) || (iParam1 >=224 && iParam1 <=239)) || iVar1==0) || iVar1==3) || iVar1==4) || iVar1==7) || iVar1==8) || iVar1==11) || iVar1==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_4"), 0)){
return 1;
}else{
return 0;
}}
switch (iVar0){
case joaat("dlc_mp_val_m_legs1_0"):
case 312004063:
case 6695290:
case 1724446270:
case -448105673:
case -611098679:
case -1111088081:
case -1406369540:
case -1912159043:
case 2076516410:
case 1919618438:
case 45227112:
case -2129094253:
case -421370587:
case -675363106:
if((((((((((((((((iParam2 >=204 && iParam2 <=219) || iVar3==13) || iVar2==joaat("dlc_mp_smug_m_jbib_4_0")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_1")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_2")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_3")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_4")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_5")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_6")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_7")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_8")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_9")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_10")) || iVar2==joaat("dlc_mp_smug_m_jbib_4_11")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("apart_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1057057059, 0)){
return 0;
}
break;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("scruffy_jacket"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_3"), 0)){
return 0;
}}}elseif(iParam0==joaat("mp_f_freemode_01")){
iVar4=-1;
iVar5=-1;
if(iParam1 >=256){
iVar4=func_320(iParam0, iParam1, 4, 4);
iVar5=func_432(iVar4);
}
iVar6=-1;
if(iParam2 >=256){
iVar6=func_320(iParam0, iParam2, 11, 4);
}
if(iVar6 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -826135203, 0)){
if(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -826135203, 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("morph_suit"), 0)){
if(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("morph_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("morph_suit"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("morph_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("cat_suit"), 0)){
if(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("cat_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("cat_suit"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("cat_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gorka_suit"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("gorka_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("silk_robe"), 0)){
if(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("silk_robe"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("silk_pyjamas"), 0)){
if(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("silk_pyjamas"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("dress"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -405912369, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("hipster_dress"), 0)){
if(((iParam1 >=240 && iParam1 <=255) || iVar5==15) || (iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stockings"), 0))){
return 1;
}else{
return 0;
}}elseif((iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0)) || (iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stockings"), 0))){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0)){
if((((iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("dress"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -405912369, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("hipster_dress"), 0)) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("stockings"), 0))){
return 1;
}else{
return 0;
}}
if((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("vest"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("vest_shirt"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("xmas2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("luxe_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("apart_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1057057059, 0)){
if(((iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stockings"), 0)) || (iParam1 >=240 && iParam1 <=255)) || iVar5==15){
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("draw_0"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("smug_draw_5"), 0)){
if(((iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stockings"), 0)) || (iParam1 >=240 && iParam1 <=255)) || iVar5==15){
return 0;
}}}
if(iVar4 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -826135203, 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("morph_suit"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("morph_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("cat_suit"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("cat_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gorka_suit"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("gorka_suit"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("silk_robe"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0)){
if(iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("silk_pyjamas"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0)){
if((((iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("dress"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -405912369, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("hipster_dress"), 0)) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("stockings"), 0))){
return 1;
}else{
return 0;
}}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("high_waist"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("low_draw_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("low2_draw_7"), 0)){
return 1;
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("low2_draw_7"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("high_waist"), 0)){
return 1;
}else{
return 0;
}}
if(((iParam1 >=32 && iParam1 <=47) || iVar5==2) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tails_jacket"), 0)){
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("apart_draw_22"), 0)){
if(((((((((((iParam1 >=32 && iParam1 <=47) || iVar5==2) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_gear"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_1"), 0)){
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("apart_draw_25"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("biker_draw_33"), 0)){
if(((iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stockings"), 0)) || (iParam1 >=240 && iParam1 <=255)) || iVar5==15){
return 0;
}}}
return 1;
}

int func_432(int iParam0){
int iVar0;
iVar0=-1;
if(iParam0==0){
return iVar0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_0"), 0)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_1"), 0)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_2"), 0)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_3"), 0)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_4"), 0)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_5"), 0)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_6"), 0)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_7"), 0)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_8"), 0)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_9"), 0)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_10"), 0)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_11"), 0)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_12"), 0)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_13"), 0)){
iVar0=13;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_14"), 0)){
iVar0=14;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_15"), 0)){
iVar0=15;
}
return iVar0;
}

int func_433(int iParam0, int iParam1, int iParam2){
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
int iVar10;
int iVar11;
int iVar12;
iVar0=-99;
if(iParam0==joaat("mp_m_freemode_01")){
if(iParam1 <=15){
iVar0=0;
}elseif(iParam1 <=31){
iVar0=16;
}elseif(iParam1 <=47){
iVar0=0;
}elseif(iParam1 <=63){
iVar0=-99;
}elseif(iParam1 <=79){
iVar0=-99;
}elseif(iParam1 <=95){
iVar0=80;
}elseif(iParam1 <=111){
iVar0=-99;
}elseif(iParam1 <=127){
iVar0=-99;
}elseif(iParam1 <=143){
iVar0=124;
}elseif(iParam1 <=159){
iVar0=140;
}elseif(iParam1 <=175){
iVar0=-99;
}elseif(iParam1 <=191){
iVar0=-99;
}elseif(iParam1 <=207){
iVar0=188;
}elseif(iParam1 <=223){
iVar0=204;
}elseif(iParam1 <=239){
iVar0=16;
}elseif(iParam1 <=240){
iVar0=236;
}elseif(iParam1 >=241){
iVar1=func_320(iParam0, iParam1, 8, 3);
if(iVar1 !=-1){
iVar2=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar1);
iVar3=0;
while (iVar3 < iVar2){
FILES::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
if(iVar6==11){
if(iVar4 !=0 && iVar4 !=joaat("0")){
iVar0=func_298(iParam0, iVar4, 11, 3);
return iVar0;
}
else{
iVar0=iVar5;
return iVar0;
}}
iVar3++;
}}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1 <=15){
iVar0=0;
}elseif(iParam1 <=31){
iVar0=0;
}elseif(iParam1 <=32){
iVar0=-99;
}elseif(iParam1 <=33){
iVar0=-99;
}elseif(iParam1 <=49){
iVar0=64;
}elseif(iParam1 <=65){
iVar0=80;
}elseif(iParam1 <=66){
iVar0=-99;
}elseif(iParam1 <=67){
iVar0=-99;
}elseif(iParam1 <=68){
iVar0=-99;
}elseif(iParam1 <=69){
iVar0=-99;
}elseif(iParam1 <=70){
iVar0=-99;
}elseif(iParam1 <=86){
iVar0=176;
}elseif(iParam1 <=102){
iVar0=192;
}elseif(iParam1 <=118){
iVar0=208;
}elseif(iParam1 <=119){
iVar0=-99;
}elseif(iParam1 <=135){
iVar0=240;
}elseif(iParam1 >=136){
iVar7=func_320(iParam0, iParam1, 8, 4);
if(iVar7 !=-1){
iVar8=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar7);
iVar9=0;
while (iVar9 < iVar8){
FILES::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
if(iVar12==11){
if(iVar10 !=0 && iVar10 !=joaat("0")){
iVar0=func_298(iParam0, iVar10, 11, 4);
return iVar0;
}
else{
iVar0=iVar11;
return iVar0;
}}
iVar9++;
}}}}
if(iVar0 !=-99){
iVar0=(iVar0 + iParam2);
}
return iVar0;
}

int func_434(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam1==14){
iVar0=iParam2;
return func_316(iVar0);
}
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 0;
break;
case 2:
return Global_113648.f_2365.f_539[0 /*65*/].f_59;
break;
case 3:
if(Global_113648.f_9087.f_99.f_58[120]){
return 1;
}else{
return 0;
}
break;
case 4:
if(Global_113648.f_9087.f_99.f_58[120]){
return 1;
}else{
return 0;
}
break;
case 6:
return 6;
break;
case 5:
return 0;
break;
case 8:
return 0;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 1:
return 0;
break;
case 7:
return 0;
break;
case 11:
return 0;
break;
case 12:
break;
case 13:
return 31;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 0;
break;
case 2:
return Global_113648.f_2365.f_539[1 /*65*/].f_59;
break;
case 3:
return 73;
break;
case 4:
return 24;
break;
case 6:
return 17;
break;
case 5:
return 0;
break;
case 8:
return 26;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 1:
return 0;
break;
case 7:
return 0;
break;
case 11:
return 0;
break;
case 12:
break;
case 13:
return 31;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 0;
break;
case 2:
return Global_113648.f_2365.f_539[2 /*65*/].f_59;
break;
case 3:
return 0;
break;
case 4:
return 91;
break;
case 6:
return 8;
break;
case 5:
return 0;
break;
case 8:
return 15;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 1:
return 0;
break;
case 7:
return 0;
break;
case 11:
return 0;
break;
case 12:
break;
case 13:
return 31;
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
break;
case 2:
break;
case 3:
return 0;
break;
case 4:
return 80;
break;
case 6:
return 10;
break;
case 5:
break;
case 8:
return 0;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 1:
return 0;
break;
case 7:
return 0;
break;
case 11:
return 2;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
break;
case 2:
break;
case 3:
return 0;
break;
case 4:
return 233;
break;
case 6:
return 16;
break;
case 5:
break;
case 8:
return 0;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 1:
return 0;
break;
case 7:
return 0;
break;
case 11:
return 78;
break;
}
break;
default:
break;
}
return -99;
}

int func_435(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(Global_103493 !=-99){
if(Global_103494==11){
Global_78341[1 /*14*/]={
func_462(ENTITY::GET_ENTITY_MODEL(iParam0), 11, Global_103493, -1) 
};
iVar0=func_437(ENTITY::GET_ENTITY_MODEL(iParam0), Global_103493, iParam1, Global_78341[1 /*14*/].f_4);
if(iVar0 !=-99){
return iVar0;
}}elseif(Global_103494==8){
iVar1=func_433(ENTITY::GET_ENTITY_MODEL(iParam0), Global_103493, Global_103495);
if(iVar1 !=-99){
Global_78341[1 /*14*/]={
func_462(ENTITY::GET_ENTITY_MODEL(iParam0), 11, iVar1, -1) 
};
iVar2=func_437(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, iParam1, Global_78341[1 /*14*/].f_4);
if(iVar2 !=-99){
return iVar2;
}}else{
return Global_103493;
}}}
return -99;
}

int func_436(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(((((iParam1 >=48 && iParam1 < 64) || (iParam1 >=64 && iParam1 < 80)) || (iParam1 >=96 && iParam1 < 108)) || (iParam1 >=108 && iParam1 < 124)) || (iParam1 >=156 && iParam1 < 172)){
return 1;
}
if(iParam2==-1 && iParam1 >=237){
iParam2=func_320(iParam0, iParam1, 11, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("jacket"), 0)){
return 1;
}
break;
case joaat("mp_f_freemode_01"):
if(((((iParam1 >=16 && iParam1 < 32) || (iParam1 >=96 && iParam1 < 112)) || (iParam1 >=112 && iParam1 < 128)) || (iParam1 >=128 && iParam1 < 144)) || (iParam1 >=160 && iParam1 < 176)){
return 1;
}
if(iParam2==-1 && iParam1 >=256){
iParam2=func_320(iParam0, iParam1, 11, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("jacket"), 0)){
return 1;
}
break;
}
return 0;
}

int func_437(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
bool bVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
int iVar19;
int iVar20;
int iVar21;
int iVar22;
int iVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
bool bVar29;
int iVar30;
int iVar31;
int iVar32;
int iVar33;
int iVar34;
int iVar35;
int iVar36;
int iVar37;
int iVar38;
int iVar39;
int iVar40;
bool bVar41;
int iVar42;
int iVar43;
int iVar44;
int iVar45;
int iVar46;
int iVar47;
bool bVar48;
int iVar49;
int iVar50;
int iVar51;
int iVar52;
int iVar53;
iVar0=-99;
iVar1=1;
if(iParam0==joaat("mp_m_freemode_01")){
iVar2=-1;
iVar3=-1;
if(iParam2 >=237){
iVar2=func_320(iParam0, iParam2, 11, 3);
iVar3=func_432(iVar2);
}
iVar4=-1;
iVar5=-1;
if(iParam1 >=237){
iVar4=func_320(iParam0, iParam1, 11, 3);
iVar5=func_432(iVar4);
}
if(iVar2 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jacket_only"), 0)){
return -99;
}}
if(iVar2 !=-1){
if(((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("luxe_draw_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jan_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("stunt_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("air_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("smug_draw_1"), 0)){
if((((((iParam1 >=124 && iParam1 <=139) || (iParam1 >=188 && iParam1 <=235)) || iVar5==8) || iVar5==12) || iVar5==13) || iVar5==14){
return -99;
}
if(((((((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("stunt_draw_4"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("stunt_draw_9"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_6"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_9"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_10"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_12"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("air_draw_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("smug_draw_1"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)){
return -99;
}}}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("luxe_draw_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jan_draw_1"), 0)){
return -99;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("stunt_draw_6"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("stunt_draw_3"), 0)){
return -99;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("luxe2_draw_0"), 0)){
if((((((((((iParam1 >=80 && iParam1 <=95) || (iParam1 >=124 && iParam1 <=139)) || (iParam1 >=140 && iParam1 <=155)) || (iParam1 >=188 && iParam1 <=235)) || iVar5==5) || iVar5==8) || iVar5==9) || iVar5==12) || iVar5==13) || iVar5==14){
return -99;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("heist_draw_9"), 0)){
if((((((((iParam1 >=0 && iParam1 <=15) || (iParam1 >=16 && iParam1 <=31)) || (iParam1 >=80 && iParam1 <=95)) || (iParam1 >=236 && iParam1 <=236)) || iVar5==0) || iVar5==1) || iVar5==5) || iVar5==15){
}else{
return -99;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_jacket"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)){
return -99;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("low2_open_check"), 0)){
if((((((((((iParam1 >=0 && iParam1 <=15) || (iParam1 >=16 && iParam1 <=31)) || (iParam1 >=80 && iParam1 <=95)) || (iParam1 >=124 && iParam1 <=139)) || (iParam1 >=236 && iParam1 <=236)) || iVar5==0) || iVar5==1) || iVar5==5) || iVar5==8) || iVar5==15){
}else{
return -99;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("open_short"), 0)){
if(((((iParam1 >=0 && iParam1 <=15) || (iParam1 >=236 && iParam1 <=236)) || (iParam1 >=80 && iParam1 <=95)) || iVar5==0) || iVar5==5){
}else{
return -99;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1099375697, 0)){
if((((iParam1 >=0 && iParam1 <=15) || (iParam1 >=80 && iParam1 <=95)) || iVar5==0) || iVar5==5){
}else{
return -99;
}}}
iVar6=0;
bVar7=false;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_vest"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jacket_only"), 0)){
if(iParam1 >=0 && iParam1 <=15){
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_13"), 0)){
switch (iParam1){
case 0:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_0_0"), 8, 3);
break;
case 1:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_0_1"), 8, 3);
break;
case 2:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_0_2"), 8, 3);
break;
case 3:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_0_3"), 8, 3);
break;
case 4:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_0_4"), 8, 3);
break;
case 5:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_0_5"), 8, 3);
break;
case 7:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_0_6"), 8, 3);
break;
case 8:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_0_7"), 8, 3);
break;
case 11:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_0_8"), 8, 3);
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_1"), 0)){
switch (iParam1){
case 0:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_2_0"), 8, 3);
break;
case 1:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_2_1"), 8, 3);
break;
case 2:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_2_2"), 8, 3);
break;
case 3:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_2_3"), 8, 3);
break;
case 4:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_2_4"), 8, 3);
break;
case 5:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_2_5"), 8, 3);
break;
case 7:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_2_6"), 8, 3);
break;
case 8:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_2_7"), 8, 3);
break;
case 11:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_2_8"), 8, 3);
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_2"), 0)){
switch (iParam1){
case 0:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_4_0"), 8, 3);
break;
case 1:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_4_1"), 8, 3);
break;
case 2:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_4_2"), 8, 3);
break;
case 3:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_4_3"), 8, 3);
break;
case 4:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_4_4"), 8, 3);
break;
case 5:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_4_5"), 8, 3);
break;
case 7:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_4_6"), 8, 3);
break;
case 8:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_4_7"), 8, 3);
break;
case 11:
iVar0=func_298(iParam0, joaat("dlc_mp_biker_m_special_4_8"), 8, 3);
break;
}}
return iVar0;
}elseif(iParam1 >=236 && iParam1 <=236){
iVar0=240;
return iVar0;
}elseif(iParam1 >=237){
bVar7=true;
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_13"), 0)){
iVar6=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_1"), 0)){
iVar6=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_5"), 0)){
iVar6=6;
}else{
iVar6=-1;
}}else{
return iVar0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_4"), 0)){
bVar7=true;
iVar6=1;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)){
bVar7=true;
if(((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("open_jacket"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("apart_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("air_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("smug_draw_1"), 0)){
iVar6=1;
}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_jacket"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("apart_draw_21"), 0)){
iVar6=0;
}else{
iVar6=-1;
}}
if(bVar7){
if(iVar6 !=-1){
iVar8=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar4);
iVar9=0;
while (iVar9 < iVar8){
FILES::GET_VARIANT_COMPONENT(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
if(iVar12==8){
if(((((((iVar6==6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("alt_special_6"), 0)) || (iVar6==5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("alt_special_5"), 0))) || (iVar6==4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_4"), 0))) || (iVar6==3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_3"), 0))) || (iVar6==2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("alt_special_2"), 0))) || (iVar6==1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("alt_special"), 0))) || ((((((iVar6==0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("alt_special"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("alt_special_2"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_4"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("alt_special_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("alt_special_6"), 0))){
if(iVar10 !=0 && iVar10 !=joaat("0")){
iVar0=func_298(iParam0, iVar10, 8, 3);
}else{
iVar0=iVar11;
}
iVar9=iVar8 + 1;
iVar1=0;
return iVar0;
}}
iVar9++;
}}
return -99;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_11"), 0)){
if((iParam1 >=80 && iParam1 <=95) || iVar5==5){
return -99;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("x17_draw_3"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_11"), 0)){
if((((iParam1 >=80 && iParam1 <=95) || (iParam1 >=140 && iParam1 <=155)) || iVar5==5) || iVar5==9){
return -99;
}}
if((iParam2 >=96 && iParam2 <=107) || iVar3==6){
if(iParam1 <=15){
iVar0=32;
}elseif(iParam1 <=31){
iVar0=224;
}elseif(iParam1==236){
iVar0=240;
}elseif(((iParam1 >=220 && iParam1 <=235) && func_438()) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_4"), 0)){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 10, -1, 0, -1, 8);
iVar13=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(joaat("dlc_mp_busi_m_accs5_0"));
iVar0=(func_299(iParam0, func_239(8)) + iVar13);
iVar1=1;
}else{
iVar0=34;
iVar1=0;
if(iParam1 >=237){
iVar14=func_320(iParam0, iParam1, 11, 3);
if((iVar14 !=-1 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("draw_12"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("draw_8"), 0)){
iVar15=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
iVar16=0;
while (iVar16 < iVar15){
FILES::GET_VARIANT_COMPONENT(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
if(iVar19==8){
if(iVar17 !=0 && iVar17 !=joaat("0")){
if((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar17, joaat("ALT_SPECIAL_4"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar17, joaat("alt_special_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar17, joaat("alt_special_6"), 0)){
iVar0=func_298(iParam0, iVar17, 8, 3);
}}else{
iVar0=iVar18;
}}
iVar16++;
}}}}}elseif(iParam1 <=15){
iVar0=0;
}elseif(iParam1 <=31){
iVar0=16;
}
