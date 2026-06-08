#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Function to convert the integer part to binary
void intToBinary(unsigned long long num) {
    int binary[64];
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

// Function to convert the fractional part to binary
void fracToBinary(double frac, int limit) {
    int i = 0;
    while (frac > 0 && i < limit) {
        frac *= 2;
        int bit = (int)frac;
        printf("%d", bit);
        frac -= bit;
        i++;
    }
}

// Function to convert decimal float to binary
void toBinary(double num) {
    unsigned long long intPart = (unsigned long long)num;
    double fracPart = num - intPart;

    intToBinary(intPart);
    if (fracPart > 0) {
        printf(".");
        fracToBinary(fracPart, 10); // print 10 binary digits for fraction
    }
}

int main() {
    char numStr[50];
    int base;
    double num;

    printf("Enter a number (can include decimal point): ");
    scanf("%s", numStr);

    printf("Enter the base of that number (2, 8, 10, or 16): ");
    scanf("%d", &base);

    // Convert input string to decimal (base 10)
    num = strtod(numStr, NULL); // works for base 10 only
    if (base != 10) {
        // convert integer part manually if base != 10
        unsigned long long intPart = strtoull(numStr, NULL, base);
        num = (double)intPart;
    }

    printf("\n=== Conversion Results ===\n");

    printf("Binary (Base 2): ");
    toBinary(num);
    printf("\n");

    printf("Octal (Base 8): %llo\n", (unsigned long long)num);
    printf("Decimal (Base 10): %.10f\n", num);
    printf("Hexadecimal (Base 16): %llX\n", (unsigned long long)num);

    return 0;
}
