#include <stdio.h>
#include <math.h>

int main() {
  int num, sum = 0;
  printf("Armstrong number between 100 and 500 are:\n");
  for (int i = 100; i <= 500; i++) {
    num = i;
    do {
      sum += pow(num % 10, 3);
      num /= 10;
    }while (num != 0);
    if (sum == i)
      printf("%d ", i);
    sum = 0;
  }
  printf("\n");
  return 0;
}
