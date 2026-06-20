int isMultiple(int *num1, int *num2) {
    if (*num1 == 0) {
        return 0;
    }

    if ((*num2 % *num1) == 0) {
        return 1;
    }

    return 0;
}