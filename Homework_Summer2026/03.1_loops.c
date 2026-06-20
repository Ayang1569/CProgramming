#include <stdio.h>

int main(void) {
    // Variables
    int a;
    int positive = 0;
    int negative = 0;

    // Input
    puts("Enter integer values. The program will exit when you enter 0.");

    while (a != 0) {
        scanf("%d", &a);
        if (a > 0) {
            positive++;
        }
        else if (a < 0) {
            negative++;
        }
    }

    printf("The number of positives is %d\n", positive);
    printf("The number of negatives is %d\n", negative);

    return 0;
}