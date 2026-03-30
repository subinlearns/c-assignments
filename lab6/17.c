// Write a program to input several numbers in an array and find out the largest and the smallest number
// among them using function
#include <stdio.h>

void findMinMax(int *arr, int n) {
  int min = arr[0], max = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] < min)
      min = arr[i];
    if (arr[i] > max)
      max = arr[i];
  }
  printf("Largest number = %d\n", max);
  printf("Smallest number = %d\n", min);
}

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d numbers: ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  findMinMax(arr, n);

  return 0;
}
