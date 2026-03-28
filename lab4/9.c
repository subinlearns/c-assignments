#include <stdio.h>

int main() {
  int n, count = 0;
  printf("Enter no of employees: ");
  scanf("%d", &n);

  int salary[n];
  printf("Enter salary of %d employees:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &salary[i]);
  }
  for (int i = 0; i < n; i++) {
    if (salary[i] > 20000)
      count++;
  }
  printf("No. of employees with salary >20000 = %d\n", count);
  return 0;
}

