// 1. Write a program to calculate the length of the string.(without using builtin method)

#include <stdio.h>

int main()
{
    char name[] = "Vinayak";
    int length = 0, i;

    for (i = 0; name[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length of string is %d\n", length);

    return 0;
}