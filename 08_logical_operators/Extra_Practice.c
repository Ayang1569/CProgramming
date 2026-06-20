#include <stdio.h>

// Function Prototype
int checkInput(int integer1, int integer2);

int main(void) {
    int inputOne;
    int inputTwo;
    checkInput(inputOne, inputTwo);

    return 0;
}

int checkInput(int integer1, int integer2) {
    // Inputs
    printf("Enter the first integer: ");
    int firstInteger;
    scanf("%d", &firstInteger);

    printf("Enter the second integer: ");
    int secondInteger;
    scanf("%d", &secondInteger);

    // Logic Operators
    if (secondInteger == 0 || secondInteger == 3) {
        puts("No solution");
    }
    else if (firstInteger % secondInteger == 0 && firstInteger % (secondInteger - 3) == 0) {
        int oneOutput = 1;
        return oneOutput;
    }
    else if (firstInteger % secondInteger == 0 || firstInteger % (secondInteger - 3) == 0) {
        int twoOutput = 2;
        return twoOutput;
    }
    else if (firstInteger % secondInteger != 0 && firstInteger % (secondInteger - 3) != 0) {
        int threeOutput = 1;
        return threeOutput;
    }
}