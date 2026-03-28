#include <stdio.h>

int main() {
  int len;
  printf("Enter length in km: ");
  scanf("%d", &len);
  printf("%d km = %d m\n", len, len * 1000);
  return 0;
}
