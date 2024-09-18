// Author: Manish Kumar Barman

#include <stdio.h>

int main()
{
  int n, result;
  printf("Enter value of n: ");
  scanf("%d", &n);
  result = (n * (n + 1)) / 2;
  printf("Sum of the numbers from 1 to %d is: %d", n, result);

  return 0;
}