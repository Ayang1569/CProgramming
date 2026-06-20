#include <stdio.h>

void printTriangleTopRight(int n);
void printTriangleTopRightDigitsAsc(int n);
void printTriangleTopRightDigitsDes(int n);
void printPyramid(int n);

int main(void) {
    int n = 0;

    // Scan a positive integer
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Function calls
    printTriangleTopRight(n);
    printTriangleTopRightDigitsAsc(n);
    printTriangleTopRightDigitsDes(n);
    printPyramid(n);
    
    return 0;
}

void printTriangleTopRight(int n) {
    puts("");
    for (int i = n; i > 0; i--) {
        // Print leading spaces
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int star = 0; star < i; star++) {
            printf("*");
        }
        puts("");
    }
    puts("");
}

void printTriangleTopRightDigitsAsc(int n) {
    for (int i = n; i > 0; i--) {
        int count = 1;
        // Print leading spaces
        for (int space = 0; space < n - i; space++) {
            printf(" ");
            count++;
        }
        // Print number
        for (int star = 0; star < i; star++) {
            printf("%d", count);
            count++;
        }
        puts("");
    }
    puts("");
}

void printTriangleTopRightDigitsDes(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print descending digits
        for (int j = n; j > i; j--) {
            printf("%d", j);
        }
        puts("");
    }
    puts("");
}

void printPyramid(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - 1 - i ; j++) {
            printf("%c", ' ');
        }
        // Print stars
        for (int j = 0; j <= i; j++) {
            printf("%c", '*');
        }

        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        puts("");
    }
    puts("");
}