#include <stdio.h>

int main() {
  int age[20], count = 0;
  for (int i = 0; i < 20; i++) {
    printf("Enter age: ");
    scanf("%d", &age[i]);
  }
  for (int i = 0; i < 20; i++) {
    if (age[i] >= 50 && age[i] <= 60)
      count++;
  }
  printf("Number of persons in the age group 50 to 60 is %d\n", count);
  return 0;
}
