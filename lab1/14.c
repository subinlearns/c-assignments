#include <stdio.h>
#include <math.h>

int main() {
  int n;
  double p, r, t, A;
  printf("Enter principle, rate, number of times and time in a year: ");
  scanf("%lf %lf %d %lf", &p, &r, &n, &t);

  A = p * pow(1 + r/n, n * t);
  printf("Final Amount = %.2lf\n", A);
  return 0;
}
