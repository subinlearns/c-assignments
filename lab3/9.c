#include <stdio.h>
#include <math.h>

int main() {
  int n, num, sum = 0, count = 0;
  printf("Enter any number: ");
  scanf("%d", &num);

  n = num;
  do {
    count++;
    n /= 10;
  } while (n != 0);

  n = num;
  do {
    sum += pow((n % 10), count);
    n /= 10;
  } while (n != 0);

  if (sum == num)
    printf("%d is armstrong\n", num);
  else
   printf("%d is not armstrong\n", num);

  return 0;
}
