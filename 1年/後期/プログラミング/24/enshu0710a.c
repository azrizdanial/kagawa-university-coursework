#include <stdio.h>

int main(void)
{
    float fx = 0.0;

    for (int i = 0; i <= 20000; i++) {
        float ix = i / 100.0;

        printf("%f\t%f\n", fx, ix);

        fx += 0.01;
    }

    return 0;
}