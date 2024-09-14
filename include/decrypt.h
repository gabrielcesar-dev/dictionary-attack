#ifndef DICTIONARY_ATTACK_DECRYPT_H
#define DICTIONARY_ATTACK_DECRYPT_H

#include "input.h"
#include "report.h"
#include <string.h>

void decrypt_password(char *argv, password *passwords, int password_count, user *users, int user_count);

#endif //DICTIONARY_ATTACK_DECRYPT_H
