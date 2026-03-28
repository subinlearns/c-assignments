#include <stdio.h>

int main() {
  int arr1[2][3], arr2[3][2], arr3[2][2];
  printf("Enter elements for 2X3 array:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("Enter elements for 3X2 array:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%d", &arr2[i][j]);
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      arr3[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        arr3[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }

  printf("Multiplication of arr1 and arr2:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", arr3[i][j]);
    }
    printf("\n");
  }

  return 0;
}
