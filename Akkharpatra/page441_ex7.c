#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string in upper case: ");
    gets(str);
    strlwr(str);
    printf("Your string in lower case is: ");
    puts(str);
    return 0;
}