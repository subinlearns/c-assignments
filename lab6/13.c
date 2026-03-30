// Write a program to input a number and display its reverse using function.
#include <stdio.h>

int rev(int n) {
  int revNum = 0, lastDig;
  while (n != 0) {
    lastDig = n % 10;
    revNum = lastDig + revNum * 10;
    n /= 10;
  }
  return revNum;
}

int main() {
  int num, res;
  printf("Enter any digit: ");
  scanf("%d", &num);

  res = rev(num);
  printf("Reverse of %d = %d\n", num, res);
  return 0;
}
