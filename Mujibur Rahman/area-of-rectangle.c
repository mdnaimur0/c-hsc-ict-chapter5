#include <stdio.h>

void main() {
  int l, w, a;
  printf("Length: ");
  scanf("%d", &l);
  printf("Width: ");
  scanf("%d", &w);
  a = l * w;
  printf("Area: %d", a);
}