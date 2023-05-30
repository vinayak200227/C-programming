// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if((n & 1) ==1)
        printf("Number is odd.");
    else
        printf("Number is Even.");
    return 0;
}