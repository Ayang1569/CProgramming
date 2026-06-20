#include <stdio.h>
#include <stdlib.h> // rand function

int getRandomNumber(int min, int max);
void printTable(int min, int max, int n);

int main(void) {
    // Variables
    int min, max, n;
    unsigned int seed;

    // Inputs
    printf("Enter random number seed: ");
    scanf("%u", &seed);

    printf("Enter the minimum random number: ");
    scanf("%d", &min);

    printf("Enter the maximum random number: ");
    scanf("%d", &max);

    printf("Enter the number of random numbers: ");
    scanf("%d", &n);

    // Table
    srand(seed);
    printTable(min, max, n);

    return 0;
}

int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

void printTable(int min, int max, int n) {
    printf("-------------\n");

    int c = 1;
    int sum = 0;

    while (c <= n) {
        int randomNum = getRandomNumber(min, max);

        printf("|%-5.3d|%5d|\n", c, randomNum);

        sum += randomNum;
        c += 1;
    }
    printf("-------------\n");
    printf("The sum is: %d\n", sum);
}