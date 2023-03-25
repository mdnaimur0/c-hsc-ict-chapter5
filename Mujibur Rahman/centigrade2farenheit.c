#include <stdio.h>

int main() {
  float c, f;
  printf("Enter the temperature in Centigrade unit: ");
  scanf("%f", &c);
  f = (9 * c) / 5 + 32;
  printf("The temperature in Farenheit unit is: %f", f);
  return 0;
}