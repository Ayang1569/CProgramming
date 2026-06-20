/*
    Practice with nested loops
*/

#include <stdio.h>
#include <unistd.h> // usleep()

void printRectangle(int rows, int cols);
void printTriangleTopLeft(int size);
void printTriangleBottomLeft(int size);
void printTriangleBottomRight(int size);

int main(void) {
    int rows, cols, size;

    // Get input
    do {
        printf("Enter rows and columns: ");
        scanf("%d%d", &rows, &cols);
    } while (rows <= 0 || cols <= 0);

    // Print rectangle
    printRectangle(rows, cols);

    // Get size
    do {
        printf("Enter triangle size: ");
        scanf("%d", &size);
    } while (size <= 0);

    // Print triangle
    /*for (int i = 0; i < 1000; i++) {
        printTriangleTopLeft(size);
        printTriangleBottomLeft(size);
    }
    */

    printTriangleBottomRight(size);

    return 0;
}

void printRectangle(int rows, int cols) {
    for (int i = 0 ; i < rows; i++) {
        for (int j = 0 ; j < cols; j++) {
            if ((j == 0 && i == 0) || 
                (i == 0 && j == cols-1) || 
                (j == 0 && i == rows -1) || 
                (j == cols -1 && i == rows -1)) // Checks the corners and replaces with "o"
            {
                printf("%c", 'o');
            }
            else if (j == 0 || j == cols - 1 || i == 0 || i == rows - 1) { // Checks the rows and columns to print "*"
                printf("%c", '*');
            }
            else {
                printf("%c", ' '); // Makes the middle empty after first row and before last row
            }
        }
        puts(""); // Moves to the next line
    }
}

void printTriangleTopLeft(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            printf("%c", '*');
            usleep(3000); // Lags the code output
        }
        puts("");
    }
}

void printTriangleBottomLeft(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i ; j++) {
            printf("%c", '*');
            usleep(3000);
        }
        puts("");
    }
}

void printTriangleBottomRight(int size) {
    for (int i = 0; i < size; i++) {
        // Print leading spaces
        for (int j = 0; j < size - 1 - i ; j++) {
            printf("%c", ' ');
        }
        // Print stars
        for (int j = 0; j <= i; j++) {
            printf("%c", '*');
        }
        puts("");
    }
}