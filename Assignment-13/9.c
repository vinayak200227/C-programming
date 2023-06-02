// 9. Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>
int count(int n)
{
    static int c = 0;  // only at first time c will assign to 0
    if (n == 0)
        return c;
    else
        c++;
        count(n/10);
}
int main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    printf("Number of digits in %d are %d.",n,count(n));
    return 0;
}