#include <stdio.h>
#include <math.h>  // For power function

int main() {
    int n, i;
    double x, sum = 0.0;

    // Input: Number of terms (n) and value of x
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Loop to calculate the sum of the series
    for (i = 1; i <= n; i++) {
        sum += (double)i / pow(x, 2 * i - 1);  // i / x^(2i-1)
    }

    // Output the result
    printf("The sum of the series is: %.6lf\n", sum);

    return 0;
}
