// Create a function int greater (int, int) that returning that greater number between them.
#include <stdio.h>

int greater(int a, int b) {
  if (a > b)
    return a;
  else
   return b;
}

int main() {
  int a, b, res;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  res = greater(a, b);
  printf("%d is greater\n", res);

  return 0;
}
