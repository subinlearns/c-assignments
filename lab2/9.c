#include <stdio.h>

int main() {
  int a, b, c, grt;
  printf("Enter any three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  grt = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
  printf("%d is greatest\n", grt);

  return 0;
}
