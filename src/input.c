#include "input.h"

void input_users_file(char *argv, user **users, int *user_count) {
    FILE *users_file;

    users_file = fopen(argv, "r");

    // Count the number of users in the file by counting the number of lines and dividing by 6 (the number of lines per user)
    while(fscanf(users_file," %*[^\n]") != EOF)
    {
        *user_count += 1;
    }

    *user_count /= 6;

    // Reset the file pointer to the beginning
    fseek(users_file, 0, SEEK_SET);

    // Allocate memory for the users array
    *users = malloc(*user_count * sizeof(user));

    // Read the users file into the users array
    for(int i = 0; i < *user_count; ++i) {
        fscanf(users_file, " %[^\n]s", (*users)[i].username);
        fscanf(users_file, " %[^\n]s", (*users)[i].birthday);
        fscanf(users_file, " %[^\n]s", (*users)[i].login);
        fscanf(users_file, " %[^\n]s", (*users)[i].password_encrypted);
        fscanf(users_file, " %[^\n]s", (*users)[i].last_password_change);
        fscanf(users_file, " %*[^\n]");
    }

     fclose(users_file);
}

void input_password_file(char *argv, password **passwords, int *password_count){

    FILE *password_file;
    password_file = fopen(argv, "r");

    // Count the number of passwords in the file by counting the number of lines
    while(fscanf(password_file," %*[^\n]") != EOF)
    {
        *password_count += 1;
    }
    // Reset the file pointer to the beginning
    fseek(password_file, 0, SEEK_SET);

    // Allocate memory for the passwords array
    *passwords = malloc(*password_count * sizeof(password));

    // Read the passwords file into the passwords array
    for(int i = 0; i < *password_count; ++i) {
       fscanf(password_file, " %[^\n]s", (*passwords)[i].password);
    }

    fclose(password_file);
}
