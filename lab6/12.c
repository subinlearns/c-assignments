// Write function which accepts two integers as arguments and returns sum, difference and products of the numbers.
#include <stdio.h>

void run(int a, int b) {
  printf("Sum = %d\n", a + b);
  printf("Difference = %d\n", a - b);
  printf("Product = %d\n", a * b);
}


int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  run(a, b);
  return 0;
}
