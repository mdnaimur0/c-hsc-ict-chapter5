#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    strrev(str);
    printf("Your string in reverse order is: %s", str);
    return 0;
}