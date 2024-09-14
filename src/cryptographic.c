#include "cryptographic.h"

void encrypt_password(password *passwords, int password_count){
    // Encrypt the passwords form the password file
    for(int i = 0; i < password_count; i++){
        //auxiliary variable to store the encrypted password
        unsigned char hash[SHA256_DIGEST_LENGTH];

        // Encrypt the password
        SHA256_CTX sha256;
        // Initialize the SHA256 context
        SHA256_Init(&sha256);
        // Update the SHA256 context with the password
        SHA256_Update(&sha256, passwords[i].password, strlen(passwords[i].password));
        // Finalize the SHA256 context and store the encrypted password in hash
        SHA256_Final(hash, &sha256);

        // Convert the encrypted password to hexadecimal and store in password_encrypted
        for( int j = 0; j < SHA256_DIGEST_LENGTH; j++){
            sprintf(&passwords[i].password_encrypted[j*2], "%02x", hash[j]);
        }
    }
}