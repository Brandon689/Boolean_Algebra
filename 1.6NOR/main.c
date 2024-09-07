#include <stdio.h>
#include <stdbool.h>

// Function to demonstrate logical NOR
bool logical_nor(bool a, bool b) {
    return !(a || b);
}

// Function to demonstrate bitwise NOR
unsigned char bitwise_nor(unsigned char a, unsigned char b) {
    return ~(a | b);
}

// Function to print binary representation of an unsigned char
void print_binary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    // Logical NOR examples
    printf("Logical NOR:\n");
    printf("true NOR true = %d\n", logical_nor(true, true));
    printf("true NOR false = %d\n", logical_nor(true, false));
    printf("false NOR true = %d\n", logical_nor(false, true));
    printf("false NOR false = %d\n", logical_nor(false, false));

    // Bitwise NOR examples
    unsigned char a = 0xAA;  // 10101010
    unsigned char b = 0xF0;  // 11110000
    unsigned char result = bitwise_nor(a, b);

    printf("\nBitwise NOR:\n");
    printf("%u (binary: ", a);
    print_binary(a);
    printf(")\n");
    printf("%u (binary: ", b);
    print_binary(b);
    printf(")\n");
    printf("The result of a NOR b is:\n");
    printf("%u (binary: ", result);
    print_binary(result);
    printf(")\n");

    // Practical example: Implementing NOT using NOR
    unsigned char x = 0x55;  // 01010101
    unsigned char not_x = bitwise_nor(x, x);

    printf("\nImplementing NOT using NOR:\n");
    printf("x    = %u   (binary: ", x);
    print_binary(x);
    printf(")\n");
    printf("NOT x = %u (binary: ", not_x);
    print_binary(not_x);
    printf(")\n");

    return 0;
}