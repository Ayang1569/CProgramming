#include <stdio.h>
#include <stdlib.h>


// Function Prototype
int findGCD(int n1, int n2);
void printFraction(int num, int denom);
void scanFraction(int *num_ptr, int *denom_ptr);
void reduceFraction(int *num_ptr, int *denom_ptr);

int main(void) {
    // Variables
    int n1;
    int n2;

    // Input
    scanFraction(&n1, &n2);

    // Output fraction
    printFraction(n1, n2);

    // Reduced Fraction
    reduceFraction(&n1, &n2);

    return 0;
}


int findGCD(int n1, int n2){ 
    int r;
    int g = abs(n1);
    int p = abs(n2);

    r = g % p;
    while (r != 0) {
        g = p;
        p = r;
        r = g % p;
    }

    return p;
}

void printFraction(int num, int denom) {
    printf("The entered fraction> %d/%d\n", num, denom);
}

void scanFraction(int *num_ptr, int *denom_ptr) {
    // Input
    printf("Enter numerator> ");
    scanf("%d", num_ptr);

    printf("Enter denominator> ");
    scanf("%d", denom_ptr);
    
    // Check if denominator is zero
    while(1) {
        if (*denom_ptr == 0) {
            printf("Invalid, reenter denominator\n");
            printf("Enter denominator> ");
            scanf("%d", denom_ptr);
        }
        else {
            break;
        }
    }
}

void reduceFraction(int *num_ptr, int *denom_ptr) {
    int gcd = findGCD(*num_ptr, *denom_ptr);

    *num_ptr /= gcd;
    *denom_ptr /= gcd;

    printf("The reduced fraction> %d/%d\n", *num_ptr, *denom_ptr);
}