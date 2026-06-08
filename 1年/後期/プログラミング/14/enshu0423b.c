#include <stdio.h>

int main(void) {
    int n1;

    printf("右上直角二等辺三角形を作ります。\n短辺: ");
    scanf("%d", &n1);

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < i; j++) {
            putchar(' ');
        }
        for (int j = 0; j < n1 - i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}