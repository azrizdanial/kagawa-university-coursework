#include <stdio.h>

int main(void) {
    int a[5], i;

    for (i = 0; i < 5; i++) {  // 要素の値を表示
        a[i] = 9 - i - i;
    }
    for (i = 0; i < 5; i++) {  // 要素の値を表示
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}