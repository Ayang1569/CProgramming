/*

    The program that calculates the roots of quadratic equation

    ax^2 + bx + c = 0

    1) print the prompt
*/

#include <stdio.h>
#include <stdbool.h>

// Function prototypes
void printPrompt(char coeff);
int getCoefficient(void);
int calculateDisciminant(int a, int b, int c);
void printRoots(int a, int b, int c);

int main(void) {

    printPrompt('a');
    int a = getCoefficient();

    printPrompt('b');
    int b = getCoefficient();

    printPrompt('c');
    int c = getCoefficient();

    return 0;
}

void printPrompt(char coeff) {
    printf("Enter the coefficient %c: ", coeff);
}

int getCoefficient(void) {
    int c;
    scanf("%d", &c);

    return c;
}

int calculateDisciminant(int a, int b, int c) {
    return (b * b ) - (4 * a * c);
}

void printRoots(int a, int b, int c) {
    // TODO
    /*
        If discr < 0 -> no roots
        else if discr == 0 -> 1 root
        else 2 roots

    */
   if (calculateDisciminant(a, b, c) < 0) {
    puts("No roots");
   }
   else if (calculateDisciminant(a, b, c) == 0) {
    return calculateDisciminant;
   }
   else {

   }
}