#include <stdio.h>

int main() {
  int a, b;
  printf("Enter any two numbers: ");
  scanf("%d %d", &a, &b);

  (a > b) ? printf("%d\n", a + b) : printf("%d\n", a * b);

  return 0;
}
