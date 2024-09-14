#include "decrypt.h"

void decrypt_password(char *argv, password *passwords, int password_count, user *users, int user_count){

    FILE *report_file;
    report_file = fopen(argv, "w");

    // Compare the encrypted passwords from the users with the encrypted passwords from the password file
    for(int i = 0; i < user_count; i++){
        for(int j = 0; j < password_count; j++){
            if(strcmp(users[i].password_encrypted, passwords[j].password_encrypted) == 0) {

                // If the passwords match, output the report
                output_report(report_file, users[i], passwords[j].password);
            }
        }
    }

    fclose(report_file);
}