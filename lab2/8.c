#include <stdio.h>

int main() {
  float initPrice, salPrice, yos, dep;
  printf("Enter initial price, salvage price and the year of service: ");
  scanf("%f %f %f", &initPrice, &salPrice, &yos);
  dep = (initPrice - salPrice) / yos;
  printf("The item depreciated by %.2f\n", dep);
  return 0;
}
