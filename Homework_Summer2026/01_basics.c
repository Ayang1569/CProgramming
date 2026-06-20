// Your code goes here
#include <stdio.h>

int main(void) {
    // Variables
    int pi = 3;
    int radius = 0;
    int walkwayWidth = 0;

    // Inputs
    printf("Enter the radius of the circular playground: ");
    scanf("%d", &radius);

    printf("Enter the width of the walkway: ");
    scanf("%d", &walkwayWidth);

    // Operations
    int areaPlayground = pi * radius * radius;
    int areaLargerCircle = pi * (radius + walkwayWidth) * (radius + walkwayWidth);
    int areaWalkway = areaLargerCircle - areaPlayground;

    // Output
    printf("The area of the walkway is: %d\n", areaWalkway);

    return 0;
}