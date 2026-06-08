#include <stdio.h>

int main(void) {
    int a;

    do {
        printf("1 から 12 の整数を入力してください： ");
        scanf("%d", &a);
        switch (a) {
            case 1: printf("旧暦の %d 月は、睦月です。", a); break;
            case 2: printf("旧暦の %d 月は、如月です。", a); break;
            case 3: printf("旧暦の %d 月は、弥生です。", a); break;
            case 4: printf("旧暦の %d 月は、卯月です。", a); break;
            case 5: printf("旧暦の %d 月は、皐月です。", a); break;
            case 6: printf("旧暦の %d 月は、水無月です。", a); break;
            case 7: printf("旧暦の %d 月は、文月です。", a); break;
            case 8: printf("旧暦の %d 月は、葉月です。", a); break;
            case 9: printf("旧暦の %d 月は、長月です。", a); break;
            case 10: printf("旧暦の %d 月は、神無月です。", a); break;
            case 11: printf("旧暦の %d 月は、霜月です。", a); break;
            case 12: printf("旧暦の %d 月は、師走です。", a); break;
        }
    } while (a <= 0 || a > 12);

    return 0;
}