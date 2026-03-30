// WAP to print “Hello” „n‟ times using recursive function.
#include <stdio.h>

void print(int n) {
  if (n == 0)
    return;
  printf("Hello\n");
  return print(n - 1);
}

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  print(n);
  return 0;
}
