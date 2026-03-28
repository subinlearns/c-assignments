#include <stdio.h>
#include <math.h>

int main() {
  float num, sqroot;
  printf("Enter a number: ");
  scanf("%f", &num);
  sqroot = sqrt(num);

  printf("Square root of %.2f = %.2f\n", num, sqroot);

  return 0;
}
