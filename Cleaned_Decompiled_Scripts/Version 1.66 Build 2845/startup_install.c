//Cleaned With dr NHA's C Script Cleaner V2.8


void __EntryFunction__(){
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_1("main_install", 1424);
}


void func_1(char* sParam0, int iParam1){
SCRIPT::REQUEST_SCRIPT(sParam0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
wait(0);
SCRIPT::REQUEST_SCRIPT(sParam0);
}
start_new_script(sParam0, iParam1);
}