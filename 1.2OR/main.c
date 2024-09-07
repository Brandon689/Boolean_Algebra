#include <stdio.h>
#include <stdbool.h>

// Function to demonstrate logical OR
bool logical_or(bool a, bool b) {
    return a || b;
}

// Function to demonstrate bitwise OR
int bitwise_or(int a, int b) {
    return a | b;
}

int main() {
    // Logical OR examples
    printf("Logical OR:\n");
    printf("true OR true = %d\n", logical_or(true, true));
    printf("true OR false = %d\n", logical_or(true, false));
    printf("false OR true = %d\n", logical_or(false, true));
    printf("false OR false = %d\n", logical_or(false, false));

    // Bitwise OR examples
    printf("\nBitwise OR:\n");
    printf("5 | 3 = %d\n", bitwise_or(5, 3));  // 5 (101) | 3 (011) = 7 (111)
    printf("12 | 10 = %d\n", bitwise_or(12, 10));  // 12 (1100) | 10 (1010) = 14 (1110)

    // Practical example: Setting a specific bit
    int num = 20;  // 20 in binary: 00010100
    int bit_position = 3;
    int result = num | (1 << bit_position);
    printf("\nOriginal number: %d (binary: %08b)\n", num, num);
    printf("After setting bit %d: %d (binary: %08b)\n", bit_position, result, result);

    return 0;
}