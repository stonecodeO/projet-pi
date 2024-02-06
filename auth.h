#ifndef AUTH_H_INCLUDED
#define AUTH_H_INCLUDED

typedef struct{
    int id;
    char *firstname;
    char *surname;
    double age;
    char *username;
    char *password;

}user;

int user_register(user nouvel_utilisateur);


#endif // AUTH_H_INCLUDED
