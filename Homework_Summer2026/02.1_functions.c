// Your code for problem 2 goes here.
#include <stdio.h>
#include <stdbool.h>

int main() {
    // Variables
    int temp;

    // Input
    printf("What is the temperature outside?\n");
    scanf("%d", &temp);

    // Condition statements
    if (temp >= 80) {
        puts("Swimming");
    }
    else if (temp <= 79 && temp >= 60) {
        puts("Soccer");
    }
    else if (temp <= 59 && temp >= 40) {
        puts("Volleyball");
    }
    else {
        puts("Skiing");
    }

    return 0;
}