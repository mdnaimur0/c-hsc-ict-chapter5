#include <stdio.h>

void main() {
  float f, c;
  printf("In farenheit: ");
  scanf("%f", &f);
  c = (f - 32) / 9 * 5;
  printf("In centigrade: %f", c);
}