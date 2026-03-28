#include <stdio.h>

int main() {
  int arr[2][2];
  printf("Enter integers for 2X2 array:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("\nGiven 2X2 array:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  printf("\nTranpose of 2X2 array:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d\t", arr[j][i]);
    }
    printf("\n");
  }
  
  return 0;
}
