// 8. Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>
int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n,i;
    printf("Enter number:\n");
    scanf("%d", &n);
    printf("First %d terms of fibonacci series are :\n",n);
    for(i= 1; i<=n ; i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}