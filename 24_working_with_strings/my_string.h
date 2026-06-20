#include "my_ctype.h"

void printInLowercase(const char* str);
void printInReversedCase(const char* str);

// TODO
void printWithNoDigits(const char* str);
void printSpecialCharacters(const char* str);
void convertToLower(char* str);
void printWords(const char* str); // *

// For strings practice
void get_string(char* str, const char* prompt);
int my_strlen(const char* str);
void my_strcpy(char* dest, const char* src);
void my_strcat(char* dest, const char* src);

// 0 - string are the same; 
// -1 - first string is smaller
// 1 - first string is larger
int my_strcmp(const char* s1, const char* s2);


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

/*
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
*/

void get_string(char* str, const char* prompt) {
    printf("%s\n", prompt);

    int i = 0;
    while (1) {
        char input = getchar();
        if (input == '\n') {
            break;
        }
        else {
            str[i] = input;
            i++;
        }
    }
    // Add null character at the end
    str[i] = '\0';
}

int my_strlen(const char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }

    return i;
}

void my_strcpy(char* dest, const char* src) {
    int i = 0;
    while (1) {
        dest[i] = src[i];
        if (src[i] == '\0') {
            break;
        }
        i++;
    }
}

void my_strcat(char* dest, const char* src) {
    int i = my_strlen(dest);
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

// 0 - string are the same; 
// -1 - first string is smaller
// 1 - first string is larger
int my_strcmp(const char* s1, const char* s2) {
    int k = 0;
    while ( (s1[k] != '\0') && (s2[k] != '\0') ) {
        if (s1[k] < s2[k]) {
            return -1;
        }
        else if (s1[k] > s2[k]) {
            return 1;
        }

        k++;
    }

    if (s1[k] == '\0' && s2[k] == '\0') {
        return 0; // Same string
    }
    else if (s1[k] == '\0') {
        return -1; // First string is shorter/smaller
    }
    else {
        return 1; // First string is longer/larger
    }

}