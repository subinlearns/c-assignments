#include <stdio.h>

int main() {
  char string[100];
  int length = 0;
  printf("Enter any string: ");
  fgets(string, sizeof(string), stdin);

  while (string[length] != '\n') {
    length++;
  }
  printf("Length = %d\n", length);
  return 0;
}
