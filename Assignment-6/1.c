// 1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>

int main()
{
    int N, sum = 0;
    printf("Enter value of N : ");
    scanf("%d",&N);
    for (int i = 1; i<=N; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is %d.", N, sum);
    return 0;
}