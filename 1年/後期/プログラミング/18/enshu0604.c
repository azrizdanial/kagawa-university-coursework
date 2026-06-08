#include <stdio.h>

int sqr(int n) {
    return n * n;
}

int pow4(int x) {
    return sqr(sqr(x));
}

int main(void) {
    int no;
    printf("整数を入力せよ: ");
    scanf("%d", &no);
    printf("%dの4乗は:%d", no, pow4(no));
    return 0;
}