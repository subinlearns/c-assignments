#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100], tmp[100];

  printf("Enter string in str1: ");
  fgets(str1, sizeof(str1), stdin);

  printf("Enter string in str2: ");
  fgets(str2, sizeof(str2), stdin);

  str1[strcspn(str1, "\n")] = '\0';
  str2[strcspn(str2, "\n")] = '\0';

  strcpy(tmp, str1);
  strcpy(str1, str2);
  strcpy(str2, tmp);

  printf("After swapping:\n");
  printf("str1 = %s\n", str1);
  printf("str2 = %s\n", str2);
  return 0;
}
