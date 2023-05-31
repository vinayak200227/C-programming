// 8. Write a program to check whether a given number is a Prime number or not 
#include <stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for( i = 2; i<n/2; i++)
    {
        if(n%i == 0)
        {
            flag =1;
            break;
        }
    }
    if(flag=0)
        printf("Number is prime.");
    else
        printf("Number is not prime.");
    return 0;
}