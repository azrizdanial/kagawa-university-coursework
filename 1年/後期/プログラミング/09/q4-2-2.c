#include <stdio.h>

int main(void) {
    int no = 12345;

    do {
        printf("%d", no % 10);
        no /= 10;
    } while (no > 0);

    return 0;
}