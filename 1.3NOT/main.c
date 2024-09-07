#include <stdio.h>
#include <stdbool.h>

// Function to print binary representation of an unsigned char
void print_binary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

// Function to demonstrate logical NOT
bool logical_not(bool a) {
    return !a;
}

// Function to demonstrate bitwise NOT
unsigned char bitwise_not(unsigned char a) {
    return ~a;
}

int main() {
    // Logical NOT examples
    printf("Logical NOT:\n");
    printf("NOT true = %d\n", logical_not(true));
    printf("NOT false = %d\n", logical_not(false));

    // Bitwise NOT examples
    unsigned char num = 5;  // 5 in binary: 00000101
    unsigned char result = bitwise_not(num);
    printf("\nBitwise NOT:\n");
    printf("NOT %u (binary: ", num);
    print_binary(num);
    printf(")\n  = %u (binary: ", result);
    print_binary(result);
    printf(")\n");

    // Practical example: Inverting a bitmask
    unsigned char bitmask = 0xAA;  // 10101010 in binary
    unsigned char inverted_mask = bitwise_not(bitmask);

    printf("\nInverting a bitmask:\n");
    printf("Original mask: %u  (binary: ", bitmask);
    print_binary(bitmask);
    printf(")\nInverted mask: %u   (binary: ", inverted_mask);
    print_binary(inverted_mask);
    printf(")\n");

    return 0;
}