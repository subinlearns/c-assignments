#include <stdio.h>
#include <ctype.h>

int main() {
  char c;
  int op;
  printf("Do you want to check:\n");
  printf("1. Vowel/Consonant\n");
  printf("2. Digit/Ascii value\n");
  scanf("%d", &op);
  getchar();

  printf("Enter any character: ");
  scanf("%c", &c);
  switch (op) {
    case 1:
      c = tolower(c);
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("it is vowel\n");
      else
       printf("it is consonant\n");
      break;
    case 2:
      if (isdigit(c))
        printf("it is a digit\n");
      else
        printf("ASCII of %c = %d\n", c, c);

      break;
    default:
      printf("Operation not supported!\n");
  }
  return 0;
}
