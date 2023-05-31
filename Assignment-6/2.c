// 2. Write a program to calculate sum of first N even natural numbers

#include <stdio.h>

int main()
{
    int N, sum = 0;
    printf("Enter value of N : ");
    scanf("%d", &N);
    for (int i = 2; i <= N*2; i++)
    {
        if(i % 2 == 0)
        sum = sum + i;
    }
    printf("Sum of first %d even natural numbers is %d.", N, sum);
    return 0;
}