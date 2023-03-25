#include <stdio.h>

int main() {
  char n;
  printf("Enter any upper case character: ");
  n = getchar();
  printf("You entered: ");
  putchar(n + 32);
  return 0;
}