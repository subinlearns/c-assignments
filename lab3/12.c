#include <stdio.h>

int main() {
  int n, cubed;
  printf("Enter n: ");
  scanf("%d", &n);

  printf("Cube of numbers from 1 to %d which is divisible by 3:\n", n);
  for (int i = 1; i <= n; i++) {
    cubed = i * i * i;
    if (cubed % 3 == 0)
      printf("%d ", cubed);
  }
  printf("\n");
  return 0;
}
