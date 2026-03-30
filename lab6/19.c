// Write a function to copy content of one array to another array. You can consider any type of arrays
#include <stdio.h>

void copyArr(int src[], int dst[], int size) {
  for (int i = 0; i < size; i++)
    dst[i] = src[i];
}

int main() {
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];

    copyArr(src, dest, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", dest[i]);
    }

  return 0;
}
