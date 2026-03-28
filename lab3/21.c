#include <stdio.h>

int main() {
  printf("Multiplication table from 1 to 10\n");
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      printf("%d X %d = %d\n", i, j, i * j);
    }
    printf("--------------\n");
  }
  return 0;
}
