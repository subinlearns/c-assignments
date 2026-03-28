#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter value for a and b: ");
  scanf("%d %d", &a, &b);
  c = a + b;
  printf("Cube of %d + %d = %d\n", a, b, c * c * c);
  return 0;
}
