#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  int op;
  
  printf("Enter first string: ");
  fgets(str1, sizeof(str1), stdin);
  printf("Enter second string: ");
  fgets(str2, sizeof(str2), stdin);

  printf("Select operation:\n");
  printf("1. Larger of the two\n");
  printf("2. Reverse\n");
  scanf("%d", &op);

  switch (op) {
    case 1:
      if (strlen(str1) > strlen(str2))
        printf("first string is larger\n");
      else if (strlen(str1) < strlen(str2))
        printf("second string is larger\n");
      else
       printf("Both string are equal\n");
      break;
    case 2:
      printf("Both strings in reverse:\n");

      for (int i = strlen(str1) - 2; i >= 0; i--) {
        printf("%c", str1[i]);
      }
      printf("\n");
      for (int i = strlen(str2) - 2; i >= 0; i--) {
        printf("%c", str2[i]);
      }
      printf("\n");
      break;
    default:
      printf("Operation not supported\n");
  }

  return 0;
}
