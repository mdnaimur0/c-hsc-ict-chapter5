#include <stdio.h>

void main() {
  int a, b, lcm;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  lcm = a > b ? a : b;
  while (lcm % a != 0 || lcm % b != 0) lcm++;
  printf("LCM: %d", lcm);
}