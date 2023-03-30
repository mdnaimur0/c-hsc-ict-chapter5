#include <stdio.h>

void main() {
  int i, n, status = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 2; i <= n / 2; i++)
    if (n % i == 0) {
      status = 0;
    }
  if (status == 1)
    printf("Prime");
  else
    printf("Not prime");
}