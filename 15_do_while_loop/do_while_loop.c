/*
    Introducing do..while loop.
*/

#include <stdio.h>

int main(void) {
    char input;
    int number;
    int option;
    int number;

    // Get the character
    do {
        printf("Enter the uppercase character: ");
        scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');

    printf("Your character is %c\n", input);

    // Scan a positive integer
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);

    printf("Your number is %d\n", number);

    // Scan for only 1 and 2
    do {
        printf("Enter an options (1 (one line) or 2 (multiple line)): ");
        scanf("%d", &option);
    } while(option != 1 && option != 2);

    // 
    do {
        printf("Enter an options (1 (one line) or 2 (multiple line)): ");
        scanf("%d", &option);

        printf("Enter the number of times to repeat: ");
        scanf("%d", &number);
        if (option == 1) {
            for (int i = 0 ; i <= number; i++) {
                printf("%c", input);
            }
        }
        else if (option == 2) {
            for (int i = 0 ; i <= number ; i++) {
                printf("%c\n", input);
            }
        }
    } while(option != 1 && option != 2);

    return 0;
}