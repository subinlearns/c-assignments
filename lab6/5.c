// Write a program to input a number and check if it is even or odd using function.
#include <stdio.h>

void check(int num) {
  if (num % 2 == 0)
    printf("Even\n");
  else
   printf("Odd\n");
}

int main() {

  int n;
  printf("Enter any number: ");
  scanf("%d", &n);

  check(n);

  return 0;
}
