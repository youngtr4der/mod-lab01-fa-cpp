// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    bool f1, f2 = false;
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= '9' && '0' <= str[i]) {
            f1 = true;
        }
        if (str[i] != ' ') {
            f2 = true;
        }
        if (f2 == true && str[i] == ' ') {
            if (f1 == false) {
                k++;
            }
            f1, f2 = false;
        }
    }

    return k;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
