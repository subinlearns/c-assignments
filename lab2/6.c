#include <stdio.h>

int main() {
  float bSalary = 1500;
  float bonus = 200;
  float comm = 0.02;
  float price, gross;
  int quantity;

  printf("Enter price of each computer and the number sold during the month: ");
  scanf("%f %d", &price, &quantity);

  gross = bSalary + (quantity * bonus) + (quantity * price) * comm;
  printf("The gross salary is %.2f\n", gross);

  return 0;
}
