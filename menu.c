#include <stdio.h>
#include "menu.h"


/**
* affiche le memu de la page d acceuil
*
*/
void menu_acceuil(){


    printf("--------------------------\n");
    printf("       STONECODE v01      \n");
    printf("-----      MENU      -----\n");
    printf("1. Ouvrir un compte\n");
    printf("2. Login\n");
    printf("3. Contacter un administrateur\n");
    printf("4. Reglages\n");
    printf("...Faites un choix...\n");

}

void gerer_menu_acceuil(int choix){

    switch(choix){

        case 1:
            register_menu();
            break;
        case 2:
            login_menu();
            break;
        case 3:
            contact_admin_menu();
            break;
        default:
            menu_acceuil();
    }

}
void register_menu(){
    printf("OUVRIR UN NOUVEAU COMPTE\n");
}
void login_menu(){
printf("LOGIN\n");
}
void contact_admin_menu(){
printf("CONTACTER UN ADMIN\n");
}
