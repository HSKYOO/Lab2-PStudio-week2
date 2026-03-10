#include "guest.h"

int addGuest(){
    int menu;
    printf("Please selcet the Menu : ");
    scanf("%d", &menu);
    return menu;
}

void displayGuest(int menu){
    if(menu == 1){
        printf("Pizza selected");
    }else{
        printf("Pasta selected");
    }
    printf("\n");
}