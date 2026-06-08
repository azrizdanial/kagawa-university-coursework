#include <stdio.h>
int main(void) {
    int n, num = -1;
    printf("n? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (num % 4 == 0) {
            printf("(%d) ", num);
        } else {
            printf("%d ", num);
        }
        num += 3;
    }
    return 0;
}