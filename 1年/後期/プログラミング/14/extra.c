#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("整数１を入力して下さい: ");
    scanf("%d", &n1);
    printf("整数２を入力して下さい: ");
    scanf("%d", &n2);

    for (int i = n1; i <= n2; i++) {
        int x = i;
        int three = 0;

        if (x < 0) x = -x;
        while (x != 0) {
            if (x % 10 == 3) {
                three = 1;
                break;
            }
            x = x / 10;
        }

        if (i % 3 == 0 || three == 1) {
            printf("%d^^; ", i);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
