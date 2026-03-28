#include <stdio.h>

int main() {
  int n, num, lastDigit, revNum = 0;
  printf("Enter any number: ");
  scanf("%d", &num);

  n = num;
  do {
    lastDigit = n % 10;
    revNum = revNum * 10 + lastDigit; 
    n /= 10;
 } while (n != 0);

  if (revNum == num)
    printf("%d is palindrome\n", num);
  else
   printf("%d is not palindrome\n", num);

  return 0;
}
