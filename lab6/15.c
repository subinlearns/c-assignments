// Write a program to input a number and check if it is prime or not.
#include <stdio.h>

void checkPrime(int num) {
  int isPrime = 1;
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      isPrime = 0;
      break;
    }
  }
  if (isPrime)
    printf("It is prime\n");
  else
   printf("It is not prime\n");
}

int main() {
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  checkPrime(n);
  return 0;
}
