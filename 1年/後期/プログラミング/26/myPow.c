#include <math.h>
#include <stdio.h>
#define K_EXP 10
#define K_LOG 20
#define M_SQRT2 1.41421356237309504880
#define M_LN2 0.693147180559945309417

double myExp(double y) {
    double sum = 1.0;
    double temp = 1.0;

    for (int n = 1; n <= K_EXP; n++) {
        temp *= y / n;
        sum += temp;
    }
    return sum;
}

double myLog(double x) {
    int k = 0;

    while (x > M_SQRT2) {
        x *= 0.5;
        k++;
    }
    while (x < 1.0 / M_SQRT2) {
        x *= 2.0;
        k--;
    }

    double sum = 0.0;
    double t = 1.0 - x;

    for (int n = 1; n <= K_LOG; n++) {
        sum += t / n;
        t *= (1.0 - x);
    }

    return -sum + k * M_LN2;
}

double myPowSmall(double x, double y) {
    return myExp(y * myLog(x));
}

double myPowSmallExponent(double x, double y) {
    return myPowSmall(x, y);
}

double myPowInt(double x, int y) {
    double result = 1.0;
    int exp = y >= 0 ? y : -y;
    for (int i = 0; i < exp; i++) {
        result *= x;
    }
    if (y < 0) {
        result = 1.0 / result;
    }
    return result;
}

double myPow(double x, double y) {
    int y1 = (int)y;
    double y2 = y - y1;
    if (y2 == 0.0) {
        return myPowInt(x, y1);
    }
    if (x < 0.0) {
        return NAN;
    }
    return myPowInt(x, y1) * myPowSmallExponent(x, y2);
}

int main(void) {
    printf("pow(4.5, 2.5)  = %f\t%f\n", myPow(4.5, 2.5), pow(4.5, 2.5));
    printf("pow(0.01, -2.5)= %f\t%f\n", myPow(0.01, -2.5), pow(0.01, -2.5));
    printf("pow(4.0, 5.5)  = %f\t%f\n", myPow(4.0, 5.5), pow(4.0, 5.5));
    return 0;
}