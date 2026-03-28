#include <stdio.h>

int main() {
  int num, rev = 0, digit;
  printf("Enter any number: ");
  scanf("%d", &num);

  while (num != 0) {
    digit = num % 10;
    rev = rev * 10 + digit;
    num /= 10;
  }

  do {
    digit = rev % 10;
    printf("-> %d\n", digit);
    rev /= 10;
  }while (rev != 0);

  return 0;
}
