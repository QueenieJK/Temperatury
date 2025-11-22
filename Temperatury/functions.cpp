#include "headerFile.h"
int dataCounter = 0;
double tab[100];
char units[100];

float FtoC(float stopnie) {
    float wynik = (5.0 / 9.0) * (stopnie - 32.0);
    return wynik;
}
float FtoK(float stopnie) {
    float wynik = (stopnie + 459.67) * (5.0 / 9.0);
    return wynik;
}
float CtoF(float stopnie) {
    float wynik = (stopnie * 9.0 / 5.0) + 32.0;
    return wynik;
}
float CtoK(float stopnie) {
    float wynik = (stopnie + 273.15);
    return wynik;
}
float KtoF(float stopnie) {
    float wynik = (stopnie - 273.15) * 9.0 / 5.0 + 32.0;
    return wynik;
}
float KtoC(float stopnie) {
    float wynik = (stopnie - 273.15);
    return wynik;
}
int check(float temp, char stopnie) {
    if (stopnie == 'K') {
        if (temp < 0) {
            return -999.0;
        }
    }
    else if (stopnie == 'C') {
        if (temp < -273.15) {
            return -999.0;
        }
    }
    else if (stopnie == 'F') {
        if (temp < -459.67) {
            return -999.0;
        }
    }
    return 0;
}