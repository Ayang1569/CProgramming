// The code goes here

/*
    Code made by Adam Yang
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void shuffleArray(int *arr, int size);

int main(void) {

    int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++) {
        printf("%d", arr[i]);
        puts("");
    }
    puts("");

    srand(12);
    shuffleArray(arr, SIZE);

    return 0;
}

void shuffleArray(int *arr, int size) {
    int treasurePosition = rand() % size;
    arr[treasurePosition] = 1;
}