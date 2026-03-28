#include <stdio.h>

int main() {
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {6, 7, 8, 9, 10};
  int arr3[5];

  printf("The sum of arr1 and arr2 in arr3 is:\n");
  for (int i = 0; i < 5; i++) {
    arr3[i] = arr1[i] + arr2[i];
    printf("%d\t", arr3[i]);
  }
  printf("\n");
  return 0;
}
