#include <stdio.h>

int main() {
  int id, unit;
  char name[50];
  float bill = 0, sCharge = 0, totalBill;
  printf("Enter your id, name and unit consumed\n");
  scanf("%d %s %d", &id, name, &unit);
  
  if (unit <= 199)
    bill = unit * 1.2;
  else if (unit >= 200 && unit < 400)
    bill = unit * 1.5;
  else if (unit >= 400 && unit < 600)
    bill = unit * 1.8;
  else
   bill = unit * 2;

  if (bill > 400)
    sCharge = bill * 0.15;

  totalBill = bill + sCharge;

  if (totalBill < 100)
    totalBill = 100;

  printf("\n");
  printf("Electricity Bill\n");
  printf("-----------------------\n");
  printf("ID              : %d\n", id);
  printf("Name            : %s\n", name);
  printf("Units consumed  : %d\n", unit);
  printf("Total Bill      : Rs. %.2f\n", totalBill);


  return 0;
}
