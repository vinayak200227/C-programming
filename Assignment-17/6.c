// 6. Write a program to reverse a string.

#include<stdio.h>

int main()
{
    char name[] = "Vinayak";
    int length = 0,i;
    
    for(i=0;name[i] !='\0';i++)
    {
        length++;
    }

    printf("Length of string is %d\n",length);

    for(i = length;i>=0;i--)
    {
        printf("%c",name[i]);
    }
    return 0;
}