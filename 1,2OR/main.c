#include <stdio.h>
#include <stdbool.h>

int main() {
    // Using int for boolean values
    int bool_as_int_true = 1;
    int bool_as_int_false = 0;

    // Using the bool type from stdbool.h
    bool bool_true = true;
    bool bool_false = false;

    // Printing boolean values
    printf("Integer booleans: %d, %d\n", bool_as_int_true, bool_as_int_false);
    printf("Standard booleans: %d, %d\n", bool_true, bool_false);

    // Demonstrating boolean evaluation
    if (bool_as_int_true) {
        printf("bool_as_int_true is considered true\n");
    }

    if (!bool_as_int_false) {
        printf("bool_as_int_false is considered false\n");
    }

    return 0;
}