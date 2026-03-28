#include <stdio.h>

int main() {
  int isPrime = 1;
  printf("Prime numbers between 1 to 100:\n");
  for (int i = 2; i <= 100; i++) {
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        isPrime = 0;
        break;
      }
    }
    if (isPrime) {
      printf("%d ", i);
    }
    isPrime = 1;
  }
  printf("\n");
  return 0;
}
