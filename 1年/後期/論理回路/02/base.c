#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert decimal to binary
void toBinary(unsigned int num) {
    int binary[32];
    int i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    char numStr[50];
    int base;
    unsigned int num;

    printf("Enter a number: ");
    scanf("%s", numStr);

    printf("Enter the base of that number (2, 8, 10, or 16): ");
    scanf("%d", &base);

    // Convert input string to integer based on the base
    num = strtoul(numStr, NULL, base);

    printf("\n=== Conversion Results ===\n");
    printf("Binary (Base 2): ");
    toBinary(num);
    printf("\nOctal (Base 8): %o\n", num);
    printf("Decimal (Base 10): %u\n", num);
    printf("Hexadecimal (Base 16): %X\n", num);

    return 0;
}
