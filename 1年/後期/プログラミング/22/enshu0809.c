#include <stdio.h>

int main(void) {
    int ch, count = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    printf("行数: %d\n", count);
    return 0;
}