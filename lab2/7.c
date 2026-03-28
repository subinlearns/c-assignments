#include <stdio.h>
#include <math.h>

int main() {
  float dRate, sCost, hCost, eoq, tbo;
  printf("Enter demand rate, setup cost and holding cost: ");
  scanf("%f %f %f", &dRate, &sCost, &hCost);
  eoq = sqrt((2 * dRate * sCost) / hCost);
  tbo = sqrt((2 * sCost) / (dRate * hCost));
  printf("EOQ = %.2f, TBO = %.2f\n", eoq, tbo);

  return 0;
}
