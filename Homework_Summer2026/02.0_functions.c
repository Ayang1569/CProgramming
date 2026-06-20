// Your code for problem 1 goes here.
#include <stdio.h>

int main(void) {

    // Variable
    double c_Balance = 150.75;
    char a_or_s;
    double add_Balance;
    double spend_Balance;
    double updated_Balance;

    // Display current balance
    printf("Current Balance: $%.2f\n", c_Balance);

    // Add or Spend
    printf("Do you want to Add (A) or Sepnd (S) funds? ");
    scanf("%c", &a_or_s);

    if (a_or_s == 'A') {
        printf("Enter the amount to add: $");
        scanf("%lf", &add_Balance);

        // Add to current balance
        updated_Balance = c_Balance + add_Balance;

        printf("Updated Balance: $%.2f\n", updated_Balance);
    }
    else if (a_or_s == 'S') {
        printf("Enter the amount to spend: $");
        scanf("%lf", &spend_Balance);

        // Spend to current balance
        updated_Balance = c_Balance - spend_Balance;

        if (updated_Balance >= 0) {
            printf("Updated Balance: $%.2f\n", updated_Balance);
        }
        else if (updated_Balance < 0) {
            printf("Insufficient funds! Please reconsider your spending amount.\n");
        }
    }

    return 0;
}