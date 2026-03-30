// Create a function void check (int n) that checks whether given number in positive, negative or neutral
#include <stdio.h>

void check(int n) {
  if (n < 0)
    printf("Negative\n");
  else if (n > 0)
    printf("Positive\n");
  else
   printf("Neutral\n");
}

int main() {

  int num;
  printf("Enter any number: ");
  scanf("%d", &num);
  check(num);

  return 0;
}
