#include <stdio.h>

int main() {
  int arr[10], min = 0, max = 0;
  printf("Enter 10 numbers: ");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  min = arr[0];
  max = arr[0];
  for (int i = 1; i < 10; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  printf("Maximum = %d\n", max);
  printf("Minimum = %d\n", min);
  return 0;
}
