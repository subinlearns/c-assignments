#include <stdio.h>

int main() {
  float f, c;
  printf("Enter temperature in farenheit: ");
  scanf("%f", &f);
  c = (f - 32) / 1.8;
  printf("%.2f F = %.2f C\n", f, c);
  return 0;
}
