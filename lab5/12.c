#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Enter any string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';

  if (strcmp(str, "hello") == 0) {
    printf("Hello! How are you?\n");
  } else if (strlen(str) > 5) {
    printf("This string has  more than 5 characters.\n");
  } else {
    printf("This is not what i wanted\n");
  }
  return 0;
}
