#include <stdio.h>

void main() {
  int a, b;
  printf("First number: ");
  scanf("%d", &a);
  printf("Second number: ");
  scanf("%d", &b);

  if (a > b) {
    printf("%d is lowest.", b);
  } else {
    printf("%d is lowest.", a);
  }
}