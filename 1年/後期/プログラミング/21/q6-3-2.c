#include <stdio.h>
void foo(void) {
    static int x = 0;
    printf("%d ", x++);
}
void bar(void) {
    int z = 9;
    printf("%d ", z--);
}
int main(void) {
    foo();
    bar();
    foo();
    bar();
    return 0;
}
