// Author: Manish Kumar Barman

#include <stdio.h>

int main()
{
  char operator;
  int num1, num2;
  float result;

  printf("Select an operator (+, -, *, /): ");
  scanf(" %c", &operator);
  printf("Enter 1st number: ");
  scanf("%d", &num1);
  printf("Enter 2nd number: ");
  scanf("%d", &num2);

  switch (operator)
  {
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
    if (num2 != 0)
    {
      result = num1 / num2;
    }
    else
    {
      printf("Division by zero not possible.");
      return 1;
    }
    break;
  default:
    printf("Invalid operator.");
    return 1;
  }
  printf("Result: %f", result);

  return 0;
}