/*

    Character functions


*/

#include <stdio.h>
#include <stdbool.h>

/*
    Check is the given character an uppercase
*/

bool isUpper(char c);
bool isLower(char c);
bool isDigit(char c);
bool isAlNum(char c);
bool isSpecial(char c); //TODO

char toLower(char c);
char toUpper(char c); // TODO

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isAlNum(char c) {
    return isUpper(c) || isLower(c) || isDigit(c); // (c >= '0' && c <= 'z');
}

char toLower(char c) {
    if (isUpper(c)) {
        return c + 32;
    }
    else {
        return c;
    }
}

char toUpper(char c) {
    if (isLower(c)) {
        return c - 32;
    }
    else {
        return c;
    }
}

bool isSpecial(char c) {
    if (!isAlNum(c)) {
            return c;
    }
    else {
        return !c;
    }
}
