#include <stdio.h>

int main(void) {
    int x = 0x17;
    int y = 17;
    int z = 017;

    printf("%d %d %d %x %x %x\n", x, y, z, x, y, z);
    return 0;
}