// Write a program to print the first N even natural numbers in reverse order

#include <stdio.h>

void main()
{
    int N;
    printf("Enter value of N : ");
    scanf("%d", &N);
    for (int i = N*2; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}