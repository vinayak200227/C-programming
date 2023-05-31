// 3. Write a program to calculate sum of first N odd natural numbers

#include <stdio.h>

int main()
{
    int N, sum = 0;
    printf("Enter value of N : ");
    scanf("%d", &N);
    for (int i = 1; i <= N*2; i++)
    {
        if (i % 2 != 0)
        sum = sum + i;
    }
    printf("Sum of first %d odd natural numbers is %d.", N, sum);
    return 0;
}