// Write function which accepts two integers as argument and returns average of even numbers between them.
#include <stdio.h>

float evenAvg(int a, int b) {
  int sum = 0, count = 0;
  int low = a < b ? a : b;
  int high = a > b ? a : b;

  for (int i = low + 1; i < high; i++) {
    if (i % 2 == 0) {
      sum += i, count++;
    }
  }

  return count ? (float)sum / count : 0;
}

int main() {
  int a, b;
  float res;
  printf("Enter any two numbers: ");
  scanf("%d %d", &a, &b);
  
  res = evenAvg(a, b);
  printf("The average of even numbers between %d and %d = %.2f\n", a, b, res);

  return 0;
}
