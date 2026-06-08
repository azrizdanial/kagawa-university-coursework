#include <stdio.h>

int main(void) {
    int no, count = 0;
    int display;

    do {
        printf("正の整数を入力せよ：");
        scanf("%d", &no);
        if (no <= 0) puts("\a正でない数を入力しないでください。");
    } while (no <= 0);

    display = no;

    while (no > 0) {
        no /= 10;
        count++;
    }
    printf("%d は %d 桁です。", display, count);

    return 0;
}