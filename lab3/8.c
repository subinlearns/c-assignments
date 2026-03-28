#include <stdio.h>

int main() {
  int n, num, sum = 0;
  printf("Enter any number: ");
  scanf("%d", &num);

  n = num;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }

  printf("Sum of each digit of %d = %d\n", num, sum);
  return 0;
}
