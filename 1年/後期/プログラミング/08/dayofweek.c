#include <stdio.h>

int main(void) {
    int a;
    printf("0 から 7 の整数を入力してください： ");
    scanf("%d", &a);

    switch (a) {
        case 1: printf("%d 番目の曜日は、中国語で星期一です。", a); break;
        case 2: printf("%d 番目の曜日は、中国語で星期二です。", a); break;
        case 3: printf("%d 番目の曜日は、中国語で星期三です。", a); break;
        case 4: printf("%d 番目の曜日は、中国語で星期四です。", a); break;
        case 5: printf("%d 番目の曜日は、中国語で星期五です。", a); break;
        case 6: printf("%d 番目の曜日は、中国語で星期六です。", a); break;
        case 7:
        case 0: printf("%d 番目の曜日は、中国語で星期天です。", a); break;
        default: printf("%d 番目の曜日は、中国語で...ありませんよ！！。", a); break;
    }

    return 0;
}