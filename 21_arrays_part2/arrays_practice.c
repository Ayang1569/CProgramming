/*
    Using constant arrays.

    Searching in arrays.
*/

#include <stdio.h>

#define SIZE 10

void printDoubledArray(const int* arr, int size); // const protects the original array from modification

/*
    Returns the index of the first zero value in the arry.
    Returns -1 if there are no zeros.
*/
int searchFirstZero(const int* arr, int size);
int searchLastZero(const int* arr, int size);

/*
    TODO
*/
int searchNthZero(const int* arr, int size, int n);
int searchNthTarget(const int* arr, int size, int n, int target);


int main(void) {
    // Create an array
    int a[SIZE] = {1, 2, 3, 4};

    // Call the function
    printDoubledArray(a, SIZE);

    printf("The first zero is at index %d\n", searchFirstZero(a, SIZE));
    printf("The last zero is at index %d\n", searchLastZero(a, SIZE));

    return 0;
}

void printDoubledArray(const int* arr, int size) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i] * 2);
    }
    puts("");
}

int searchFirstZero(const int* arr, int size) {
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == 0) {
            return i; // Return the index of the first zero value.
        }
    }
    return -1;
}

int searchLastZero(const int* arr, int size) {
    for (int i = SIZE - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            return i; // Return the index of the first zero value.
        }
    }
    return -1;
}

int searchNthZero(const int* arr, int size, int n) {
    int numberOfZeros = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == 0) {
            numberOfZeros++;
        }
        else if (numberOfZeros = n) {
            return i;
        }
    }
    return -1;
}

int searchNthTarget(const int* arr, int size, int n, int target) {
    int numberOfTargets = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == target) {
            numberOfTargets++;
        }
        else if (numberOfTargets = n) {
            return i;
        }
    }
    return -1;
}