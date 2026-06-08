#include <stdio.h>

int main (void){

    double x=1.41421356237,a;

    printf("実数を入力してください: ");
    scanf("%lf",&a);
    printf("一辺の長さが %f の対角線の正方形の長さは %f です。",a,a*x);

    return 0;
}