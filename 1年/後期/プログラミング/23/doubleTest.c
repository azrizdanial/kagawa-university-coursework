#include <stdio.h>

int main(void) {
    double x;

    printf("%.60f\n\n", 0.1);

    for (x = 0.0; x <= 1.0; x += 0.01) {
        printf("%.60f\n", x);
    }

    return 0;
}