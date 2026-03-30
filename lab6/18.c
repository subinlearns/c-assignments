// Write a program to input age of 25 persons and count the number of persons with age more than 50 using
// function.
#include <stdio.h>

void check(int *age) {
  int count = 0;
  for (int i = 0; i < 25; i++) {
    if (age[i] > 25)
      count++;
  }
  printf("Persons with age greater than 25 = %d\n", count);
}


int main() {
  int age[25];
  printf("Enter age of 25 persons: ");
  for (int i = 0; i < 25; i++)
    scanf("%d", &age[i]);
  
  check(age);
  return 0;
}

