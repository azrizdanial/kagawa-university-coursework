#include <stdio.h>

int main(void) {
    int a, no = 1;
    printf("非負の整数を入力してください: ");
    scanf("%d", &a);
    printf("begin\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a - i; j++) {
            printf("%d", no % 10);
            no++;
        }
        for (int j = 0; j < i + 1; j++) {
            putchar('#');
            no += 3;
        }
        putchar('\n');
    }
    printf("end\n");
    return 0;
}