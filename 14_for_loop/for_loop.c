/*
    For loops introduction

    for (initialization ; condition ; increment)
        statements
*/

#include <stdio.h>

int main(void) {

    for (int n = 15; n <= 45 ; n += 5) {
        printf("%d\n", n);
    }

    puts("");

    for (int c = 100; c >= 2; c -= 2) {
        printf("%d\n", c);
    }

    puts("");

    for (int h = 0; h <= 100; h++) {
        printf("Hi!\n");
    }

    return 0;
}