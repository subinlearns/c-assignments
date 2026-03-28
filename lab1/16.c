#include <stdio.h>

#define PI 3.1415

int main() {
  int rad, ht, area;
  printf("Enter radius and height of cylinder: ");
  scanf("%d %d", &rad, &ht);
  area = (2 * PI * rad * ht) + (2 * PI * rad * rad);
  printf("Area = %d\n", area);
  return 0;
}
