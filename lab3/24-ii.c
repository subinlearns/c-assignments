#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double x, sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    for (i = 1; i <= n; i++) {
        sum += (double)i / pow(x, i);  // i / x^i
    }

    printf("The sum of the series is: %.6lf\n", sum);

    return 0;
}
