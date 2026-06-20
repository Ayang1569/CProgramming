
#include <stdio.h>

int main(void) {
    // Variables
    int membershipMonths;
    int pTrainingSessions;
    double discountPercentage;

    // Inputs
    printf("Enter number of months: ");
    scanf("%d", &membershipMonths);

    printf("Enter number of training sessions: ");
    scanf("%d", &pTrainingSessions);

    printf("Enter discount percentage: ");
    scanf("%lf", &discountPercentage);

    // Operations
    int gymMembershipCost = membershipMonths * 25;
    
    int pTrainingCost = pTrainingSessions * 10;

    int subTotal = gymMembershipCost + pTrainingCost;

    double discountAmount = subTotal * (discountPercentage / 100);

    double totalCost = subTotal - discountAmount;

    // If statements
    if (membershipMonths >= 12) {
        puts("Long-term member discount applied!");
    }

    if (pTrainingSessions > 20) {
        puts("You are training hard this year!");
    }

    if (totalCost > 500) {
        puts("Premium membership package selected.");
    }
    else {
        puts("Standard membership package selected");
    }

    // Output costs
    printf("Membership cost: $%d\n", gymMembershipCost);
    printf("Training cost: $%d\n", pTrainingCost);
    printf("Subtotal: $%d\n", subTotal);
    printf("Discount amount: $%.2lf\n", discountAmount);
    printf("Final total: $%.2lf\n", totalCost);

    return 0;
}