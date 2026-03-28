#include <stdio.h>

int main() {
  int arr[] = {11, 5, 22, 67, 96, 4, 69};

  printf("Even elements of array:\n");
  for (int i = 0; i < 5; i++) {
    if (arr[i] % 2 == 0) {
      printf("%d ", arr[i]);
    }
  }
  printf("\nOdd elements of array:\n");
  for (int i = 0; i < 5; i++) {
    if (arr[i] % 2 != 0) {
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
  return 0;
}
