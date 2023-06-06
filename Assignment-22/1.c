// 1. Define a function to input variable length string and store it in an array without memory wastage.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *s;
    int length;

    printf("Enter length of your name\n");
    scanf("%d",&length);

    s = (char*)malloc(length+1); // 1 added for last NULL character
    
    printf("Enter name\n");
    scanf("%s",s);
    printf("%s",s);
    free(s);
}