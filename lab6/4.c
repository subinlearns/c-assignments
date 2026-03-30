// Write a program using user-defined function to calculate y raise to power x
#include <stdio.h>

int power(int base, int exp) {
  int ret = 1;
  if (exp == 0)
    return 1;
  for (int i = 0; i < exp; i++) {
    ret *= base;
  }
  return ret;
}

int main() {
  int y, x, result;
  printf("Enter base: ");
  scanf("%d", &y);
  printf("Enter power: ");
  scanf("%d", &x);

  result = power(y, x);
  printf("%d ^ %d = %d\n", y, x, result);
  return 0;
}
