#include <stdio.h>

int main() {
  int arr[3][3], sum = 0;
  printf("Enter integers for 3X3 array:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &arr[i][j]);
      sum += arr[i][j];
    }
  }
  printf("Sum = %d\n", sum);
  
  return 0;
}
