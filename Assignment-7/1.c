// 1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int num, a = 0, b=1,c=0;  // a & b are first two values of fibonacci series.
    printf("Enter a value of num:\n");
    scanf("%d",&num);
    for( int i = 2;i< num;i++)  // already two values in series so initialized by 2.
    {
        c = a+b;
        a = b;
        b = c;
    }
    printf("The %dth fibonacci number is %d.",num,b);
    return 0;
}