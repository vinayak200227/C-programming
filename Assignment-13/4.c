// 4. Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;

    return n*n + sum(n - 1);
}
int main()
{
    int n, x;
    printf("Enter value of n:\n");
    scanf("%d", &n);
    x = sum(n );
    printf("Sum of squares first %d natural numbers is %d", n, x);
    return 0;
}