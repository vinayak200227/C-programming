// 10. Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
int power(int n,int m)
{
    if (m == 1)
        return n;
    return n*power(n,m-1); 
}
int main()
{
    int n,m;
    printf("Enter number:\n");
    scanf("%d", &n);
    printf("Enter power:\n");
    scanf("%d", &m);
    printf("%d raise to %d is %d.", n,m,power(n,m));
    return 0;
}