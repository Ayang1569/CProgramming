
#include <stdio.h>

int main(void) {
    int integerOne;
    int integerTwo;

    scanf("%d", &integerOne);
    scanf("%d", &integerTwo);

    printf("    %d\n", integerTwo);
    printf("    %d%d\n", integerTwo, integerTwo);
    printf("%d%d%d%d%d%d%d\n", integerOne, integerOne, integerOne, integerOne, integerTwo, integerTwo, integerTwo);
    printf("%d%d%d%d%d%d%d%d\n", integerOne, integerOne, integerOne, integerOne, integerTwo, integerTwo, integerTwo, integerTwo);
    printf("%d%d%d%d%d%d%d\n", integerOne, integerOne, integerOne, integerOne, integerTwo, integerTwo, integerTwo);
    printf("    %d%d\n", integerTwo, integerTwo);
    printf("    %d\n", integerTwo);

    return 0;
}