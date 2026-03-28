#include <stdio.h>

int main() {
  int count = 0;
  char string[100];
  printf("Enter any sentence: ");
  fgets(string, sizeof(string), stdin);

  char *p = string;
  while (*p != '\n') {
    if (*p == ',')
      count++;
    p++;
  }
  printf("No. of commas = %d\n", count);
  return 0;
}
