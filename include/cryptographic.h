#ifndef DICTIONARY_ATTACK_CRYPTOGRAPHIC_H
#define DICTIONARY_ATTACK_CRYPTOGRAPHIC_H

#include "input.h"
#include <openssl/sha.h>
#include <string.h>

void encrypt_password(password *passwords, int password_count);

#endif //DICTIONARY_ATTACK_CRYPTOGRAPHIC_H
