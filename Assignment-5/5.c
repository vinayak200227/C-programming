// 5. Write a program to print the first N odd natural numbers in reverse order.

#include <stdio.h>

void main()
{
    int N;
    printf("Enter value of N : ");
    scanf("%d", &N);
    for (int i = N*2 - 1 ; i > 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}