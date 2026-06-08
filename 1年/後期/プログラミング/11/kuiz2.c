#include <stdio.h>

int main(void) {
    int i = 0;
    while (i < 4) {
        if (i++ == 1) continue;
        printf(" %d", i);
    }
    printf("|");
    i = 0;
    while (i < 4) {
        if (i++ == 1) break;
        printf(" %d", i);
     }

    return 0;
}