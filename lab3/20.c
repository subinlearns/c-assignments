#include <stdio.h>

int main() {
  int n, a, b, c;
  printf("Enter n: ");
  scanf("%d", &n);

  a = 0;
  b = 1;
  printf("%d %d ", a, b);
  for (int i = 0; i < n - 2; i++) {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }
  printf("\n");
  return 0;
}
