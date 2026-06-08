#include <math.h>
#include <stdio.h>

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

int main(void) {
    printf("pow(1.414, 2)  = %f\t%f\n", myPowInt(1.414, 2), pow(1.414, 2));
    printf("pow(2.01, 30)  = %f\t%f\n", myPowInt(2.01, 30), pow(2.01, 30));
    printf("pow(-0.5, 0)   = %f\t%f\n", myPowInt(-0.5, 0), pow(-0.5, 0));
    printf("pow(1.414, -2) = %f\t%f\n", myPowInt(1.414, -2), pow(1.414, -2));
    printf("pow(2.01, -10) = %f\t%f\n", myPowInt(2.01, -10), pow(2.01, -10));
    printf("pow(-0.5, -1)  = %f\t%f\n", myPowInt(-0.5, -1), pow(-0.5, -1));
    return 0;
}