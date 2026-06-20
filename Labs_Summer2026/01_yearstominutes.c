/*
The program converts the age in years to minutes and displays both values. 

1. print the prompt to enter the number of years.
2. create a variable and get the number of years
3. calculate the number of minutes  (assume 1 year is 365 days)
4. print the result in the format "XX" years is "XX" minutes

*/

#include <stdio.h>

int main(void) {
    int years = 0;
    int minutes = 0;

    // Get number of years
    puts("Enter the number of years");
    scanf("%d", &years);

    // Calculate number of minutes
    minutes = years * 525600;

    // Print the results
    printf("\"%d\" years is \"%d\" minutes\n", years, minutes);

    return 0;
}