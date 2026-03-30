// Write function which accepts two integers as arguments and displays sum of those numbers.

#include <stdio.h>

void sum(int a, int b){
  printf("%d + %d = %d\n", a, b, a + b);
}

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  sum(a, b);

  return 0;
}
