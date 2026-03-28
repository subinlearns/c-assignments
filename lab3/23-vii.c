#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++) {
      // Print leading spaces
      for (int k = 5 - i; k >= 1; k--)
          printf("  ");
      
      // Print numbers from 1 to (2*i-1) in each row
      for (int j = 1; j <= 2*i - 1; j++) {
          printf("%d ", j);
      }
      printf("\n");
  }
  return 0;
}
