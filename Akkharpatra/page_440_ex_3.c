#include <stdio.h>

int main(){
    char name[20];
    printf("Enter your name: ");
    scanf("%[^\n]", &name);
    printf("Your name is %s", name);
    return 0;
}