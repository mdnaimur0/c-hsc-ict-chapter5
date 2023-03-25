#include <ctype.h>
#include <stdio.h>

void main() {
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  printf("Lower case: %c", tolower(ch));
}