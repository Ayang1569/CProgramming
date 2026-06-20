#include <stdio.h>

int main(void) {
    // Variables
    int n;
    int sum = 0;

    // Input
    printf("Enter the number: ");
    scanf("%d", &n);

    // For loop
    for (int a = 1; a <= n; a++) {
        if (a % 5 == 0) {
            sum += a;
        }
    }

    // Output
    printf("The sum is: %d\n", sum);

    return 0;
}