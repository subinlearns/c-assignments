#include <stdio.h>

int main() {
  //hey cpp, greetings
  int days, months, remDays;

  printf("Enter number of days: ");
  scanf("%d", &days);

  months = days / 30;
  remDays = days % 30;

  printf("%d days = %d months and %d days\n", days, months, remDays);
  return 0;
}
