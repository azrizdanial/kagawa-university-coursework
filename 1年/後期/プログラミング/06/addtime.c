#include <stdio.h>

int main(void) {
    int hour1, minute1, hour2, minute2, hour3, minute3;

    printf("hour1を入力して下さい: ");
    scanf("%d", &hour1);
    printf("minute1を入力して下さい: ");
    scanf("%d", &minute1);
    printf("hour2を入力して下さい: ");
    scanf("%d", &hour2);
    printf("minute2を入力して下さい: ");
    scanf("%d", &minute2);

    hour3 = hour1 + hour2;
    minute3 = minute1 + minute2;

    if (minute3 >= 60) {
        hour3 = hour3 + 1;
        minute3 = minute3 - 60;
    }
    printf("その和は、%d時間%d分です。\n", hour3, minute3);
    return 0;
}