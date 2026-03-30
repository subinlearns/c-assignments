// Write a function that converts uppercase string to lowercase string
#include <stdio.h>
#include <ctype.h>

void convert(char *str) {
  char *p = str;
  while (*p != '\n') {
    if (isalpha(*p))
      *p = tolower(*p);
    p++;
  }
}

int main() {
  char str[100];
  printf("Enter any string: ");
  fgets(str, sizeof(str), stdin);
  convert(str);
  printf("Lower = %s", str);

  return 0;
}
