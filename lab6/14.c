// Write a program to input a number and check if it is palindrome or not using function
#include <stdio.h>

void checkPalindrome(int n) {
  int revNum = 0, lastDig;
  int original = n;
  while (n != 0) {
    lastDig = n % 10;
    revNum = lastDig + revNum * 10;
    n /= 10;
  }
  if (revNum == original)
    printf("palindrome\n");
  else
   printf("not palindrome\n");
}

int main() {
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  checkPalindrome(n);
  return 0;
}
