// Write a program to input radius of a circle and calculate its area and circumference using function
#include <stdio.h>

void areaCircum(float a) {
  printf("Area = %.2f\n", 3.14 * a * a);
  printf("Circumference = %.2f\n", 2 * 3.14 * a);
}

int main() {
  float r;
  printf("Enter radius: ");
  scanf("%f", &r);
  areaCircum(r);
  return 0;
}
