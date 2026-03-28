#include <stdio.h>

int main() {
  int count = 0;
  char string[100];
  printf("Enter any sentence: ");
  fgets(string, sizeof(string), stdin);

  char *p = string;
  while (*p != '\n') {
    if (*p != 'a' && *p != 'e' && *p != 'i' && *p != 'o' && *p != 'u' && *p != ' ')
      count++;
    p++;
  }
  printf("No. of consonants = %d\n", count);
  return 0;
}
