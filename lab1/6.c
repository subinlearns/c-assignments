#include <stdio.h>

int main() {
  int len, br, area;
  printf("Enter length & breadth of rectangle: ");
  scanf("%d %d", &len, &br);
  area = len * br;
  printf("Area = %d\n", area);
  return 0;
}
