// Write a program to display the reverse of a number using recursion
#include <stdio.h>

int rev(int n, int reversed) {
  if (n == 0)
    return reversed;
  return rev(n / 10, reversed * 10 + n % 10);
}

int main() {
  int num, res;
  printf("Enter any digit: ");
  scanf("%d", &num);

  res = rev(num, 0);
  printf("Reverse = %d\n", res);

  return 0;
}
