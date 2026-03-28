#include <stdio.h>
#include <math.h>

int main() {

  float a, b, c, d;
  float x1, x2;

  printf("ax^2 + bx^2 + c = 0\n");
  scanf("%f %f %f", &a, &b, &c);

  if (a == 0) {
    printf("Not a quadratic equation\n");
    return -1;
  }

  d = b * b - 4 * a * c;
  if (d < 0) {
    printf("Roots are imaginary\n");
    return -1;
  }
  x1 = (-b + sqrt(d)) / (2 * a);
  x2 = (-b - sqrt(d)) / (2 * a);

  printf("The required solutions are %.2f and %.2f\n", x1, x2);

  return 0;
}
