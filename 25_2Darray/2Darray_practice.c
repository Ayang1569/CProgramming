#include <stdio.h>

#define ROW 5
#define COL 5

double findSumElementsArray(int rows, int cols, const double arr[rows][cols]);

void print2DArray(int rows, int cols, double arr[rows][cols]);

double findSumOfColumn(int rows, int cols, const double arr[rows][cols], int col);


int main(void) {
    double arr[ROW][COL];

    // Initialize 2D array
    double count = 1;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = count;
            count++;
        }
    }

    // Change value of elements
    arr[0][1] = 24.0;
    arr[2][2] = 43.0;

    arr[ROW - 1][COL - 1] = findSumElementsArray(ROW, COL, arr) - 350; 

    puts("");
    // Last element of the array is Sum-350
    print2DArray(ROW, COL, arr);

    puts("");

    char str[6];

    for (int col = 0; col < COL; col++) {
        str[col] = (char)findSumOfColumn(ROW, COL, arr, col);
    }

    str[0] += 34;
    str[1] -= 12;
    str[2] -= 38;
    str[3] += 1;
    str[4] -= 24;

    str[5] = '\0';

    printf("String: %s\n", str);

    return 0;
}

double findSumElementsArray(int rows, int cols, const double arr[rows][cols]) {
    double sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

void print2DArray(int rows, int cols, double arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%6.2f", arr[i][j]);
        }
        puts("");
    }
}

double findSumOfColumn(int rows, int cols, const double arr[rows][cols], int col) {
    double sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][col];
    }
    return sum;
}