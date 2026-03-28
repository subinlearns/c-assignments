#include <stdio.h>

int main() {
  int n;
  float num, avg, sum = 0;
  printf("Enter number of input: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Enter number: ");
    scanf("%f", &num);
    sum += num;
  }

  avg = sum / n;
  printf("The sum is %.2f\n"
         "The average is %.2f\n", sum, avg);
  return 0;
}
