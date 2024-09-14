
#ifndef DICTIONARY_ATTACK_INPUT_H
#define DICTIONARY_ATTACK_INPUT_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_USERNAME_LENGTH 51
#define MAX_BIRTHDAY_LENGTH 11
#define MAX_LOGIN_LENGTH 21
#define MAX_PASSWORD_ENCRYPTED_LENGTH 65
#define MAX_PASSWORD_LENGTH 33
#define MAX_LAST_PASSWORD_CHANGE_LENGTH 11

typedef struct {
    char username[MAX_USERNAME_LENGTH];
    char birthday[MAX_BIRTHDAY_LENGTH];
    char login[MAX_LOGIN_LENGTH];
    char password_encrypted[MAX_PASSWORD_ENCRYPTED_LENGTH];
    char last_password_change[MAX_LAST_PASSWORD_CHANGE_LENGTH];
} user;

typedef struct {
    char password_encrypted[MAX_PASSWORD_ENCRYPTED_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
} password;

void input_users_file(char *argv, user **users, int *user_count);
void input_password_file(char *argv, password **passwords, int *password_count);

#endif //DICTIONARY_ATTACK_INPUT_H
