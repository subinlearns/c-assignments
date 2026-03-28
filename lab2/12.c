#include <stdio.h>

int main() {
  int num;
  printf("Enter any number: ");
  scanf("%d", &num);

  if (num < 0)
    num = -num;

  printf("abs = %d\n", num);

  return 0;
}
