// Write a program to print the first N odd natural numbers

#include<stdio.h>

void main()
{
    int N;
    printf("Enter value of N : ");
    scanf("%d", &N);
    for( int i = 0, j = 0; j<N;i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n",i);
            j++;
        }
    }
}