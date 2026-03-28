#include <stdio.h>

int main() {
  float npr, usd;
  printf("Enter money in Nepali Rs: ");
  scanf("%f", &npr);
  usd = npr/115;
  printf("Rs. %.2f = $ %.2f\n", npr, usd);
  return 0;
}
