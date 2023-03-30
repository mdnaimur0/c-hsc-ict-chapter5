#include <stdio.h>

void main() {
  int n, t1 = 0, t2 = 1, cache, count;
  printf("Enter number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d", t1, t2);
  count = 2;
  while (count < n) {
    cache = t1 + t2;
    t1 = t2;
    t2 = cache;
    printf(", %d", t2);
    count++;
  }
}