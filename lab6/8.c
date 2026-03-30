// Write function which accepts one integer as argument and returns factorial number one less than that argument
#include <stdio.h>

int factLessBy1 (int num) {
  int f = 1;
  if (num == 0 || num == 1)
    return 1;
  for (int i = 1; i < num; i++)
    f *= i;
  return f;
}

int main() {
  int n, result;
  printf("Enter any number: ");
  scanf("%d", &n);

  result = factLessBy1(n);
  printf("Factorial of %d less than 1 = %d\n", n, result);
  return 0;
}
