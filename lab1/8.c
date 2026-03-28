#include <stdio.h>

int main() {
  float num;
  printf("Enter any number: ");
  scanf("%f", &num);
  printf("Square of %.2f = %.2f\n", num, num * num);
  return 0;
}
