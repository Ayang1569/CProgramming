/*
    Using pointers.

    %p = finding address (need &<variable name>)
    * = pointer address of the variable
*/

#include <stdio.h>

void setToZero(int* pN); // Passing by reference

void swap(int* a, int* b);

int main(void) {
    int a = 10;

    printf("a before %d - %p\n", a, &a);
    setToZero(&a);
    printf("a after %d\n", a);

    // TODO test swap function
    int c = 5;
    int d = 9;
    swap(&c, &d);

    return 0;
}

void setToZero(int* pN) {
    *pN = 0;
    printf("pN - %p\n", &pN);
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("%d and %d\n", *a, *b);
}