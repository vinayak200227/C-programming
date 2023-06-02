// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>

int fact(int n)
{
    int i,f=1;

    for(i = 1; i<=n; i++)
        f= f*i;

    return f;
}

int main()
{
    printf("Factorial is %d\n", fact(5));
}