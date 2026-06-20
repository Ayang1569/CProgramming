/*
  C program that checks whether an integer entered by the user is divisible by 4.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function prototype
int getInput(void);
bool isNegative(int n);
bool isInRange(int n);
bool isGreaterThan100(int n);

int main() {

  int a = getInput();
  double b = sqrt(a);

  if (isNegative(a)) {
    printf("The program doesn't accept negative numbers\n"); 
  }
  else if (isInRange(a)) {
    if (a % 4 == 0 ) {
      printf("The number (%d) is divisible by 4\n", a);
      printf("Quotient: %d\n", a / 4);
    }
    else {
      printf("The number (%d) is not divisible by 4\n", a);
      printf("Quotient: %d\n", a / 4);
      printf("Remainder: %d\n", a % 4);
    }
  }
  else if (isGreaterThan100(a)) {
    printf("The entered number is greater than 100 and the square root of it is %lf\n", b);
  }

  return 0;
}

int getInput(void) {
  int a;
  printf("Please enter an integer to see whether it is divisible by 4: ");
  scanf("%d", &a);

  return a;
}

bool isNegative(int n) {
  return (n < 0);
}

bool isInRange(int n) {
  return (n <= 100 && n >= 0);
}

bool isGreaterThan100(int n) {
  return (n > 100);
}