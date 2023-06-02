// 5. Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>
int sum(int n)
{
    if (n % 10 == n)
        return n;
    
    return n % 10 + sum(n/10);
}
int main()
{
    int n, x;
    printf("Enter number:\n");
    scanf("%d", &n);
    x = sum(n);
    printf("sum of digits of %d is %d", n, x);
    return 0;
}