// Write a program to input a number and calculate its factorial using function
#include <stdio.h>

int fact(int num) {
  int f = 1;
  if (num == 0 || num == 1)
    return 1;
  for (int i = 1; i <= num; i++)
    f *= i;
  return f;
}

int main() {
  int n, result;
  printf("Enter any number: ");
  scanf("%d", &n);

  result = fact(n);
  printf("Factorial of %d = %d\n", n, result);
  return 0;
}
