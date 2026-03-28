#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 2, 5, 2, 7, 8, 2, 10};
  int key, count = 0, found = 0;

  printf("Enter a key to search: ");
  scanf("%d", &key);

  for (int i = 0; i < 10; i++) {
    if (arr[i] == key) {
      if (found == 0) {
        printf("Key found at indices: ");
      }
      printf("%d ", i);
      found = 1;
      count++;
    }
  }
  if (found == 1) {
    printf("\nFrequency of %d = %d\n", key, count);
  } else {
    printf("Key is not found\n");
  }
  return 0;
}
