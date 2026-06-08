#include <stdio.h>

void move(int n, int a, int b) {
    printf("ディスク %d を棒 %d から棒 %d へ\n", n, a, b);
}

/* n 枚のディスクを a から b に移動する手順 */
void hanoi(int n, int a, int b, int c) {
    if (n > 0) {
        hanoi(n - 1, a, c, b);
        move(n, a, b);
        hanoi(n - 1, c, b, a);
    }
}

int main(void) {
    int n;

    printf("円盤は何枚ですか? ");
    scanf("%d", &n);
    hanoi(n, 1, 2, 3);

    return 0;
}