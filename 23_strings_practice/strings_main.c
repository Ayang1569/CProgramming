#include "my_ctype.h"

void printInLowercase(const char* str);
void printInReversedCase(const char* str);

// TODO
void printWithNoDigits(const char* str);
void printSpecialCharacters(const char* str);
void convertToLower(char* str);
void printWords(const char* str); // *

int main(void) {
    int ch_input = 'B';

    printf("isUpper('%c') = %d\n", ch_input, isUpper(ch_input));

    /////////////////////////////////
    // Create a string
    char str[] = "HeLlO WoRlD123!";

    // Print the string
    puts("Using printf");
    printf("%s\n\n", str);

    puts("Using puts");
    puts(str);
    puts("\n");

    puts("Using a loop");
    for (int i = 0; str[i] != '\0'; i++) { // str[i] != '\0' = continue till end of the string
        putchar(str[i]);
    }
    puts("\n");

    puts("Print in lowercase");
    printInLowercase(str);

    puts("Print in reverse");
    printInReversedCase(str);

    
    puts("Print with no digits");
    printInReversedCase(str);

    puts("Print special characters");
    printInReversedCase(str);

    puts("Print in reverse");
    printInReversedCase(str);

    return 0;
}

void printInLowercase(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toLower(str[i]));
    }
    puts("\n");
}

void printInReversedCase(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isUpper(str[i])) {
            putchar(toLower(str[i]));
        }
        else  {
            putchar(toUpper(str[i]));
        }
    }
    puts("\n");
}


void printWithNoDigits(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isDigit(str[i])) {
            i = "";
            putschar(str[i]);
        }
        else {
            putschar(str[i]);
        }
    }
    puts("\n");
}


void printSpecialCharacters(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isAlNum(str[i])) {
            putschar(isAlNum(str[i]));
        }
        else {
            putschar(str[i]);
        }
    }
    puts("\n");
}


void convertToLower(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isUpper(str[i])) {
            putschar(toLower(str[i]));
        }
        else {
            putschar(str[i]);
        }
    }
}

void printWords(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isDigit(str[i]) && isSpecial(str[i])) {
            i = "";
            putschar(str[i]);
        }
        else {
            putschar(str[i]);
        }
    }
}
