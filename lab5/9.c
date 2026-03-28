#include <stdio.h>
#include <ctype.h>

int main() {
  char str[20], c;
  int length = 0;
  printf("Enter any string: ");
  fgets(str, sizeof(str), stdin);

  while (str[length] != '\n') {
    c = str[length];
    if (isalpha(c)) {
      if (islower(c))
        printf("%c", toupper(c));
      else
       printf("%c", tolower(c));
    } else {
      printf("%c", c);
    }
    length++;
  }
  printf("\n");
  
  return 0;
}
