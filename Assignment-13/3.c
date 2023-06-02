// 3. Write a recursive function to calculate sum of first N even natural numbers

#include <stdio.h>
int sum(int n)
{
    if (n == 2)
        return 2;

    return n + sum(n - 2);
}
int main()
{
    int n, x;
    printf("Enter value of n:\n");
    scanf("%d", &n);
    x = sum(2 * n ); // nth odd number is 2n
    printf("Sum of first %d  Even natural numbers is %d", n, x);
    return 0;
}