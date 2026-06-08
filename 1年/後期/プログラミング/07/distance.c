#include <stdio.h>

int main(void) {
    double a;

    printf("何メートル離れていますか？ ");
    scanf("%lf", &a);

    if (a <= 0.5) {
        printf("そんなにくっつかないでください。");
    } else if (a <= 2.5) {
        printf("もう少し離れてください。");
    } else if (a <= 3.5) {
        printf("もう少しだけ離れるほうが安全です。");
    } else {
        printf("安全な距離です。");
    }
    return 0;
}