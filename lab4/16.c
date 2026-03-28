#include <stdio.h>

int main() {
  int arr[4][4], sum = 0;
  printf("Enter data for 4X4 matrix:");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &arr[i][j]);
      if (i == j)
        sum += arr[i][j];
    }
  }

  printf("Sum of diagnoal = %d\n", sum);

  return 0;
}
