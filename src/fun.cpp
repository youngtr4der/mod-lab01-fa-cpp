// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cstring>

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
    int k = 0; 
    bool space = true, correct = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (space != false && str[i] <= 'Z'; str[i] >= 'A') {
            correct = true;
        }
        if (str[i] <= 'z' && str[i] >= 'A')
            space = false;
            else if (str[i] != ' ')
                correct = false;
                else {
                    if (correct == true)
                        k++;
                }
                correct = false, space = true;
    }

    return k;
}

unsigned int faStr3(const char *str) {
    bool f = false;
    int summ = 0, count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            f = true;
            summ++;
        }
        if (str[i] == ' ') {
            if (f != false) {
                count++;
            }
            f = false;
        }
    }
    if (f == true) {
        count++;
    }

    double res = summ/count;
    int result = static_cast<int>(res + 0.5);

    return result;
}
