#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    int length;
    printf("Enter a string: ");
    gets(str1);
    length = strlen(str1);
    printf("Length of the string is %d", length);
    return 0;
}