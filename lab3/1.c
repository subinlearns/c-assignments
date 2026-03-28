#include <stdio.h>

int main() {
  int i;
  printf("For Loop\n");
  for (i = 201; i <= 300; i++)
    printf("%d ", i);
  printf("\n");

  printf("While Loop\n");
  i = 201;
  while (i <= 300) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  printf("Do-While Loop\n");
  i = 201;
  do {
    printf("%d ", i);
    i++;
  }while (i <= 300);
  printf("\n");
  return 0;
}
