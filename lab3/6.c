#include <stdio.h>

int main() {
  int num, fact = 1;
  printf("Enter any number: ");
  scanf("%d", &num);

  if (num > 0) {
    for (int i = 1; i <= num; i++)
      fact *= i;
  }

  printf("Factorial of %d = %d\n", num, fact);

  return 0;
}
