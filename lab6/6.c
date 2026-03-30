// Write a program that calls a function called getArea(). This function is responsible for reading the length
// & breadth & print area of rectangle
#include <stdio.h>

void getArea() {
  int l, b;
  printf("Enter length and breadth of rectangle: ");
  scanf("%d %d", &l, &b);
  printf("Area of rectangle = %d\n", l * b);
}

int main() {

  getArea();

  return 0;
}
