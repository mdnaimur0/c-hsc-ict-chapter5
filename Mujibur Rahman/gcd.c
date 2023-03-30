#include<stdio.h>

void main() {
    int a, b, t;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (b > a) {
        t = a;
        a = b;
        b = t;
    }
    do {
        t = a % b;
        a = b;
        b = t;
    } while(b != 0);

    printf("GCD: %d", a);
}