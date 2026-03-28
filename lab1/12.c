#include <stdio.h>

int main() {
  int pYear, pMonth, pDay;
  int bYear, bMonth, bDay;
  int ageY, ageM, ageD;
  printf("Enter present Year, Month, Day: ");
  scanf("%d %d %d", &pYear, &pMonth, &pDay);
  printf("Enter your birth Year, Month, Day: ");
  scanf("%d %d %d", &bYear, &bMonth, &bDay);

  if (pDay < bDay) {
    pDay += 30;
    pMonth--;
  }
  if (pMonth < bMonth) {
    pMonth += 12;
    pYear--;
  }

  ageD = pDay - bDay;
  ageM = pMonth - bMonth;
  ageY = pYear - bYear;

  printf("Age: %d years, %d months, %d days\n", ageY, ageM, ageD);

  return 0;
}
