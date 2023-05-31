// 3. Write a program to check whether a given number is there in the Fibonacci series or not .
#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c = 0,x; // a & b are first two values of fibonacci series.
    printf("Enter a value of num:\n");
    scanf("%d", &num);
    printf("Enter number to check:\n");
    scanf("%d",&x);
    int flag = 0;
    for (int i = 2; i < num; i++) // already two values in series so initialized by 2.
    {
        c = a + b;
        if(x == c)
            flag =  1;
        a = b;
        b = c;
    }
    if (flag == 1)
        printf("%d is prsent in fibonacci series.", x);
    else
        printf("%d is not present in fibonacci series.", x);
    return 0;
}