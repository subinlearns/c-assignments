#include <stdio.h>
#include <string.h>

int main() {
  char strings[20][20], tmp[20];
  int n;

  printf("Enter number of strings: ");
  scanf("%d", &n);
  getchar();

  for (int i = 0; i < n; i++) {
    printf("Enter string %d: ", i + 1);
    fgets(strings[i], sizeof(strings[i]), stdin);
    strings[i][strcspn(strings[i], "\n")] = '\0';
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n - i - 1; j++) {
      if (strcmp(strings[i], strings[j]) > 0) {
        strcpy(tmp, strings[i]);
        strcpy(strings[i], strings[j]);
        strcpy(strings[j], tmp);
      }
    }
  }

  printf("\nStrings in ascending order:\n");
  for (int i = 0; i < n; i++) {
    printf("%s\n", strings[i]);
  }
  return 0;
}
