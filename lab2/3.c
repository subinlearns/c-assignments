#include <stdio.h>

int main() {

  int cp, sp;
  printf("Enter cp and sp: ");
  scanf("%d %d", &cp, &sp);

  if (sp > cp)
    printf("Profit\n");
  else
   printf("Loss\n");

  return 0;
}
