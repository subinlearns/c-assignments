#include <stdio.h>

int main() {
  int num, choice;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Check odd/even or positive/negative?(1/2): ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");
      break;
    case 2:
      (num > 0) ? printf("Positve\n") : printf("Negative\n");
      break;
    default:
      printf("Invalid Choice\n");
  }
  return 0;
}
