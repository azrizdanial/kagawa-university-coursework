#include <math.h>
#include <stdio.h>

int main(void) {
    double area;
    printf("面積を入力してください: ");
    scanf("%lf", &area);

    printf("その面積を持つ正方形の一辺の長さは %f です。\n", sqrt(area));

    return 0;
}