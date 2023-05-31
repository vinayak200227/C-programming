// 8. Write a program to print squares of the first N natural numbers

# include<stdio.h>

void main()
{
    int N;
    printf("Enter value of N : ");
    scanf("%d", &N);
    for(int i= 1; i<=N; i++)
    {
        printf("%d - %d\n",i, i*i);
    }
}