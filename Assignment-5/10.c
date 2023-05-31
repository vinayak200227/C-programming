// 10. Write a program to print a table of N.

#include<stdio.h>

void main()
{
    int N;
    printf("Enter value of N : ");
    scanf("%d", &N);
    for(int i = 1; i<=10; i++)
    {
        printf("%d X %d = %d\n",N,i,N*i);
    }
}