
#include <stdio.h>

int main() {
  int count = 0;
  int age[100];
  printf("Enter age of 100 persons:\n");
  for (int i = 0; i < 100; i++) {
    scanf("%d", &age[i]);
  }
  for (int i = 0; i < 100; i++) {
    if (age[i] >= 16 && age[i] <= 20)
      count++;
  }
  printf("No. of persons with age between 16 to 20 = %d\n", count);
  return 0;
}

