#include <stdio.h>
#include <stdlib.h>
#include "auth.h"
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

/**
*Permet de creer un nouvel utilisateur
*
*/
void register_menu(){

    char *pwd;
    int registration_result;
    int isValid = 0;
    printf("\t\t\t*************************\t\t\t\n");
    printf("\t\t\tOUVRIR UN NOUVEAU COMPTE\t\t\t\n");
    printf("\t\t\t***************************\t\t\t\n");

    // on cree une structure user pour sauvegarder la saisi
    while(isValid != 1){

        user new_user;
        char *firstname = malloc(100 * sizeof(char));
        printf("\t\t\t Entrer votre nom \t\t\t\n");
        scanf("%[^\n]s",firstname);
        getchar();
        char *surname = malloc(100 * sizeof(char));
        printf(" \t\t\tEntrer votre prenom \t\t\t\n");
        scanf("%[^\n]s",surname);
        getchar();
        double age;
        printf(" \t\t\tEntrer votre age \t\t\t\n");
        scanf("%lf",age);
        getchar();
        char *username = malloc(100 * sizeof(char));
        printf("  \t\t\Entrer votre nom d'utilisateur \t\t\ \n");
        scanf("%[^\n]s",username);
        getchar();
        char *password = malloc(100 * sizeof(char));
        printf(" \t\t\t Entrer votre mot passe \t\t\t \n");
        scanf("%[^\n]s",password);
        getchar();
        printf("  \t\t\tConfirmer votre mot passe \t\t\t\n");
        printf("  \t\t\tAttention, il doit être le même \t\t\t\n");
        scanf("%[^\n]s", pwd);
        getchar();
        new_user.id = 1;
        new_user.firstname = firstname;
        new_user.surname = surname;
        new_user.age = age;
        new_user.username = username;
        new_user.password = password;

        if(password == pwd){
            registration_result = user_register(new_user);
            isValid = 1;
        }else{
            system("cls");
            printf("\t\t\tErreur lors de l'inscription\t\t\t\n");
            printf("\t\t\t*************************\t\t\t\n");
            printf("\t\t\tOUVRIR UN NOUVEAU COMPTE\t\t\t\n");
            printf("\t\t\t***************************\t\t\t\n");

        }




    }

}
void login_menu(){
printf("LOGIN\n");
}
void contact_admin_menu(){
printf("CONTACTER UN ADMIN\n");
}
