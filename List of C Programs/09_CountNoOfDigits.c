// Author: Manish Kumar Barman

#include <stdio.h>

int main() {
  int n, digit, count = 0, sum = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n != 0) {
    digit = n % 10;
    sum += digit;
    n /= 10;
    count++;
    printf("n = %d\n", n);
  }
  printf("Number of digits: %d\n", count);
  printf("Sum of digits: %d", sum);
  return 0;
}