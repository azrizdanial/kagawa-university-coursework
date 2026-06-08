/*
    逐次探索（番兵法 -- 番兵の配列への格納を呼出し側に移動したバージョン）
*/

#include <stdio.h>

#define NUMBER 5 /* 要素数 */

int search(const int v[], int key) {
    int i = 0;

    while (1) {
        if (v[i] == key) return i; /* 探索成功 */
        i++;
    }
    return i; /* ここには到達しない */
}

/*--- 要素数nの配列vからkeyと一致する要素を探索（番兵法）---*/
int main(void) {
    int i, ky, idx;
    int vx[NUMBER + 1];

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d]：", i);
        scanf("%d", &vx[i]);
    }
    printf("探す値：");
    scanf("%d", &ky);

    vx[NUMBER] = ky; /* 番兵を格納 */
    if ((idx = search(vx, ky)) == NUMBER) {
        puts("\a探索に失敗しました。");
    } else {
        printf("%dは%d番目にあります。\n", ky, idx + 1);
    }

    return 0;
}