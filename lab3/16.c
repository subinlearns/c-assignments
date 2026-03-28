#include <stdio.h>

int main() {
  int n, num, count;
  printf("Enter any number: ");
  scanf("%d", &num);

  n = num;
  while (n != 0) {
    count++;
    n /= 10;
  }
  printf("%d has %d digits\n", num, count);
  return 0;
}
