// 9. Write a program to print cubes of the first 10 natural numbers

#include<stdio.h>

void main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d - %d\n", i, i * i * i);
    }
}