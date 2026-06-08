#include <stdio.h>

int combination(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    if (r > n) {
        return 0;
    }
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void) {
    int n, r;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input r: ");
    scanf("%d", &r);

    printf("%dC%d = %d\n", n, r, combination(n, r));
    return 0;
}