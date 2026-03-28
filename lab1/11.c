#include <stdio.h>

int main() {
  int seconds, hour, remSec, min, sec;
  printf("Enter time in seconds: ");
  scanf("%d", &seconds);
  hour = seconds / 3600;
  remSec = seconds % 3600;
  min = remSec / 60;
  sec = remSec %60;
  printf("%d seconds = %02d:%02d:%02d\n", seconds, hour, min, sec);

  return 0;
}
