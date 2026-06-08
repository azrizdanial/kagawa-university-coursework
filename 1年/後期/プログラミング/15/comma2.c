#include <stdio.h>

int main(void) {
    int i, j;
    int x[7]; /* int[7]型の配列 */

    for (i = 0; i < 7; i++) { /* 要素に値を読み込む */
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    for (i = 0, j = 6; i < j; i++, j--) { /* 要素の並びを反転 */
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }

    puts("反転しました。");
    for (i = 0; i < 7; i++) { /* 要素の値を表示 */
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}