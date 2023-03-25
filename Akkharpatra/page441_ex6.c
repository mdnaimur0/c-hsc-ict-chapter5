#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string in lower case: ");
    gets(str);
    strupr(str);
    printf("Your upper case string is: %s", str);
    return 0;
}