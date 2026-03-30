// Write a program to input a number and calculate its square using function
#include <stdio.h>

void square(int a) {
  printf("%d^2 = %d\n", a, a * a);
}

int main() {

  int a;
  printf("Enter any number: ");
  scanf("%d", &a);
  square(a);

  return 0;
}
