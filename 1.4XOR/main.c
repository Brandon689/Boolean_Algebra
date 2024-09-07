#include <stdio.h>
#include <stdbool.h>

// Function to print binary representation of an unsigned char
void print_binary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

// Function to demonstrate logical XOR
bool logical_xor(bool a, bool b) {
    return (a || b) && !(a && b);
}

// Function to demonstrate bitwise XOR
unsigned char bitwise_xor(unsigned char a, unsigned char b) {
    return a ^ b;
}

int main() {
    // Logical XOR examples
    printf("Logical XOR:\n");
    printf("true XOR true = %d\n", logical_xor(true, true));
    printf("true XOR false = %d\n", logical_xor(true, false));
    printf("false XOR true = %d\n", logical_xor(false, true));
    printf("false XOR false = %d\n", logical_xor(false, false));

    // Bitwise XOR examples
    unsigned char a = 5;   // 00000101
    unsigned char b = 3;   // 00000011
    unsigned char result = bitwise_xor(a, b);

    printf("\nBitwise XOR:\n");
    printf("%u (binary: ", a);
    print_binary(a);
    printf(") XOR\n");
    printf("%u (binary: ", b);
    print_binary(b);
    printf(") =\n");
    printf("%u (binary: ", result);
    print_binary(result);
    printf(")\n");

    // Practical example: Toggling bits
    unsigned char flags = 0xAA;  // 10101010
    unsigned char mask = 0x0F;   // 00001111
    result = flags ^ mask;

    printf("\nToggling bits:\n");
    printf("Original: %u (binary: ", flags);
    print_binary(flags);
    printf(")\nMask:     %u  (binary: ", mask);
    print_binary(mask);
    printf(")\nResult:   %u (binary: ", result);
    print_binary(result);
    printf(")\n");

    return 0;
}