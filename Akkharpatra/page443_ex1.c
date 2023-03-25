#include <stdio.h>

int main(){
    int a;
    printf("Decimal number: ");
    scanf("%d", &a);
    printf("\nOctal number: %o", a);
    printf("\nHexadecimal number: %x", a);
    return 0;
}