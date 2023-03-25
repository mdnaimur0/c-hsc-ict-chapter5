#include <ctype.h>
#include <stdio.h>

void main() {
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  printf("Upper case: %c", toupper(ch));
}