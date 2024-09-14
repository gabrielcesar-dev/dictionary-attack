#include "input.h"


int main(int argc, char **argv) {
    user *users = NULL;

    int user_count = 0;

    // Read the users and store on struct
    input_users_file(argv[1], &users, &user_count);

    password *passwords = NULL;

    int password_count = 0;

    // Read the passwords and store on struct
    input_password_file(argv[2], &passwords, &password_count);

    // Encrypt the passwords form the password file
    encrypt_password(passwords, password_count);

    // Decrypt the passwords from the users by comparing with the passwords from the password file encrypted
    decrypt_password(argv[3], passwords, password_count, users, user_count);

    free(users);
    free(passwords);
    return 0;
}
