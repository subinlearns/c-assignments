#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  char name[100], lower[100], upper[100];
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);

  for (int i = 0; i < strlen(name) - 1; i++) {
    lower[i] = tolower(name[i]);
    upper[i] = toupper(name[i]);
  }

  printf("Uppercase: %s\n", upper);
  printf("Lowercase: %s\n", lower);
  printf("Reverse: ");
  for (int i = strlen(name) - 2; i >= 0; i--) {
    printf("%c", name[i]);
  }
  printf("\n");

  return 0;
}
