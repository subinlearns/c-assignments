#include <stdio.h>

int main() {
  int a, b, c, d, grt;
  printf("Enter 4 numbers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if (a > b && a > c && a > d)
    grt = a;
  else if (b > a && b > c && b > d)
    grt = b;
  else if (c > a && c > b && c > d)
    grt = c;
  else
   grt = d;

  printf("%d is greatest\n", grt);

  return 0;
}
