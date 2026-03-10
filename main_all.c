#include <stdio.h>

void displayMenu();
int addGuest();
void displayGuest(int menu);

int main(){
    // printf("hello world\n");
    int menu;

    displayMenu();
    menu = addGuest();
    displayGuest(menu);

    return 0;
}

void displayMenu(){
    printf("**********************\n");
    printf("1. Pizza : 20000 \n");
    printf("2. Pasta : 12000 \n");
    printf("**********************\n");
}

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