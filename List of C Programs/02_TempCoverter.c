// Author: Manish Kumar Barman

#include <stdio.h>

int main()
{

  // FAHRENHEIT TO CELSIUS

  float F, C;
  printf("Enter temperatuer in Fahrenheit: ");
  scanf("%f", &F);
  C = (F - 32) * 5 / 9;
  printf("%f deg Fahrenheit into Celsius is: %f", F, C);

  // CELSIUS TO FAHRENHEIT

  printf("Enter temperatuer in Celsius: ");
  scanf("%f", &C);
  F = ((C * 9) / 5) + 32;
  printf("%f deg Celsius into Fahrenheit is: %f", C, F);

  return 0;
}
