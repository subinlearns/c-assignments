#include <stdio.h>

int main() {
  int n, num, lastDigit;
  int isRiley = 1;
  printf("Enter any number: ");
  scanf("%d", &num);
  n = num;
  while (num != 0) {
    lastDigit = num % 10;
    if (lastDigit % 2 != 0) {
      isRiley = 0;
      break;
    }
    num /= 10;
  }

  if (isRiley) {
    printf("%d is riley number\n", n);
  } else {
    printf("%d is not a riley number\n", n);
  }
  return 0;
}
