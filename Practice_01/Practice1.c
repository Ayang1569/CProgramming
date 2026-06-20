#include <stdio.h>

int main(void) {
    // Variables
    int integer1 = 1;

    int integer2 = 1;

    int integer3 = 1;

    // Value inputs
    printf("Enter the first integer: ");
    scanf("%d", &integer1);

    printf("Enter the second integer: ");
    scanf("%d", &integer2);

    printf("Enter the third integer: ");
    scanf("%d", &integer3);

    // Operations
    int sum = integer1 + integer2 + integer3;
    
    int diff = integer1 - integer2 - integer3;

    int product = integer1 * integer2 * integer3;

    int quotient = integer1 / integer2 / integer3;

    int remainder = integer1 % integer2 % integer3;

    // Outputs
    printf("%d + %d + %d = %d\n", integer1, integer2, integer3, sum);

    printf("%d - %d - %d = %d\n", integer1, integer2, integer3, diff);

    printf("%d * %d * %d = %d\n", integer1, integer2, integer3, product);

    printf("%d / %d / %d = %d\n", integer1, integer2, integer3, quotient);

    printf("%d %% %d %% %d = %d\n", integer1, integer2, integer3, remainder);

    return 0;
}