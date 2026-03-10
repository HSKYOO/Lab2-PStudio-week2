#include <stdio.h>
#include "guest.h"
#include "menu.h"

int main(){
    displayMenu();
    displayGuest(addGuest());

    return 0;
}

// make file 실행 하려면 window 기준 mingw32-make 입력해야됨
