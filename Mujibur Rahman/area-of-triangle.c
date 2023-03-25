#include <stdio.h>

int main() {
  float b, h, area;
  printf("Enter the base of the triangle: ");
  scanf("%f", &b);
  printf("Enter the height of the triangle: ");
  scanf("%f", &h);
  area = 0.5 * b * h;
  printf("The area of the triangle is: %.2f", area);

  return 0;
}