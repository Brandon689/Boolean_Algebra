#include <stdio.h>
#include <stdbool.h>

// Function to demonstrate logical NAND
bool logical_nand(bool a, bool b) {
    return !(a && b);
}

// Function to demonstrate bitwise NAND
unsigned char bitwise_nand(unsigned char a, unsigned char b) {
    return ~(a & b);
}

// Function to print binary representation of an unsigned char
void print_binary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    // Logical NAND examples
    printf("Logical NAND:\n");
    printf("true NAND true = %d\n", logical_nand(true, true));
    printf("true NAND false = %d\n", logical_nand(true, false));
    printf("false NAND true = %d\n", logical_nand(false, true));
    printf("false NAND false = %d\n", logical_nand(false, false));

    // Bitwise NAND examples
    unsigned char a = 0xAA;  // 10101010
    unsigned char b = 0xF0;  // 11110000
    unsigned char result = bitwise_nand(a, b);

    printf("\nBitwise NAND:\n");
    printf("%u (binary: ", a);
    print_binary(a);
    printf(") NAND\n");
    printf("%u (binary: ", b);
    print_binary(b);
    printf(") =\n");
    printf("%u (binary: ", result);
    print_binary(result);
    printf(")\n");

    // Practical example: Implementing NOT using NAND
    unsigned char x = 0x55;  // 01010101
    unsigned char not_x = bitwise_nand(x, x);

    printf("\nImplementing NOT using NAND:\n");
    printf("x    = %u (binary: ", x);
    print_binary(x);
    printf(")\n");
    printf("NOT x = %u (binary: ", not_x);
    print_binary(not_x);
    printf(")\n");

    return 0;
}