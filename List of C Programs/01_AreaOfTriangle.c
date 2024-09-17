// Author: Manish Kumar Barman

#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  float s, area;
  printf("Enter value of 1st side: ");
  scanf("%d", &a);
  printf("Enter value of 2nd side: ");
  scanf("%d", &b);
  printf("Enter value of 3rd side: ");
  scanf("%d", &c);
  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("Area of the triangle of sides %d, %d & %d is: %f", a, b, c, area);

  return 0;
}


