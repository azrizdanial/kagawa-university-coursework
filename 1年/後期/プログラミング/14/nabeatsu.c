#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("整数１を入力して下さい: ");
    scanf("%d", &n1);
    printf("整数２を入力して下さい: ");
    scanf("%d", &n2);

    for (int i = n1; i <= n2; i++) {
        if (i % 3 == 0 || i % 10 == 3 || i / 10 == 3) {
            printf("%d^^; ", i);
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}