#include <stdio.h>

int main() {
  int myarray[15], sum = 0;
  float avg;
  printf("Enter 15 elements in array:\n");
  for (int i = 0; i < 15; i++) {
    scanf("%d", &myarray[i]);
    sum += myarray[i];
  }
  avg = (float)sum / 15;

  printf("\n\nThe elements in array are:\n");
  for (int i = 0; i < 15; i++) {
    printf("%d\t", myarray[i]);
  }
  printf("\nSum = %d\n", sum);
  printf("Avg = %.2f\n", avg);

  return 0;
}
