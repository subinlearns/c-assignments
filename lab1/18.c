#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c;

  printf("Enter base a and power b: ");
  scanf("%f %f", &a, &b);

  c = pow(a, b);

  printf("%.2f ^ %.2f = %.2f\n", a, b, c);

  return 0;
}
