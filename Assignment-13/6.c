// 6. Write a recursive function to calculate factorial of a given number

#include <stdio.h>
int fact(int n)
{
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}
int main()
{
    int n, x;
    printf("Enter number:\n");
    scanf("%d", &n);
    x = fact(n);
    printf("Factorial of %d is %d.", n, x);
    return 0;
}