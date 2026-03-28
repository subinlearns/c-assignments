#include <stdio.h>

int main() {
  printf("Leap year between 1900 and 2000 are:\n");
  for (int i = 1900; i <= 2000; i++) {
    if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
