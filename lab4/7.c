#include <stdio.h>

int main() {
  int youngest = 0, oldest = 0, n;
  printf("Enter number of persons: ");
  scanf("%d", &n);

  int age[n];
  printf("Enter age of %d persons\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &age[i]);
  }
  youngest = age[0];
  oldest = age[0];
  for (int i = 1; i < n; i++) {
    if (age[i] < youngest) {
      youngest = age[i];
    }
    if (age[i] > oldest) {
      oldest = age[i];
    }
  }
  printf("Oldest = %d\n", oldest);
  printf("Youngest = %d\n", youngest);
  return 0;
}

