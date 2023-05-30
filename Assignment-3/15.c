// 15. Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number:\n");
    scanf("%d", &number);
    if(number >0)
        printf("Number is positive.");
    else if(number < 0)
        printf("Number is negative.");
    else
        printf("Number is zero.");
    return 0;
}