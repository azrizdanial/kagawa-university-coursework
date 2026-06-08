#include <stdio.h>

int main(void) {
    int no, i;

    printf("n の値: ");
    scanf("%d", &no);
    for (i = 1; i <= no; i++) {
        printf("%d の 2 乗は %d\n", i, i * i);
    }

    return 0;
}