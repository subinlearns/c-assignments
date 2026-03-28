#include <stdio.h>

int main() {
  int arr1[2][2] = { 
    6, 7,
    8, 9
  };
  int arr2[2][2] = {
    6, 7,
    8, 9
  };

  int isEqual = 1;
  printf("Checking if arr1 and arr2 are equal\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (arr1[i][j] != arr2[i][j]) {
        isEqual = 0;
        break;
      }
    }
  }

  if (isEqual)
    printf("arr1 and arr2 are equal\n");
  else
   printf("arr1 and arr2 are not equal\n");

  return 0;
}
