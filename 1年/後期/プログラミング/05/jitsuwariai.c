#include <stdio.h>

int main (void){

    int w,r;

    printf("白玉の個数を入力してください: ");
    scanf("%d",&w);
    printf("赤玉の個数を入力してください: ");
    scanf("%d",&r);
    printf("白玉の割合は %f%% です。",(double)w/(r+w)*100);

    return 0;
}