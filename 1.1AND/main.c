#include <stdio.h>
#include <stdbool.h>

// Function to demonstrate logical AND
bool logical_and(bool a, bool b) {
    return a && b;
}

// Function to demonstrate bitwise AND
int bitwise_and(int a, int b) {
    return a & b;
}

bool is_divisible_by_4(int num) {
    return (num & 3) == 0;
}

int main() {
    // Logical AND examples
    printf("Logical AND:\n");
    printf("true AND true = %d\n", logical_and(true, true));
    printf("true AND false = %d\n", logical_and(true, false));
    printf("false AND true = %d\n", logical_and(false, true));
    printf("false AND false = %d\n", logical_and(false, false));

    // Bitwise AND examples
    printf("\nBitwise AND:\n");
    printf("5 & 3 = %d\n", bitwise_and(5, 3));  // 5 (101) & 3 (011) = 1 (001)
    printf("12 & 10 = %d\n", bitwise_and(12, 10));  // 12 (1100) & 10 (1010) = 8 (1000)

    // Practical example: Checking if a number is even
    int num = 14;
    if (!(num & 1)) {
        printf("\n%d is even\n", num);
    }
    else {
        printf("\n%d is odd\n", num);
    }
    num = 8;
    if (is_divisible_by_4(num)) {
        printf("%d is divisible by 4\n", num);
    }
    else {
        printf("%d is not divisible by 4\n", num);
    }
    return 0;
}