#include <stdio.h>

int main() {
  int first, second;
  char operator;

  printf("Enter an operator\n> ");
  scanf("%c", &operator);
  printf("Enter two operands\n> ", &first, &second);
  scanf("%d %d", &first, &second);
  
  switch (operator) {
    case '+':
      printf("%d + %d = %d\n", first, second, first + second);
      break;
    case '-':
      printf("%d - %d = %d\n", first, second, first - second);
      break;
    case '*':
      printf("%d * %d = %d\n", first, second, first * second);
      break;
    case '/':
      printf("%d / %d = %d\n", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct"); }

  return (0); }
