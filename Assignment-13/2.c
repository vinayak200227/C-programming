// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;

    return n  + sum(n - 2);   
}
int main()
{
    int n, x;
    printf("Enter value of n:\n");
    scanf("%d", &n);
    x = sum(2 * n - 1); // nth odd number is (2n - 1)
    printf("Sum of first %d  odd natural numbers is %d", n, x);
    return 0;
}