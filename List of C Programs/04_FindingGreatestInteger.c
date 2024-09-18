// Author: Manish Kumar Barman

#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter value of 1st Number: ");
  scanf("%d", &a);
  printf("Enter value of 2nd Number: ");
  scanf("%d", &b);
  printf("Enter value of 3rd Number: ");
  scanf("%d", &c);
  if (a > b)
  {
    if (a > c)
    {
      printf("%d is the greatest number among %d, %d and %d", a, a, b, c);
    }
    else
    {
      printf("%d is the greatest number among %d, %d and %d", c, a, b, c);
    }
  }
  else
  {
    if (b > c)
    {
      printf("%d is the greatest number among %d, %d and %d", b, a, b, c);
    }
    else
    {
      printf("%d is the greatest number among %d, %d and %d", c, a, b, c);
    }
  }

  return 0;
}