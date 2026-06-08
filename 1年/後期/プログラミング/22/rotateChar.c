#include <stdio.h>

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9') {
            ch = '0' + (ch - '0' + 7) % 10;
        }
        putchar(ch);
    }
    return 0;
}