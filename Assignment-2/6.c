// 6. Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main(){
    char c;
    printf("Enter character:\n");
    scanf("%c", &c);
    printf("ASCII code of %c is %d .", c, c);
    return 0;
}