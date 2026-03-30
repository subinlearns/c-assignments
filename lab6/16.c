// Write a program to input 10 numbers in an array and arrange them in ascending order using function.
#include <stdio.h>

void sort(int arr[10]) {
  int tmp;
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (arr[i] > arr[j]) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }
}

int main() {
  int arr[10];
  printf("Enter 10 numbers: ");
  for (int i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

  sort(arr);
  for (int i = 0; i < 10; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}
