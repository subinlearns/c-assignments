#include <stdio.h>
#include <string.h>

int main() {
  char string[100];
  int isPalindrome = 1;
  printf("Enter any string: ");
  fgets(string, sizeof(string), stdin);

  if (string[strlen(string) - 1] == '\n')
    string[strlen(string) - 1] = '\0';

  int length = strlen(string);

  for (int i = 0; i < length - i - 1; i++) {
    if (string[i] != string[length - i - 1]) {
      isPalindrome = 0;
      break;
    }
  }

  if (isPalindrome)
    printf("%s is palindrome\n", string);
  else
    printf("%s is not palindrome\n", string);

  return 0;
}
