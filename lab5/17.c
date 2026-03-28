#include <stdio.h>
#include <string.h>

int main() {
  char *strings[] = {"jump", "walk", "green", "talk", "move", "look", "feel"};
  char *tmp;

  for (int i = 0; i < 7; i++) {
    for (int j = i + 1; j < 7; j++) {
      if (strcmp(strings[i], strings[j]) > 0) {
        tmp = strings[i];
        strings[i] = strings[j];
        strings[j] = tmp;
      }
    }
  }
  printf("Sorted Array:\n");
  for (int i = 0; i < 7; i++) {
    printf("%s ", strings[i]);
  }
  printf("\n");
  return 0;
}
