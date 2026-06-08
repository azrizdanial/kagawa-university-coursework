#include <stdio.h>

int main(void) {
    for (float x = 0.0; x <= 200.0; x += 0.01)
        printf("%f\n", x);

    return 0;
}