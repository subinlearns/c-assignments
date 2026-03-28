#include <stdio.h>
#include <math.h>  

int fact(int num) {
  if (num == 0 || num == 1)
    return 1;

  int fact = 1;
  for (int i = 2; i <= num; i++) {
    fact *= i;
  }
  return fact;
}

int main() {
    int n, i;
    double x, sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    for (i = 1; i <= n; i++) {
        sum += pow(x, i) / fact(i);
    }

    printf("The sum of the series is: %.2lf\n", sum);

    return 0;
}
