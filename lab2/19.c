#include <stdio.h>

int main() {
  float r;
  char choice;
  printf("Enter radius of circle: ");
  scanf("%f", &r);
  printf("Calculate Area or Circumference (a/c)?\n");
  scanf(" %c", &choice);

  switch (choice) {
    case 'a':
    case 'A':
      printf("Area = %.2f\n", 3.14 * r * r);
      break;
    case 'c':
    case 'C':
      printf("Circumference= %.2f\n",2 * 3.14 * r);
      break;
    default:
      printf("Invalid Choice\n");
  }

  return 0;
}
