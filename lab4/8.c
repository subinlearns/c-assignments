#include <stdio.h>

int main() {
  int marks[65], lowest = 0, highest = 0;
  printf("Enter marks of 65 students in C programming:\n");
  for (int i = 0; i < 65; i++) {
    scanf("%d", &marks[i]);
  }
  lowest = marks[0];
  highest = marks[0];
  for (int i = 1; i < 65; i++) {
    if (marks[i] < lowest) {
      lowest = marks[i];
    }
    if (marks[i] > highest) {
      highest = marks[i];
    }
  }
  printf("Higest = %d\n", highest);
  printf("Lowest = %d\n", lowest);
  return 0;
}

