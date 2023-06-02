// 7. Write a function to print first N terms of Fibonacci series(TSRN)

#include<stdio.h>

void fib(int N)
{
    int a = 0;
    int b = 1;
    int c;

    if(N == 1)
        printf("%d ",a);
    else if(N >= 2)
    {
        printf("%d %d ",a,b);
    }

    for(int i = 3; i<=N; i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d ",b);
    }
}

int main()
{
    int N;
    printf("Enter a value of N : ");
    scanf("%d",&N);

    fib(N);
    return 0;
}