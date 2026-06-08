#include <stdio.h>

int main(void) {
    int h = 3;

    if (h < 12) {
        if (h < 6) {
            printf("A");
        }
    } else {
        printf("B");
    }

    return 0;
}