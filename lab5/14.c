#include <stdio.h>
#include <ctype.h>

int main() {
  int alpha = 0, vowel = 0, con = 0, digits = 0, spaces = 0, specialChar = 0, length = 0;
  char str[100];

  printf("Enter any string: ");
  fgets(str, sizeof(str), stdin);

  while (str[length] != '\n') {
    char c = str[length];
    if (isalpha(c)) {
      c = tolower(c);
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        vowel++;
      else
       con++;
      alpha++;
    } else if (isdigit(c)) {
      digits++;
    } else if (isspace(c)) {
      spaces++;
    } else {
      specialChar++;
    }
    length++;
  }

  printf("Number of:\n");
  printf("Alphabets = %d\n", alpha);
  printf("Vowels = %d\n", vowel);
  printf("Consonants = %d\n", con);
  printf("Digits = %d\n", digits);
  printf("Spaces = %d\n", spaces);
  printf("Special Characters = %d\n", specialChar);

  return 0;
}
