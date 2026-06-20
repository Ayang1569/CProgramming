#include <stdio.h>

// Function prototypes
void printLine(char c, int n);
void printLinePattern(char c1, char c2, int n);
void printCheckerboard(char c1, char c2, int size);
void printColumnSwapCheckerboard(char c1, char c2, int size);

int main(void) {
    // Variables
    char c1, c2;
    int n;

    // Input
    printf("Enter the first character: ");
    scanf("%c", &c1);

    printf("Enter the second character: ");
    scanf(" %c", &c2);

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Output
    printLine(c1, n);
    printLinePattern(c1, c2, n);
    printCheckerboard(c1, c2, n);
    printColumnSwapCheckerboard(c1, c2, n);

    return 0;
}

void printLine(char c, int n) {
    int i = 1;
    while (i <= n) {
        printf("%c", c);
        if (i < n) {
            printf(" ");
        }
        i++;
    }
    puts("");
}

void printLinePattern(char c1, char c2, int n) {
    int i = 1;
    while (i <= n) {
        if (i % 2 == 1) {
            printf("%c", c1);
        }
        else {
            printf("%c", c2);
        }

        if (i < n) {
            printf(" ");
        }
        
        i++;
    }
    puts("");
}

void printCheckerboard(char c1, char c2, int size) {
    for (int i = 1; i <= size; i++) {
        if (i % 2 == 1) {
                printLinePattern(c1, c2, size);
            }
            else {
                printLinePattern(c2, c1, size);
            }
        }
}

void printColumnSwapCheckerboard(char c1, char c2, int size) {
    for (int i = 1; i <= size; i++) {
        if (i % 2 == 1) {
                printLine(c1, size);
            }
            else {
                printLine(c2, size);
            }
        }
        puts("");
}