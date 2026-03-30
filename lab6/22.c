// Write a program to read any two integers number n1 and n2 and develop a function that takes these two
// numbers as arguments and print all the even integer numbers from n1 and n2
#include <stdio.h>

void printEven(int a, int b) {
  int high = a > b ? a : b;
  int low = a < b ? a : b;

  for (int i = low + 1; i < high; i++) {
    if (i % 2 == 0)
      printf("%d ", i);
  }
  printf("\n");
}

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  printEven(a, b);
  return 0;
}
