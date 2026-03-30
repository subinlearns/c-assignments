// WAP to find the value of x to the power y using recursive function
#include <stdio.h>

int power(int x, int y) {
  if (y == 0)
    return 1;
  else if (y == 1)
    return x;
  else
    return x * power(x, y - 1);
}

int main() {
  int x, y, res;
  printf("Enter base and power: ");
  scanf("%d %d", &x, &y);

  res = power(x, y);
  printf("%d^%d = %d\n", x, y, res);

  return 0;
}
