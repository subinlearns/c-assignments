#include <stdio.h>

int main() {
  int num1, num2, result;
  char op;
  printf("Enter any two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("Enter the operation (+, -, *, /): ");
  scanf(" %c", &op);

  switch (op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Enter correct operation\n");
      return -1;
  }
  printf("%d %c %d = %d\n", num1, op, num2, result);

  return 0;
}
