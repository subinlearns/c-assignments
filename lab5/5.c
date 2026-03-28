#include <stdio.h>

int main() {
  int count = 0;
  char string[100];
  printf("Enter any sentence: ");
  fgets(string, sizeof(string), stdin);

  char *p = string;
  while (*p != '\0') {
    if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
      count++;
    p++;
  }
  printf("No. of vowels = %d\n", count);
  return 0;
}
