// Write a program to input a number and calculate its factorial using recursive function.
#include <stdio.h>

int fact(int n) {
  if (n == 0 || n == 1)
    return 1;
  return n * fact(n - 1);
}

int main() {
  int n, res;
  printf("Enter a number: ");
  scanf("%d", &n);

  res = fact(n);
  printf("Factorial = %d\n", res);
  return 0;
}
