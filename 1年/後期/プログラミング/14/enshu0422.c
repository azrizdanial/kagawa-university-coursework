#include <stdio.h>

int main(void) {
    int n1, n2, temp;

    printf("横長の長方形を作ります。\n一辺（その１）: ");
    scanf("%d", &n1);
    printf("一辺（その２）: ");
    scanf("%d", &n2);

    if (n1 <= n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for (int i = 1; i <= n2; i++) {
        for (int j = 1; j <= n1; j++) {
            putchar('*');
        }
        printf("\n");
    }

    return 0;
}