#include <stdio.h>

int whichMonth(void) {
    int no;
    do {
        printf("1 から 12 の整数を入力して下さい: ");
        scanf("%d", &no);
    } while (no < 1 || no > 12);
    return no;
}

void showJapaneseMonthName(int a) {
    switch (a) {
        case 1: printf("睦月"); break;
        case 2: printf("如月"); break;
        case 3: printf("弥生"); break;
        case 4: printf("卯月"); break;
        case 5: printf("皐月"); break;
        case 6: printf("水無月"); break;
        case 7: printf("文月"); break;
        case 8: printf("葉月"); break;
        case 9: printf("長月"); break;
        case 10: printf("神無月"); break;
        case 11: printf("霜月"); break;
        case 12: printf("師走"); break;
    }
}

int main(void) {
    int m1, m2, m3;
    printf("1 つめの ");
    m1 = whichMonth();
    printf("2 つめの ");
    m2 = whichMonth();
    printf("3 つめの ");
    m3 = whichMonth();

    printf("月の和名は");
    showJapaneseMonthName(m1);
    printf("と");
    showJapaneseMonthName(m2);
    printf("と");
    showJapaneseMonthName(m3);
    printf("です。\n");

    return 0;
}