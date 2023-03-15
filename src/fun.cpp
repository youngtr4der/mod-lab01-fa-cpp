// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    bool f1 = false, f2 = false;
    int res = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            f1 = true;
        }

        if (str[i] != ' ') {
            f2 = true;
        }

        if (str[i] == ' ' && f2 == true) {
            if (f1 == false) {
                res++;
            }
            f1 = false;
            f2 = false;
        }
    }

    return res;
}

unsigned int faStr2(const char *str) {
    bool correct = false, space = true;
    int res = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z' && space != false) {
            correct = true;
        }

        if (str[i] >= 'A' && str[i] <= 'z') {
            space = false;
        } else if (str[i] != ' ') {
            correct = false;
        } else {
            if (correct == true) {
                res++;
            }
            correct = false;
            space = true;
        }
    }

    return res;
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
