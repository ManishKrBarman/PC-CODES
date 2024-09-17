// Author: Manish Kumar Barman

#include <stdio.h>

int main() {

  // WITHOUT THE HELP OF 3RD VERIABLE

  int x, y;
  printf("Enter value of X: ");
  scanf("%d", &x);
  printf("Enter value of Y: ");
  scanf("%d", &y);
  printf("Before Swaping:\n X = %d\n Y = %d\n", x, y);
  x = x + y;
  y = x - y;
  x = x - y;
  printf("After Swaping:\n X = %d\n Y = %d", x, y);

  return 0;
}
