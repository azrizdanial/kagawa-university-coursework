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

int main(void) {
    printf("pow(100, 0.5)    = %f\t%f\n", myPowSmallExponent(100, 0.5),
           pow(100, 0.5));
    printf("pow(0.01, -0.5)  = %f\t%f\n", myPowSmallExponent(0.01, -0.5),
           pow(0.01, -0.5));
    printf("pow(10000, 0.25) = %f\t%f\n", myPowSmallExponent(10000, 0.25),
           pow(10000, 0.25));
    return 0;
}