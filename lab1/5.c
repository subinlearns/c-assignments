#include <stdio.h>

#define PI 3.1415

int main() {

  float rad, area, circum;

  printf("Enter the radius: ");
  scanf("%f", &rad);

  area = (PI * rad * rad);
  circum = (2 * PI * rad);

  printf("Area = %.2f\n"
         "Circumference = %.2f\n", area, circum);

  return 0;
}
