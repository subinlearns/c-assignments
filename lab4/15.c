#include <stdio.h>

int main() {
  int arr[3][4], sum = 0;
  printf("Enter integers for 3 rows and 4 columns table(3X4):");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &arr[i][j]);
      if (arr[i][j] % 2 == 0)
        sum += arr[i][j];
    }
  }

  printf("Sum of even numbers in table = %d\n", sum);

  return 0;
}
