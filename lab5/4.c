#include <stdio.h>

int main() {
  char str[100];
  int length = 0;
  printf("Enter three text: ");
  fgets(str, sizeof(str), stdin);

  while(str[length] != '\0') {
    if (str[length] == ' ')
      printf("\n");
    else
      printf("%c", str[length]);
    length++;
  }
  return 0;
}
