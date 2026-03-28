#include <stdio.h>

int main() {
  int a, b, result = 1;
  printf("Enter base a and power b: ");
  scanf("%d %d", &a, &b);
  for (int i = 0; i < b; i++)
    result *= a;

  printf("%d ^ %d = %d\n", a, b, result);

  return 0;
}
