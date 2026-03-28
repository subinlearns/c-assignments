#include <stdio.h>

int main() {
  int arr1[2][2] = { 
    11, 10,
    3, 4
  };
  int arr2[2][2] = {
    6, 7,
    8, 9
  };
  int sum[2][2];

  printf("Sum of arr1 and arr2:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      sum[i][j] = arr1[i][j] + arr2[i][j];
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
