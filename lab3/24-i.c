#include <stdio.h>

int main() {
  int n, sum = 0;

  printf("Enter the number of terms (n): ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    sum += 11 * i;
  }

  printf("The sum of the series is: %d\n", sum);
  return 0;
}
