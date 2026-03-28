#include <stdio.h>

int main() {
for (int i = 1; i <= 4; i++) {
    // Print leading spaces
    for (int k = 4 - i; k >= 1; k--)
        printf("  ");
    
    // Print numbers in decreasing order from i down to 1
    for (int j = i; j >= 1; j--) {
        printf("%d ", j);
    }

    // Print numbers in increasing order from 2 up to i
    for (int j = 2; j <= i; j++) {
        printf("%d ", j);
    }
    
    printf("\n");
}
  return 0;
}
