#include "Header.h"
float foo(float a, float b, int k) {
    int kb;
    float otvet, fa, ft, fc, jt, factor;
    switch (k) {
    case 1:
        otvet = a + b;
        break;
    case 2:
        otvet = a - b;
        break;
    case 3:
        otvet = a * b;
        break;
    case 4:
        if (b != 0) {
            otvet = a / b;
        }
        else {
            otvet = 0;
        }
        break;
    case 5:
        if (a == 0) {
            return otvet = 0;
        }
        else if (a == 1) {
            return otvet = 1;
        }
        else if (b == 0) {
            return otvet = 1;
        }
        else if (b > 0) {
            kb = 0;
            otvet = 1;
            while (kb < b) {

                otvet *= a;
                ++kb;
            }
            return otvet;
        }
        else if (b < 0) {
            kb = 0;
            otvet = 1;
            while (kb > b) {

                otvet *= a;
                --kb;
            }
            otvet = (1 / otvet);
            return otvet;
        }
        else {
            return otvet = 0;
        }

        break;
    case 6:
        fa = 1;

        if (a > 1) {
            otvet = 1;
            while (fa < a) {
                otvet *= ++fa;

            }
            return otvet;
        }
        else if (a == 1) {
            return otvet = 1;
        }
        else {
            return otvet = 0;
        }

        break;
    default:
        otvet = 0;
    }
    return otvet;
}
