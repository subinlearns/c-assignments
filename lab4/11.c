#include <stdio.h>

int main() {
  int arr[10], tmp;
  printf("Enter 10 integers:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  printf("\nSorted array in ascending order:\n");
  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (arr[i] > arr[j]) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
